## 4. Assembler le kit de ferme intelligente



### Étape 1 Installer la carte ESP32 et le module relais



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


### Étape 2 Installer le cadre de fixation du boîtier de batterie et installer la cabine d'alimentation, connecter la carte ESP32 et le module relais



#### 2.1 Composants requis


![img](../media/image007.png)


#### 2.2


Assembler les planches de bois X et O sur la plaque de base

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


#### 2.8 Connecter la carte ESP32 et le module relais


| Module | Fil | Broche |
| --- | --- | --- |
| Module Relais | 3PIN 20cm | IO25 |

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


#### 4.2 Régler le servo à 180°


![image-20250416162128859](../media/image-20250416162128859.png)

La feuille acrylique est emballée séparément, et il est recommandé de
retirer son film protecteur pour réduire le frottement lorsqu'elle se
déplace comme une porte.


#### 4.3 Installer le servo


![img](../media/image029.png)


#### 4.4


**Remarque : Les vis doivent être serrées pour maintenir le servo stable,
sinon la porte pourrait se bloquer.**

![img](../media/image030.png)


#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Installez les vis autotaraudeuses M1.4*6MM comme indiqué ci-dessous.

![img](../media/6e1caadec8b1ec99b0093200763607b6.jpg)


#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)


#### 4.7


![img](../media/image033.png)


#### 4.8


Ne tournez pas l'engrenage après l'avoir installé sur le servo. Si vous
avez déjà tourné l'engrenage, vous devrez réajuster l'angle du servo à
180°.

![img](../media/image034.png)


#### 4.9


**REMARQUE : Lors de l'installation du couvercle de la boîte d'alimentation,
son ouverture doit être complètement fermée.**

![img](../media/image035.png)


#### 4.10


![img](../media/image036.png)


#### 4.11


![img](../media/image037.png)


#### 4.12


![img](../media/image037-1.png)


#### 4.13 Tester la porte


1. Connectez le servo à la broche IO26 de la carte ESP32. Connectez le
   fil jaune à S, le rouge à V, le noir à G.

![image028-1](../media/image028-1-1744850789118-1.png)

2. Connectez 6 piles AA au port DC 7-12V de la carte ESP32.
   (Piles non incluses dans le kit)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Téléchargez le code de test

A. Connectez la carte ESP32 à l'ordinateur avec le câble USB. Ouvrez le
fichier INO dans le dossier **6.1Servo** avec Arduino IDE.

![image-20250418081022882](../media/image-20250418081022882.png)

![image-20250418081231084](../media/image-20250418081231084.png)

B. Cliquez sur Outils, sélectionnez "ESP32 Dev Module" pour le type de
carte dans la barre de menu déroulante, et sélectionnez COM-XX pour le
Port (selon le port attribué par votre ordinateur dans le gestionnaire
de périphériques).

C. Assurez-vous d'avoir téléchargé la bibliothèque **ESP32Servo** puis
téléchargez le code. La porte de la cabine d'alimentation s'ouvrira et
se fermera lentement.

![image-20250417085407205](../media/image-20250417085407205.png)

REMARQUE : Après avoir téléchargé le code, si la porte ne peut pas être ouverte et fermée et que le servo est chaud, coupez immédiatement l'alimentation.

**Vérifier :**

1. Si la porte en plastique a un bon contact et des points de force avec
   la structure d'engrenage du servo.
2. Si la pointe de la vis de fixation sur la structure d'engrenage du
   servo est bloquée avec la coque en plastique du servo. Si c'est le
   cas, desserrez un peu la vis de fixation pour éviter que sa pointe
   n'entre en contact avec le servo.

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


**Connectez les modules via des fils Dupont.**

| Module | Fil |
| --- | --- |
| Capteur de température et d'humidité | 3PIN 20cm |

**Faites attention à la couleur du fil Dupont :**

**Pour le capteur de température et d'humidité, connectez le jaune à S, le rouge à V,
le noir à G.**

![img](../media/image043.png)


#### 5.7


| Module | Fil |
| --- | --- |
| LCD 1602 | 4PIN **(Noir-Rouge-Bleu-Vert)** |

**Pour l'écran LCD, connectez le vert à SCL, le bleu à SDA, le rouge à VCC,
le noir à GND.**

![img](../media/image044.png)


### Étape 6 Installer le module ultrasonique



#### 6.1 Composants requis


![img](../media/image045.png)


#### 6.2


![img](../media/image046.png)


#### 6.3


![img](../media/image047.png)


#### 6.4 Câblage


| Module | Fil |
| --- | --- |
| Module ultrasonique | 4PIN **(Noir-Vert-Bleu-Rouge)** |

