import rclpy
from rclpy.node import Node
from robm_interfaces.msg import Color
import numpy as np

class ColorDetector(Node):
    def __init__(self):
        super().__init__('couleur')

        # Abonnement au capteur couleur
        self.subscription = self.create_subscription(
            Color,
            'color',
            self.callback_color,
            10
        )

        # Valeurs moyennes que TU dois mesurer et mettre ici
        # Par exemple :
        self.known_colors = {
            "blanc": np.array([200, 200, 200]),
            "noir":  np.array([10, 10, 10]),
            "rouge": np.array([180, 40, 30]),
            "vert":  np.array([40, 180, 40]),
            "bleu":  np.array([30, 40, 180])
        }

        self.get_logger().info("Nœud couleur lancé.")

    def callback_color(self, msg):
        current = np.array([msg.r, msg.g, msg.b])

        # Distance euclidienne à chaque couleur connue
        distances = {}
        for name, ref in self.known_colors.items():
            distances[name] = np.linalg.norm(current - ref)

        detected = min(distances, key=distances.get)

        self.get_logger().info(f"J'ai détecté : {detected}")

def main(args=None):
    rclpy.init(args=args)
    node = ColorDetector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
