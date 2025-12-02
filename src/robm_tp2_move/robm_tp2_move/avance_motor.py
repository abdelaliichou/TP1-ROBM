import rclpy
from rclpy.node import Node
from robm_interfaces.msg import RoverMotorsCmd

class AvanceMotor(Node):
    def __init__(self):
        super().__init__('avance_motor')

        # Publisher vers cmd_motors
        self.publisher = self.create_publisher(RoverMotorsCmd, 'cmd_motors', 10)

        # Timer à 10 Hz
        self.counter = 0
        self.max_count = 5  # 20 messages → 2 secondes
        self.timer = self.create_timer(0.1, self.timer_callback)  # 0.1s = 10Hz

    def timer_callback(self):
        if self.counter < self.max_count:
            msg = RoverMotorsCmd()
            # Déplacement avant : tous moteurs à +0.5
            msg.front_left = 0.5
            msg.front_right = 0.5
            msg.rear_left = 0.5
            msg.rear_right = 0.5

            self.publisher.publish(msg)
            self.get_logger().info(f"Commande moteur envoyée ({self.counter+1}/{self.max_count})")
            self.counter += 1
        else:
            # Stop le robot après 2 secondes
            msg = RoverMotorsCmd()
            msg.front_left = 0.0
            msg.front_right = 0.0
            msg.rear_left = 0.0
            msg.rear_right = 0.0
            self.publisher.publish(msg)
            self.get_logger().info("Arrêt du robot.")
            self.timer.cancel()

def main(args=None):
    rclpy.init(args=args)
    node = AvanceMotor()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()