**Faites attention à la couleur du fil Dupont : Pour le module ultrasonique,
connectez le bleu à TRIG, le vert à ECHO, le rouge à VCC, le noir à GND.**

![img](../media/image048.png)


### Étape 7 Installer le capteur de mouvement PIR et le module bouton



#### 7.1 Composants requis


![img](../media/image049.png)


#### 7.2


![img](../media/image050.png)


#### 7.3


![img](../media/image051.png)


#### 7.4 Câblage


**Connectez les modules via des fils Dupont.**

| Module | Fil |
| --- | --- |
| Capteur de mouvement PIR | 3PIN 15cm |
| Module bouton | 3PIN 15cm |

**Faites attention à la couleur du fil Dupont : Connectez le jaune à S,
le rouge à V, le noir à G.**

![img](../media/image052.png)


### Étape 8 Installer les murs de la maison



#### 8.1 Composants requis


![img](../media/image053.png)


#### 8.2


![img](../media/image054.png)


#### 8.3


![img](../media/image055.png)


#### 8.4


![img](../media/image056.png)


#### 8.5


![img](../media/image057.png)


#### 8.6


![img](../media/image058.png)


#### 8.7


![img](../media/image059.png)


#### 8.8 Prototype


![img](../media/image060.png)


#### 8.9 Câblage


| Module | Fil |
| --- | --- |
| Ventilateur | 4PIN **Divisé (Noir-Rouge-Bleu-Vert)** |
| Capteur de vapeur | 3PIN 15cm |
| Photorésistance | 3PIN 15cm |

**Faites attention à la couleur du fil Dupont pour le ventilateur :**

| Broche du module | Couleur du fil | Broches de la carte ESP32 |
| :--- | :--- | :--- |
| IN- | VERT | io18 |
| IN+ | BLEU | io19 |
| V | ROUGE | V |
| G | NOIR | G |

**Pour le capteur de vapeur et la photorésistance : Connectez le jaune à S, le rouge à V, le noir à G.**

![img](../media/image061.png)


### Étape 9 Installer le toit de la maison



#### 9.1 Composants requis

![img](../media/image062.png)


#### 9.2


![img](../media/image063.png)


#### 9.3


![img](../media/image064.png)


#### 9.4 Gardez les fils organisés


![img](../media/image065.png)


### Étape 10 Installer la maison et le sol



#### 10.1 Composants requis


![img](../media/image066.png)


#### 10.2


![img](../media/image067.png)


#### 10.3


![img](../media/image068.png)


#### 10.4 Vue de dessous


![img](../media/image069.png)


#### 10.5


![img](../media/image070.png)


#### 10.6 Organiser les fils


![img](../media/image071.png)


#### 10.7


![img](../media/image072.png)


### Étape 11 Câblage de la maison



#### 11.1


**Faites attention à la couleur du fil Dupont : Connectez le jaune à S,
le rouge à V, le noir à G.**

| N° | Composants | Fils | Broches de la carte ESP32 |
| --- | --- | --- | --- |
| 1 | Ventilateur | 4 broches, divisé Noir-Rouge-Bleu-Vert | io18(IN-) \ io19(IN+) | |
| 2 | Capteur de mouvement PIR | 3 broches 15cm | io23 |
| 3 | Bouton | 3 broches 15cm | io5 |
| 4 | Module ultrasonique | 4 broches, divisé Noir-Vert-Bleu-Rouge | D12(TRIG) D13(ECHO) |
| 5 | LCD 1602 | 4 broches, connecté | I2C |
| 6 | Capteur de température et d'humidité | 3 broches 20cm | io17 |
| 7 | Capteur de vapeur | 3 broches 15cm | io35 |
| 8 | Photorésistance | 3 broches 15cm | io34 |
| 9 | Servo | -- | io26 |
| 10 | Buzzer | 3 broches 20cm | io16 |
| 11 | LED | 3 broches 20cm | io27 |
| 12 | Capteur de niveau d'eau | 3 broches 25cm | io33 |
| 13 | Capteur d'humidité du sol | 3 broches 20cm | io32 |
| 14 | Pompe à eau | 3 broches 20cm | io25 |


#### 11.2 Ventilateur


Passez le fil Dupont connecté au ventilateur à travers le trou **marqué 30**
sur la planche en bois.

| Composants | Fil | Broches de la carte ESP32 |
| --- | --- | --- |
| Ventilateur | 4 broches divisé (Noir-Rouge-Bleu-Vert) | io18(IN-), io19(IN+) |

| Broche du module | Couleur du fil | Broches de la carte ESP32 |
| :--- | :--- | :--- |
| IN- | VERT | io18 |
| IN+ | BLEU | io19 |
| V | ROUGE | V |
| G | NOIR | G |

![img](../media/image073.png)


