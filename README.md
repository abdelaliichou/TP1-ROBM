# Environnement Pixi pour le module ROBM

## Installation de Pixi
Nous allons utiliser Pixi (https://pixi.sh) afin d'avoir un environnement ROS 2 pour les TP de ROBM.

### Linux et macOS
```bash
curl -fsSL https://pixi.sh/install.sh | bash
```
Relancez un terminal pour que la commande `pixi` soit disponible.

Voici un **rapport complet en Markdown**, clair, structuré, avec sections *question/réponse* et des **emplacements pour tes captures d’écran**.
Tu peux le copier-coller dans ton rapport Moodle.

Si tu veux, je peux aussi générer une version PDF après.

---

# 📝 **Rapport de TP – Robotique Mobile (TP1)**

**Étudiant :** *…*
**Groupe :** *…*
**Date :** *…*

---

# ## **1. Assemblage du robot**

### ✔️ Objectif

Assembler le robot mobile à partir des composants fournis : M5StickC Plus, RoverC, servomoteur, capteurs ToF, couleur, ultrasons, LEGO, câbles Grove.

### ✔️ Description

Le robot a été assemblé en suivant le livret fourni sur Moodle.
Tous les modules ont été connectés à l’aide des ports Grove conformément aux instructions.

### 📸 *Photo de mon robot assemblé*

👉 *Ajouter ici la photo*

```
![Robot assemblé](CHEMIN_VERS_L_IMAGE)
```

---

# ## **2. Mise en route du robot**

### ✔️ Allumage

* M5StickC Plus activé via le bouton arrière-gauche
* Base mobile activée via l’interrupteur arrière

L’écran affiche :

* Niveau de batterie
* Capteurs IMU
* Nom du robot (utilisé pour le WiFi et ROS2)

### ✔️ Connexion WiFi

* Réseau : `ROBM_<NomDuRobot>`
* Mot de passe : `WALL-E!SuzanCalvin`

---

# ## **3. Utilisation de Pixi ROS2**

### ✔️ Démarrage de l’environnement ROS

```
pixi shell
```

### ✔️ Lancement du pont UDP

```
pixi run udp_bridge
```

Cette commande active la communication entre le robot et ROS2.

---

# ## **4. Exploration des topics ROS2**

### ✔️ Liste des topics ROS2

Commande utilisée :

```
ros2 topic list
```

### 📸 *Capture d’écran : liste des topics*

👉 *Ajouter ici*

```
![Topics list](CHEMIN_VERS_L_IMAGE)
```

---

# ## **5. Lecture des données des capteurs**

## ### **5.1 Capteur ToF (distance)**

### ✔️ Lecture des données

```
ros2 topic echo /tof
```

### ❓ **Question : Que se passe-t-il parfois avec les mesures ?**

**Réponse :**
Le capteur ToF renvoie parfois des valeurs incorrectes (0, très grandes valeurs).
Cela se produit lorsque :

* aucune réflexion n’est détectée
* l’objet est trop loin
* l’angle de réflexion est mauvais
* le capteur est trop proche de l’objet

### 📈 Affichage dans *rqt*

* Ajout d’un onglet `Plot`
* Ajout d’un `TopicMonitor`

### 📸 *Capture d’écran du graphe ToF dans rqt*

```
![Graphe ToF](CHEMIN_VERS_L_IMAGE)
```

---

## ### **5.2 Capteur Couleur**

### ✔️ Lecture des données

```
ros2 topic echo /color
```

### ❓ **Question : Quelles valeurs pour différents sols ?**

Voici mes mesures (exemples, à remplacer par tes valeurs) :

| Type de sol | R | G | B | Luminosité |
| ----------- | - | - | - | ---------- |
| Blanc       |   |   |   |            |
| Noir        |   |   |   |            |
| Rouge       |   |   |   |            |
| Bois        |   |   |   |            |

### ❓ **Question : À quoi sert ce capteur ?**

**Réponse :**

* Reconnaissance de surfaces
* Suivi de ligne
* Détection de zones colorées
* Navigation conditionnelle (ex : rouge = stop)

### 📸 *Capture d’écran des valeurs couleur*

```
![Color data](CHEMIN_VERS_L_IMAGE)
```

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

# ## **8. Problèmes rencontrés**

Exemples (à modifier selon ton expérience) :

* difficultés de connexion WiFi
* erreur Python dans le package (ex : permissions)
* capteur ToF instable
* problème avec rqt qui ne rafraîchit pas

---

# ## **9. Conclusion**

Ce TP m’a permis de :

* comprendre l’architecture matérielle d’un robot mobile
* manipuler ROS2 (topics, publishers, subscribers)
* utiliser *rqt* pour visualiser des données
* développer un nœud ROS2 fonctionnel de détection de couleur
* publier un message personnalisé sur un topic

Il constitue une excellente introduction à la robotique mobile, au traitement de capteurs et à la programmation ROS2.

---

Si tu veux, je peux :
👉 générer une **version PDF**
👉 ajouter automatiquement tes captures (si tu me les donnes)
👉 reformuler ou raccourcir pour ton enseignant
