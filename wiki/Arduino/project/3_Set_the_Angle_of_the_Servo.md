## 3. Régler l'angle du servomoteur

Dans la prochaine leçon, nous assemblerons ce kit de ferme intelligente. Avant d'assembler le servomoteur au kit, nous devons **régler son angle à 165°** (avec une marge de 15° réservée à chaque extrémité) afin qu'il fonctionne comme prévu et évite les dommages mécaniques.

> **⚠ AVERTISSEMENT — Lire avant de continuer :**
>
> 1. **NE PAS régler le servomoteur à 180°.** Le mécanisme de la porte ne nécessite pas la plage complète de 0° à 180°. Le réglage à l'extrémité extrême fera que le servomoteur appuiera contre l'arrêt mécanique, ce qui pourrait surchauffer et endommager de façon permanente le moteur du servomoteur.
> 2. **Maintenir la carte sous tension pendant l'installation.** Lorsque le servomoteur est alimenté et maintient son angle, NE PAS forcer l'engrenage ou la porte à la main. Si la carte n'est pas alimentée, le servomoteur n'a pas de couple de maintien, et la rotation manuelle de l'engrenage décalera l'angle calibré, provoquant un désalignement après la mise sous tension.
> 3. **NE PAS utiliser la force brute.** Si la porte ne bouge pas en douceur, arrêtez immédiatement et vérifiez l'assemblage. Forcer la porte endommagera les engrenages du servomoteur.

![image-20250416152950497](../media/image-20250416152950497.png)

1. Connectez le servomoteur à la **broche io26** de la carte ESP32 PLUS. Remarque : Les fils marron, rouge et orange du servomoteur sont respectivement connectés à GND(G), 5V(V) et à la **broche io26.**

![image028-1](../media/image028-1.png)

2. Connectez la carte ESP32 PLUS à l'ordinateur.

![image-20250416153731709](../media/image-20250416153731709.png)

3. Assurez-vous d'avoir installé la bibliothèque **ESP32Servo.h** pour l'Arduino IDE. Si ce n'est pas le cas, veuillez vous référer à la section précédente pour l'installer.

![3bd9304d-73d9-4fc3-9e59-50c55f947960](../media/3bd9304d-73d9-4fc3-9e59-50c55f947960.png)

4. Ouvrez le code **window_servo** fourni dans notre package tutoriel avec Arduino IDE.

> **Remarque :** Le code `window_servo` fourni règle le servomoteur à **165°** (pas 180°). Cela réserve un tampon mécanique de 15° pour éviter une collision à l'arrêt final. La plage de travail de la porte est de 15° à 165°.

![image-20250416154133013](../media/image-20250416154133013.png)

5. Cliquez sur **Outils**, sélectionnez "**ESP32 Dev Module**" pour le type de carte, et sélectionnez **COM-XX** pour le Port comme indiqué dans le Gestionnaire de périphériques.

![51454125](../media/51454125.png)

6. Cliquez sur ![image-20250416154532804](../media/image-20250416154532804.png) pour télécharger. Une fois le téléchargement terminé, le servomoteur se déplacera à **165°** et maintiendra cette position.

> **Important :** Maintenez la carte sous tension et le servomoteur à 165° pendant que vous passez à l'étape d'assemblage. NE **PAS** déconnecter l'alimentation ni déplacer manuellement l'engrenage tant que le panneau de la porte n'est pas entièrement installé.

![image-20250416155301751](../media/image-20250416155301751.png)