#### 11.3 Capteur de mouvement PIR


Passez le fil Dupont connecté au capteur de mouvement PIR à travers le trou
marqué 24 sur la planche en bois.

| Composant | Fil | Broche de la carte ESP32 |
| --- | --- | --- |
| Capteur de mouvement PIR | 3 broches 15cm | io23 |

**Connectez le rouge à V, le noir à G, le jaune à S.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io23 |

![img](../media/image074.png)


#### 11.4 Module bouton


Passez le fil Dupont connecté au module bouton à travers le trou
marqué 25 sur la planche en bois.

| Composant | Fil | Broche de la carte ESP32 |
| --- | --- | --- |
| Bouton | 3 broches 15cm | io5 |

**Connectez le rouge à V, le noir à G, le jaune à S.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io5 |

![img](../media/image075.png)


#### 11.5 Module ultrasonique


| Composant | Fil | Broches de la carte ESP32 |
| --- | --- | --- |
| Module ultrasonique | 4 broches **divisé** (Noir-Vert-Bleu-Rouge) | io13(ECHO), io12(TRIG) |

**Connectez le rouge à V, le noir à G, le bleu à io12, le vert à io13.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V (io12) |
| G | NOIR | G (io12) |
| ECHO | VERT | io13 |
| TRIG | BLEU | io12 |

![img](../media/image076.png)


#### 11.6 LCD 1602

| Composant | Câble | Broches de la carte ESP32 |
| --- | --- | --- |
| LCD1602 | 4 broches connectées (Noir-Rouge-Bleu-Vert) | I2C |

**Connectez le rouge à V, le noir à G, le bleu à SDA, le vert à SCL.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| SCL | VERT | SCL |
| SDA | BLEU | SDA |

![img](../media/image077.png)

#### 11.7 Capteur de température et d'humidité

Passez le fil Dupont connecté au module bouton à travers le trou marqué 20 sur la planche en bois.

| Composant | Câble | Broches de la carte ESP32 |
| --- | --- | --- |
| Capteur de température et d'humidité | 3 broches 20cm | io17 |

**Connectez le rouge à V, le noir à G, le jaune à io17.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io17 |

![img](../media/image078.png)

#### 11.8 Capteur de vapeur

| Composant | Câble | Broche de la carte ESP32 |
| --- | --- | --- |
| Capteur de vapeur | 3 broches 15cm | io35 |

**Connectez le rouge à V, le noir à G, le jaune à io35.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io35 |

![img](../media/image079.png)

#### 11.9 Photorésistance

| Composant | Câble | Broche de la carte ESP32 |
| --- | --- | --- |
| Photorésistance | 3 broches 15cm | io34 |

**Connectez le rouge à V, le noir à G, le jaune à io34.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io34 |

![img](../media/image080.png)

#### 11.10 Servo

Passez le fil du Servo à travers le trou 15, puis connectez-le à la carte ESP32.

| Composant | Câble | Broche de la carte ESP32 |
| --- | --- | --- |
| Servo | 3 broches | io26 |

**Connectez le rouge à V, le noir à G, le jaune à io26.**

| Broche de la carte ESP32 | Couleur du fil |
| --- | --- |
| V | ROUGE |
| G | NOIR |
| IO26 | JAUNE |

![img](../media/image081.png)

#### 11.11 Buzzer

Passez le fil du Buzzer à travers le trou 17, puis connectez-le à la carte ESP32.

| Composant | Câble | Broche de la carte ESP32 |
| --- | --- | --- |
| Buzzer | 3 broches 20cm | io16 |

**Connectez le rouge à V, le noir à G, le jaune à io16.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io16 |

![image-20250417093147856](../media/image-20250417093147856.png)

![img](../media/image082.png)

#### 11.12 LED

Passez le fil de la LED à travers le trou 7, puis connectez-le à la carte ESP32.

| Composant | Câble | Broche de la carte ESP32 |
| --- | --- | --- |
| LED | 3 broches 20cm | io27 |

**Connectez le rouge à V, le noir à G, le jaune à io27.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io27 |

![img](../media/image083.png)

#### 11.13 Capteur de niveau d'eau

Passez le fil du capteur de niveau d'eau à travers le trou 13, puis connectez-le à la carte ESP32.

| Composant | Câble | Broche de la carte ESP32 |
| --- | --- | --- |
| Capteur de niveau d'eau | 3 broches 25cm | io33 |

**Connectez le rouge à V, le noir à G, le jaune à io33.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io33 |

![img](../media/image084.png)

#### 11.14 Capteur d'humidité du sol

Passez le fil du capteur d'humidité du sol à travers le trou 11, puis connectez-le à la carte ESP32.

