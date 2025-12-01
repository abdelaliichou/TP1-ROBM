# Environnement Pixi pour le module ROBM

## Installation de Pixi
Nous allons utiliser Pixi (https://pixi.sh) afin d'avoir un environnement ROS 2 pour les TP de ROBM.

### Linux et macOS
```bash
curl -fsSL https://pixi.sh/install.sh | bash
```
Relancez un terminal pour que la commande `pixi` soit disponible.

### Windows
- Installez Pixi comme indiqué sur le site : [Pixi — Installation](https://pixi.sh/latest/installation/#__tabbed_1_2)
- Installez Visual Studio 2022 avec le support C++ :
  [Installation Microsoft VS 2022](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=msvc-170)

## Création du workspace ROS 2 avec les paquets ROBM

Récupérez le dépôt depuis le Gitlab de l'ISTIC :
```bash
git clone --recurse-submodules https://gitlab2.istic.univ-rennes1.fr/robm/robm-pixi.git
```

Sous Windows, il est conseillé de cloner dans `C:\robm-pixi` pour éviter les chemins trop longs et les espaces.

## Test

Placez-vous dans le dossier `robm-pixi`.

Lancez :
```bash
pixi run build
```
(Assurez-vous d'avoir une connexion Internet, car l'environnement ROS 2 sera téléchargé lors de la première exécution.)  
Vérifiez que `pixi run rviz2` lance RViz avec une vue 3D.