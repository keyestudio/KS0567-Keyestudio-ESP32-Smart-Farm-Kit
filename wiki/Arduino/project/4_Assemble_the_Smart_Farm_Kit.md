## 4. Assembler le kit de ferme intelligente



### Étape 1 Installer la carte ESP32 et le module de relais



#### 1.1 Composants requis


![img](../media/image001.png)


#### 1.2


![img](../media/image002.png)


#### 1.3


![img](../media/image003.png)


#### 1.4


![img](../media/image004.png)


#### 1.5


![img](../media/image006.png)


### Étape 2 Installer le cadre de fixation du boîtier de batterie et installer la cabine d'alimentation, connecter la carte ESP32 et le module de relais



#### 2.1 Composants requis


![img](../media/image007.png)


#### 2.2


Assembler les planches de bois X et O sur la plaque inférieure

![img](../media/image008.png)


#### 2.3


![img](../media/image010.png)


#### 2.4


![img](../media/image011.png)


#### 2.5


![img](../media/image012.png)


#### 2.6


![img](../media/image013.png)


#### 2.7


![img](../media/image014.png)


#### 2.8 Connecter la carte ESP32 et le module de relais


| Module | Fil | Broche |
| --- | --- | --- |
| Module de relais | 3PIN 20cm | IO25 |

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io25 |

![img](../media/image015.png)


#### 2.9


![img](../media/image015-1.png)


### Étape 3 Installer la sous-structure de la maison



#### 3.1 Composants requis


![img](../media/image016.png)


#### 3.2


![img](../media/image017.png)


#### 3.3


![img](../media/image018.png)


#### 3.4


![img](../media/image019.png)


#### 3.5


![img](../media/image020.png)


#### 3.6


![img](../media/image021.png)


#### 3.7


![img](../media/image022.png)


#### 3.8


![img](../media/image023.png)


#### 3.9


![img](../media/image024.png)


#### 3.10


![img](../media/image025.png)


#### 3.11


![img](../media/image026.png)


### Étape 4 Installer la porte de la cabine d'alimentation



#### 4.1 Composants requis


![img](../media/image027.png)


#### 4.2 Régler le Servo à 180°


![image-20250416162128859](../media/image-20250416162128859.png)

La feuille acrylique est emballée séparément, et il est recommandé d'en
retirer le film protecteur pour réduire la friction lorsqu'elle se déplace comme une
porte.


#### 4.3 Installer le Servo


![img](../media/image029.png)


#### 4.4


**Remarque : Les vis doivent être serrées pour maintenir le servo stable,
sinon la porte pourrait se bloquer.**

![img](../media/image030.png)


#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Installer les vis autotaraudeuses M1.4*6MM comme indiqué ci-dessous

![img](../media/6e1caadec8b1ec99b0093200763607b6.jpg)


#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)


#### 4.7


![img](../media/image033.png)


#### 4.8


Ne pas tourner l'engrenage après l'avoir installé sur le servo. Si vous
avez déjà tourné l'engrenage, vous devrez réajuster l'angle du servo à
180°.

![img](../media/image034.png)


#### 4.9


**REMARQUE : Lors de l'installation du couvercle de la boîte d'alimentation, son ouverture doit
être complètement fermée.**

![img](../media/image035.png)


#### 4.10


![img](../media/image036.png)


#### 4.11


![img](../media/image037.png)


#### 4.12


![img](../media/image037-1.png)


#### 4.13 Tester la porte


1. Connecter le Servo à la broche IO26 de la carte ESP32. Connecter le fil jaune à S,
   le rouge à V, le noir à G.

![image028-1](../media/image028-1-1744850789118-1.png)

2. Connecter 6 piles AA au port DC 7-12V de la carte ESP32.
   (Piles non incluses dans le kit)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Télécharger le code de test

A. Connecter la carte ESP32 à l'ordinateur avec le câble USB. Ouvrir le
fichier INO dans le dossier **6.1Servo** avec Arduino IDE.

![image-20250418081022882](../media/image-20250418081022882.png)

![image-20250418081231084](../media/image-20250418081231084.png)

B. Cliquer sur Outils, sélectionner "ESP32 Dev Module" pour le type de carte dans la
barre de menu déroulant, et sélectionner COM-XX pour le Port (Selon le port
attribué par votre ordinateur dans le gestionnaire de périphériques)

C. Veuillez vous assurer que vous avez téléchargé la bibliothèque **ESP32Servo** et
ensuite télécharger le code. La porte de la cabine d'alimentation s'ouvrira et se fermera
lentement.

![image-20250417085407205](../media/image-20250417085407205.png)

REMARQUE : Après avoir téléchargé le code, si la porte ne peut pas être ouverte et fermée et que le servo est chaud, veuillez couper l'alimentation immédiatement.

**vérifier :**

1. Si la porte en plastique a un bon contact et des points de force avec la
   structure d'engrenage du servo.
1. Si la pointe de la vis de fixation sur la structure d'engrenage du
   servo est bloquée avec la coque en plastique du servo. Si c'est le cas, veuillez
   desserrer un peu la vis de fixation pour éviter que sa pointe ne touche
   le servo.

![image-20250417085630662](../media/image-20250417085630662.png)


### Étape 5 Installer l'écran LCD et le capteur DHT11



#### 5.1 Composants requis


![img](../media/image038.png)


#### 5.2


![img](../media/image039.png)


#### 5.3


![img](../media/image040.png)


#### 5.4


![img](../media/image041.png)


#### 5.5 Prototype


![img](../media/image042.png)


#### 5.6 Câblage


**Connecter les modules via des fils Dupont.**