| Composant | Câble | Broche de la carte ESP32 |
| --- | --- | --- |
| Capteur d'humidité du sol | 3 broches 20cm | io32 |

**Connectez le rouge à V, le noir à G, le jaune à io32.**

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io32 |

![img](../media/image085.png)

#### 11.15 Module relais

| Composant | Fil | Broche de la carte ESP32 |
| --- | --- | --- |
| Module de relais | 3PIN | io25 |

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io25 |

Passez le fil de la pompe à eau par le trou 11 comme indiqué ci-dessous :

![img](../media/image086.png)

Le fil rouge de la pompe à eau est connecté à la borne centrale du module de relais, et le fil noir est connecté au GND de la carte ESP32.

De plus, vous devez utiliser un fil Dupont pour connecter la borne gauche du module de relais au 3.3V de l'ESP32.

![img](../media/image087.png)

![img](../media/image088.png)

Insérez la borne mâle du fil Dupont dans la borne femelle du module de relais et serrez-la avec un tournevis.

![image-20250417093737686](../media/image-20250417093737686.png)

Après les étapes ci-dessus, notez que tout le câblage est terminé. Et les fils de la LED, du capteur de niveau d'eau, du capteur d'humidité du sol, du buzzer et de la pompe à eau du relais sont passés respectivement par les trous 7, 11, 13, 17 et 40 gravés sur la planche de tilleul, se préparant pour l'installation ultérieure.

![354e13bf130d878628f1361fdd37b997](../media/354e13bf130d878628f1361fdd37b997.png)

### Étape 12 Installer la maison et la fondation

#### 12.1 Composants requis

![img](../media/image089.png)

#### 12.2

![img](../media/image090.png)

#### 12.3

![img](../media/image091.png)

#### 12.4

![img](../media/image092.png)

#### 12.5

![img](../media/image093.png)

### Étape 13 Installer les éviers en plastique

#### 13.1 Composants requis

![img](../media/image094.png)

#### 13.2

![img](../media/image095.png)

#### 13.3

![img](../media/image096.png)

### Étape 14 Installer le module de sol et le module de niveau d'eau

#### 14.1 Composants requis

![img](../media/image098.png)

#### 14.2

![img](../media/image099.png)

#### 14.3

![img](../media/image100.png)

#### 14.4

![image-20230718085623979](../media/image-20230718085623979.png)

#### 14.5

![image-20230718085641291](../media/image-20230718085641291.png)

#### 14.6

![image-20230718085722378](../media/image-20230718085722378.png)

#### 14.7

![image-20230718085743776](../media/image-20230718085743776.png)

### Étape 15 Installer la clôture

#### 15.1 Composants requis

![image-20230718085854136](../media/image-20230718085854136.png)

#### 15.2

![image-20230718085921988](../media/image-20230718085921988.png)

#### 15.3

![image-20230718085936256](../media/image-20230718085936256.png)

#### 15.4

![image-20230718085954487](../media/image-20230718085954487.png)

### Étape 16 Installer le buzzer et le module LED

#### 16.1 Composants requis

![image-20230718090031524](../media/image-20230718090031524.png)

#### 16.2

![image-20230718090057124](../media/image-20230718090057124.png)


#### 16.3


![image-20230718090110113](../media/image-20230718090110113.png)


#### 16.4


![image-20230718090127577](../media/image-20230718090127577.png)


### Étape 17 Décorer la maison



#### 17.1 Composants requis


![image-20230718090150918](../media/image-20230718090150918.png)


#### 17.2


![image-20230718090215504](../media/image-20230718090215504.png)


#### 17.3


![image-20230718090227072](../media/image-20230718090227072.png)


### Étape 18 Installer le panneau solaire



#### 18.1 Composants requis


![img](../media/image128.png)


#### 18.2


![img](../media/image129.png)


#### 18.3


![img](../media/image130.png)


#### 18.4


![img](../media/image131.png)


#### 18.5


Installez la lumière LED du panneau solaire dans ce trou.

![img](../media/image132.png)


#### 18.6


Utilisez un autocollant pour fixer ses fils au mur

![img](../media/image131-1.png)


#### 18.7


![img](../media/image132-1.png)


#### 18.8


![img](../media/image133.png)


#### 18.9


![img](../media/image135.png)


#### 18.10


![image-20230718091556561](../media/image-20230718091556561.png)


### Étape 19 Installer le boîtier de batterie



#### 19.1 Composants requis


![image-20230718091623881](../media/image-20230718091623881.png)


#### 19.2


Installez 6 piles AA (non incluses dans le kit)

![image-20250417095312061](../media/image-20250417095312061.png)


#### 19.3


![image-20230718091649546](../media/image-20230718091649546.png)


#### 19.4


![image-20230718091701966](../media/image-20230718091701966.png)

