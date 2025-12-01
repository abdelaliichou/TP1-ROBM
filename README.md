# 📝 **Rapport de TP – Robotique Mobile (TP1)**

**Étudiant :** Abdelali ichou
**Groupe :** Group1, M2 ILA
**Date :** 01-12-2025

---

# **1. Assemblage du robot**

### ✔️ Objectif

Assembler le robot mobile à partir des composants fournis : M5StickC Plus, RoverC, servomoteur, capteurs ToF, couleur, ultrasons, LEGO, câbles Grove.

### ✔️ Description

Le robot a été assemblé en suivant le livret fourni sur Moodle.
Tous les modules ont été connectés à l’aide des ports Grove conformément aux instructions.

### 📸 *Photo de mon robot assemblé*

![Robot assemblé](/images/robot.jpg)

---

# **2. Mise en route du robot**

### ✔️ Allumage

* M5StickC Plus activé via le bouton arrière-gauche
  
### ✔️ Connexion WiFi

* Réseau : `ROBM_Moulitine`
* Mot de passe : `WALL-E!SuzanCalvin`

---

# **3. Utilisation de Pixi ROS2**

### ✔️ Démarrage de l’environnement ROS

```
pixi shell
```

### ✔️ Lancement du pont UDP

```
pixi run udp_bridge
```

Cette commande active la communication entre le robot et ROS2.

### 📸 *Capture d’écran : communication avec le robot*

![Topics list](/images/communication.png)

---

# **4. Exploration des topics ROS2**

### ✔️ Liste des topics ROS2

Commande utilisée :

```
ros2 topic list
```

### 📸 *Capture d’écran : liste des topics*

![Topics list](/images/topics.png)

---

# ## **5. Lecture des données des capteurs**

## **5.1 Capteur ToF (distance)**

### ✔️ Lecture des données

```
ros2 topic echo /tof
```

### 📸 *Capture d’écran : communication avec le robot*

![Topics list](/images/tof.png)

### **Question : Que se passe-t-il parfois avec les mesures ?**

**Réponse :**
Le capteur ToF renvoie parfois des valeurs incorrectes (0, très grandes valeurs).
Cela se produit lorsque :

* aucune réflexion n’est détectée
* l’objet est trop loin
* l’angle de réflexion est mauvais
* le capteur est trop proche de l’objet

### 📈 Affichage dans *rqt*

* Ajout d’un onglet `Plugins/visualization/plot`
* Ajout d’un `topic/range`

### 📸 *Capture d’écran du graphe ToF dans rqt*

![Topics list](/images/tof graph.png)

---

## ### **5.2 Capteur Couleur**

### ✔️ Lecture des données

```
ros2 topic echo /color
```

### **Question : Quelles valeurs pour différents sols ?**

Voici mes mesures :

| Type de sol | R | G | B | Luminosité |
| ----------- | - | - | - | ---------- |
| Blanc       |   |   |   |            |
| Noir        |   |   |   |            |
| Rouge       |   |   |   |            |
| Bois        |   |   |   |            |

### 📸 *Capture d’écran du Rouge*

![Topics list](/images/rouge.png)


### 📸 *Capture d’écran du Blue*

![Topics list](/images/blue.png)


### 📸 *Capture d’écran du Green*

![Topics list](/images/green.png)


### **Question : À quoi sert ce capteur ?**

**Réponse :**

* Reconnaissance de surfaces
* Détection de zones colorées

---

# ## **6. Développement d’un nœud ROS2 : Détection de couleur**

## ### **6.1 Création du package**

Commande utilisée :

```
ros2 pkg create --build-type ament_python --node-name couleur robm_tp1_color
```

### 📸 *Capture de l’arborescence du package*

```
![Arborescence package](CHEMIN_VERS_L_IMAGE)
```

---

## ### **6.2 Code du nœud : abonnement au capteur couleur**

Voici le code utilisé :

```python
import rclpy
from rclpy.node import Node
from robm_interfaces.msg import Color
from std_msgs.msg import String
import numpy as np

class ColorDetector(Node):
    def __init__(self):
        super().__init__('couleur')

        self.subscription = self.create_subscription(
            Color,
            'color',
            self.callback_color,
            10
        )

        self.publisher = self.create_publisher(String, 'nom_couleur', 10)

        # Valeurs des couleurs mesurées auparavant
        self.known_colors = {
            "blanc": np.array([200, 200, 200]),
            "noir":  np.array([10, 10, 10]),
            "rouge": np.array([180, 40, 30]),
            "vert":  np.array([40, 180, 40]),
            "bleu":  np.array([30, 40, 180])
        }

    def callback_color(self, msg):
        current = np.array([msg.r, msg.g, msg.b])

        distances = {name: np.linalg.norm(current - ref)
                     for name, ref in self.known_colors.items()}

        detected = min(distances, key=distances.get)

        msg_out = String()
        msg_out.data = detected
        self.publisher.publish(msg_out)

        self.get_logger().info(f"Couleur détectée : {detected}")

def main(args=None):
    rclpy.init(args=args)
    node = ColorDetector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
```

---

## ### **6.3 Test du nœud**

### ✔️ Lancement

```
ros2 run robm_tp1_color couleur
```

### ✔️ Observation du topic :

```
ros2 topic echo /nom_couleur
```

### 📸 *Capture : topic nom_couleur*

```
![nom_couleur](CHEMIN_VERS_L_IMAGE)
```

---

# ## **7. Visualisation du réseau ROS : rqt_graph**

```
rqt_graph
```

Le schéma attendu :

```
/color  --->  /couleur  --->  /nom_couleur
```

### 📸 *Capture d’écran du graphe ROS2*

```
![rqt_graph](CHEMIN_VERS_L_IMAGE)
```

---

# **8. Problèmes rencontrés**

Exemples (à modifier selon ton expérience) :

* difficultés de connexion WiFi
* erreur Python dans le package (ex : permissions)
* capteur ToF instable
* problème avec rqt qui ne rafraîchit pas

---

# **9. Conclusion**

Ce TP m’a permis de :

* comprendre & manipuler ROS2 (topics, publishers, subscribers)
* utiliser *rqt* pour visualiser des données
* développer un nœud ROS2 fonctionnel de détection de couleur
* publier un message personnalisé sur un topic
