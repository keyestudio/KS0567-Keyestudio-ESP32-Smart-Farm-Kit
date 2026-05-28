## 3. Assemblage


Pendant l'assemblage, certains codes doivent être gravés, veuillez donc d'abord installer le logiciel.

L'assemblage complet peut généralement être divisé en deux parties : l'assemblage
des pièces et le câblage.

---



### Étape 1 Installer la carte ESP32 et le module relais



#### 1.1 Composants requis


![img](../media/image001.png)

---



#### 1.2


![img](../media/image002.png)

---



#### 1.3


![img](../media/image003.png)

---



#### 1.4


![img](../media/image004.png)

---



#### 1.5


![img](../media/image006.png)

---



### Étape 2 Installer le cadre de fixation du boîtier de batterie et installer la cabine d'alimentation, connecter la carte ESP32 et le module relais



#### 2.1 Composants requis


![img](../media/image007.png)

---



#### 2.2


Assembler les planches de bois X et O sur la plaque inférieure

![img](../media/image008.png)

---



#### 2.3


![img](../media/image010.png)

---



#### 2.4


![img](../media/image011.png)

---



#### 2.5


![img](../media/image012.png)

---



#### 2.6


![img](../media/image013.png)

---



#### 2.7


![img](../media/image014.png)

---



#### 2.8 Connecter la carte ESP32 et le module relais


| Module | Fil | Broche |
| --- | --- | --- |
| Module relais | 3PIN 20cm | IO25 |

| Broche du module | Couleur du fil | Broche de la carte ESP32 |
| --- | --- | --- |
| V | ROUGE | V |
| G | NOIR | G |
| S | JAUNE | io25 |

![img](../media/image015.png)

---



#### 2.9


![img](../media/image015-1.png)

---



### Étape 3 Installer la sous-structure de la maison


---



#### 3.1 Composants requis


![img](../media/image016.png)

---



#### 3.2


![img](../media/image017.png)

---



#### 3.3


![img](../media/image018.png)

---



#### 3.4


![img](../media/image019.png)

---



#### 3.5


![img](../media/image020.png)

---



#### 3.6


![img](../media/image021.png)

---



#### 3.7


![img](../media/image022.png)

---



#### 3.8


![img](../media/image023.png)

---



#### 3.9


![img](../media/image024.png)

---



#### 3.10


![img](../media/image025.png)

---



#### 3.11


![img](../media/image026.png)

---



### Étape 4 Installer la porte de la cabine d'alimentation


---



#### 4.1 Composants requis


![image027](../media/image027.png)

![image](../media/image-20250416162128859.png)

La feuille acrylique est emballée séparément, et il est recommandé d'enlever son film protecteur pour réduire le frottement lorsqu'elle se déplace comme une porte.

---



#### 4.2 Régler le servo à 165°

> **⚠ AVERTISSEMENT — Lire avant de continuer :**
>
> 1. **NE PAS régler le servo à 180°.** Le mécanisme de la porte ne nécessite pas la plage complète de 0° à 180°. Le régler à l'extrémité extrême fera appuyer le servo contre la butée mécanique, ce qui pourrait surchauffer et endommager de façon permanente le moteur du servo.
> 2. **Maintenir la carte alimentée pendant l'installation.** Lorsque le servo est alimenté et maintient son angle, NE PAS forcer l'engrenage ou la porte à la main. Si la carte n'est pas alimentée, le servo n'a pas de couple de maintien, et la rotation manuelle de l'engrenage déplacera l'angle calibré, provoquant un désalignement après la mise sous tension.
> 3. **NE PAS utiliser la force brute.** Si la porte ne bouge pas en douceur, arrêtez immédiatement et vérifiez l'assemblage. La forcer endommagera les engrenages du servo.

Veuillez noter que cette étape est très importante. Avant l'installation, assurez-vous de régler le servo à **165°** (avec une marge de 15° réservée à chaque extrémité pour éviter les dommages mécaniques).

**Avant de monter le servo, veuillez d'abord régler l'angle à 165° en programmant avec KidsBlock (programmation graphique).**

Veuillez vous référer aux étapes d'installation du logiciel pour plus de détails.

**Connecter le servo à la carte de développement ESP32 sur la broche IO26.**

![img](../media/image028-1.png)

---


![img](../media/image028-3.png)

---


- Ouvrir **KidsBlock**. Sélectionner la carte ESP32 et le port série correct, et graver le code suivant sur la carte. Le code règle le servo à **165°**.

![image-20250425134842857](../media/image-20250425134842857.png)

![img](../media/image028-2.png)

> **Important :** Maintenez la carte alimentée et le servo à 165° pendant que vous passez à l'étape d'assemblage. Ne déconnectez **pas** l'alimentation et ne déplacez **pas** manuellement l'engrenage tant que le panneau de porte n'est pas entièrement installé.

---



#### 4.3 Installer le servo


![img](../media/image029.png)

---



#### 4.4

**Note : Les vis doivent être serrées pour maintenir le servo stable, sinon la porte pourrait se bloquer.**

![img](../media/image030.png)

---



#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Installer les vis autotaraudeuses M1.4*6MM comme indiqué ci-dessous

![6e1caadec8b1ec99b0093200763607b6](../media/6e1caadec8b1ec99b0093200763607b6.jpg)

---



#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)

---



#### 4.7


![img](../media/image033.png)

---



#### 4.8


Ne pas tourner l'engrenage après son installation sur le servo. Si vous avez déjà tourné l'engrenage, vous devrez réajuster l'angle du servo à 180°.

![img](../media/image034.png)

---



#### 4.9

**NOTE : Lors de l'installation du couvercle de la boîte d'alimentation, son ouverture doit être complètement fermée.**

![img](../media/image035.png)

---



#### 4.10


![img](../media/image036.png)

---



#### 4.11


![img](../media/image037.png)

---



#### 4.12


![img](../media/image037-1.png)

---



#### 4.13 Tester la porte


1. Connecter le servo à la broche IO26 de la carte ESP32. Connecter le jaune à S, le rouge à V, le noir à G.

![img](../media/image028-1.png)

2. Connecter 6 piles AA au port DC 7-12V de la carte ESP32. (Piles non