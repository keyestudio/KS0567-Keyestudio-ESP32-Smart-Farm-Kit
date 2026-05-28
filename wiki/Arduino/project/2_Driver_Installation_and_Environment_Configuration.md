## 2. Configurer l'Arduino


### 2.1 Installer le pilote pour la carte KEYESTUDIO ESP32 PLUS


La carte KEYESTUDIO ESP32 PLUS est une carte de développement universelle WIFI et Bluetooth basée sur l'ESP32, intégrant le module ESP32-WOROOM-32 et compatible avec Arduino.

Elle dispose d'un capteur à effet Hall, d'une interface SDIO/SPI haute vitesse, d'UART, d'I2S ainsi que d'I2C. De plus, elle est équipée du système d'exploitation freeRTOS, ce qui la rend tout à fait adaptée à l'Internet des objets et à la maison intelligente.

**Spécifications**

Tension : 3.3V-5V

Courant de sortie : 1.2A (maximum)

Puissance de sortie maximale : 10W

Température de fonctionnement : -10℃~50℃

Dimensions : 69 * 54 * 14.5mm

Poids : 25.5g

Attributs de protection de l'environnement : ROHS

![j255](../media/j255.png)

**Installer le pilote**

Connectez la carte ESP32 à l'ordinateur et attendez que Windows commence son processus d'installation du pilote. Souvent, le pilote CH340 sera automatiquement installé par votre système lors de l'utilisation d'Arduino. Vous pouvez vérifier le Gestionnaire de périphériques ou le port de l'IDE Arduino pour voir si le pilote est correctement installé.

![a10](../media/a10.png)

Si le pilote CH340 n'est pas installé automatiquement, nous devons l'installer manuellement.

Cliquez pour télécharger le [pilote Windows CH340](/Arduino/Windows.zip)

![a51](../media/a51.png)

1. Ouvrez le **Gestionnaire de périphériques** en cliquant avec le bouton droit sur « **Mon PC** » et en sélectionnant **Propriétés**. Regardez sous **Autres périphériques**. Vous devriez voir un port ouvert nommé **USB Serial**.

![a11](../media/a11.png)

2. Cliquez avec le bouton droit sur « **USB Serial** » et choisissez l'option « **Mettre à jour le pilote** ».

![a13](../media/a13.png)

3. Choisissez l'option « **Parcourir mon ordinateur pour le logiciel de pilote** ».

![a14](../media/a14.png)

4. Sélectionnez le fichier de pilote nommé « **usb_ch341_3.1.2009.06** », situé dans le dossier Driver du package du tutoriel.

![a15](../media/a15.png)

5. Pilote installé avec succès.

![a16](../media/a16.png)

6. Le Gestionnaire de périphériques se rafraîchira automatiquement. Regardez sous Ports (COM & LPT). Vous devriez voir un port ouvert nommé « **USB-SERIAL CH340(COM3)** ».

![a10](../media/a10.png)

7. Cliquez sur **Outils>Port** dans l'IDE Arduino, vous pouvez trouver le même port COM que le pilote CH340 dans le gestionnaire de périphériques.

![a38](../media/a38.png)


### 2.2 Ajouter des bibliothèques à l'IDE Arduino


**Pourquoi utiliser des bibliothèques ?**

Les bibliothèques sont incroyablement utiles lors de la création de tout type de projet. Elles rendent notre expérience de développement

beaucoup plus fluide, et il en existe une quantité presque infinie. Elles sont utilisées pour

interfacer avec de nombreux capteurs différents, des RTC, des modules Wi-Fi, des matrices RGB et bien sûr avec d'autres

composants de votre carte.

**Inclure une bibliothèque dans le sketch**

Pour utiliser une bibliothèque, vous devez d'abord l'inclure en haut du sketch. Si vous trouvez une ligne de code au format `#include "nom de la bibliothèque"` au début du code lorsque vous utilisez notre code, cela signifie que vous devez d'abord ajouter ce fichier de bibliothèque à l'IDE Arduino avant de pouvoir télécharger ce code avec succès.

![image-20250416150700630](../media/image-20250416150700630.png)

Pour faire fonctionner le kit de ferme intelligente, nous devrons **ajouter ces fichiers de bibliothèque à l'IDE Arduino.** Vous pouvez les trouver dans le package du tutoriel.

![image-20250416150847190](../media/image-20250416150847190.png)

**Importer une bibliothèque .zip**

Dans la barre de menu, allez dans **Croquis > Inclure une bibliothèque > Ajouter une bibliothèque .ZIP...** Il vous sera demandé de sélectionner la bibliothèque que vous souhaitez ajouter.

![4564654654](../media/4564654654.png)

Naviguez jusqu'à l'emplacement du fichier .zip et ouvrez-le.

![image-20250416151456661](../media/image-20250416151456661.png)

Vous devrez peut-être redémarrer l'IDE Arduino pour que la bibliothèque soit disponible. Après avoir installé le fichier de bibliothèque avec succès, vous les verrez dans la liste.

![image-20250416151805635](../media/image-20250416151805635.png)


### 2.3 Configurer l'environnement de développement pour ESP32


Avant d'utiliser l'IDE Arduino pour programmer la ferme intelligente, vous devez configurer l'IDE Arduino, sélectionner le type de carte correct (**ESP32 Dev Module**) pour la carte ESP32 Plus, et sélectionner le **port COM** qui est attribué dans le gestionnaire de périphériques.

Il n'y a pas d'option pour ESP32 dans la liste des cartes par défaut d'Arduino, nous devons donc l'**installer manuellement**.

![a30](../media/a30.png)

Cliquez sur **Fichier > Préférences**. Copiez le lien de la carte ESP32 (https://espressif.github.io/arduino-esp32/package_esp32_index.json) dans les **URL de gestionnaire de cartes supplémentaires**, et cliquez sur **OK**.

![a31](../media/a31.png)

Cliquez sur l'icône du « **Gestionnaire de cartes** » dans le coin supérieur gauche.

![a32](../media/a32.png)

Recherchez **ESP32** dans la boîte de recherche et installez la dernière version. Vous pouvez vérifier son processus dans le coin inférieur droit. **Pendant l'installation, maintenez le réseau stable. Si l'installation échoue, répétez les étapes ci-dessus.**

Note : Nous utilisons la version 3.1.3 de l'ESP32 dans ce tutoriel. Veuillez la maintenir cohérente pour éviter les incompatibilités de code.

![a33](../media/a33.png)

L'installation est terminée :

![a34](../media/a34-1744788169084-23.png)

Cliquez sur **Outils > Carte > esp32**, et choisissez le **Module de développement EPS32**.

![a37](../media/a37.png)

Choisissez le port COM. Vous pouvez vérifier votre numéro de port dans le Gestionnaire de périphériques. S'il y a plusieurs ports COM, débranchez le câble de la carte pour voir quel port disparaît. C'est alors le port prêt à l'emploi. S'il n'y a pas de port COM, veuillez vérifier si le pilote est installé.

![image](../media/a10-1744788429738-26.png)

Ici, notre port COM est COM3. Cliquez sur « Outils » → « Port » → « COM3 ».

![image](../media/a38-1744788429738-27.png)