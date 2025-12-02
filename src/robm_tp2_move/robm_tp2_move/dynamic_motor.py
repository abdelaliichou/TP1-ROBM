import rclpy
from rclpy.node import Node
from robm_interfaces.msg import RoverMotorsCmd

import sys
import termios
import tty
import select


def get_key(timeout=0.01):
    """Lecture non bloquante d'une touche."""
    rlist, _, _ = select.select([sys.stdin], [], [], timeout)
    if rlist:
        return sys.stdin.read(1)
    return None


class TeleopKeyboard(Node):

    def __init__(self):
        super().__init__('teleop_keyboard')

        self.publisher = self.create_publisher(RoverMotorsCmd, 'cmd_motors', 10)

        self.speed = 0.5
        self.max_speed = 1.0
        self.min_speed = 0.1

        self.current_cmd = RoverMotorsCmd()

        self.get_logger().info("=== Téléoperation avancée ===")
        self.get_logger().info("Flèches = bouger | 0 = tourner | espace = stop")
        self.get_logger().info("+ / - = changer la vitesse | q = quitter")

        # Timer d'envoi 20 Hz (mouvements fluides)
        self.timer = self.create_timer(0.05, self.send_cmd)

    def send_cmd(self):
        """Envoie la commande courante."""
        self.publisher.publish(self.current_cmd)

    def update_speed(self, increase=True):
        if increase:
            self.speed = min(self.max_speed, self.speed + 0.1)
        else:
            self.speed = max(self.min_speed, self.speed - 0.1)
        self.get_logger().info(f"Vitesse = {self.speed:.2f}")

    def run(self):

        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        tty.setcbreak(fd)

        try:
            while rclpy.ok():
                key = get_key()

                msg = RoverMotorsCmd()

                # Aucune touche => STOP (mouvement continu)
                if key is None:
                    self.current_cmd = RoverMotorsCmd()
                    continue

                # Quitter
                if key == 'q':
                    self.get_logger().info("Fermeture du téléop.")
                    break

                # Modifier vitesse
                if key == '+':
                    self.update_speed(True)
                    continue

                if key == '-':
                    self.update_speed(False)
                    continue

                # Touches spéciales = séquences fléchées
                if key == '\x1b':
                    key2 = get_key()
                    key3 = get_key()

                    if key3 == 'A':  # ↑
                        msg.front_left = self.speed
                        msg.front_right = self.speed
                        msg.rear_left = self.speed
                        msg.rear_right = self.speed
                        self.get_logger().info("→ Avancer")

                    elif key3 == 'B':  # ↓
                        msg.front_left = -self.speed
                        msg.front_right = -self.speed
                        msg.rear_left = -self.speed
                        msg.rear_right = -self.speed
                        self.get_logger().info("→ Reculer")

                    elif key3 == 'D':  # ←
                        msg.front_left = -self.speed
                        msg.front_right = self.speed
                        msg.rear_left = self.speed
                        msg.rear_right = -self.speed
                        self.get_logger().info("→ Gauche")

                    elif key3 == 'C':  # →
                        msg.front_left = self.speed
                        msg.front_right = -self.speed
                        msg.rear_left = -self.speed
                        msg.rear_right = self.speed
                        self.get_logger().info("→ Droite")

                # Rotation → touche "0"
                elif key == '0':
                    msg.front_left = -self.speed
                    msg.front_right = self.speed
                    msg.rear_left = -self.speed
                    msg.rear_right = self.speed
                    self.get_logger().info("→ Rotation")

                # STOP
                elif key == ' ':
                    msg = RoverMotorsCmd()
                    self.get_logger().info("→ STOP")

                self.current_cmd = msg

        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

            # STOP final
            stop = RoverMotorsCmd()
            self.publisher.publish(stop)


def main(args=None):
    rclpy.init(args=args)
    node = TeleopKeyboard()
    try:
        node.run()
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()