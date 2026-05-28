## 4. Monteer de Smart Farm Kit



### Stap 1 Installeer het ESP32 Board en de Relais Module



#### 1.1 Benodigde componenten


![img](../media/image001.png)


#### 1.2


![img](../media/image002.png)


#### 1.3


![img](../media/image003.png)


#### 1.4


![img](../media/image004.png)


#### 1.5


![img](../media/image006.png)


### Stap 2 Installeer het bevestigingsframe voor de batterijhouder en installeer de voedingscabine, verbind het ESP32 board en de relaismodule



#### 2.1 Benodigde componenten


![img](../media/image007.png)


#### 2.2


Monteer de houten platen X en O op de bodemplaat

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


#### 2.8 Verbind het ESP32 board en de relaismodule


| Module | Draad | Pin |
| --- | --- | --- |
| Relais Module | 3PIN 20cm | IO25 |

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io25 |

![img](../media/image015.png)


#### 2.9


![img](../media/image015-1.png)


### Stap 3 Installeer de onderbouw van het huisje



#### 3.1 Benodigde componenten


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


### Stap 4 Installeer de deur van de voedingscabine



#### 4.1 Benodigde componenten


![img](../media/image027.png)


#### 4.2 Stel Servo in op 180°


![image-20250416162128859](../media/image-20250416162128859.png)

De acrylplaat is apart verpakt, en het wordt aanbevolen om de
beschermfolie te verwijderen om de wrijving te verminderen wanneer deze
als deur beweegt.


#### 4.3 Installeer Servo


![img](../media/image029.png)


#### 4.4


**Opmerking: De schroeven moeten worden vastgedraaid om de servo stabiel
te houden, anders kan de deur vastlopen.**

![img](../media/image030.png)


#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Installeer M1.4*6MM zelftappende schroeven zoals hieronder getoond

![img](../media/6e1caadec8b1ec99b0093200763607b6.jpg)


#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)


#### 4.7


![img](../media/image033.png)


#### 4.8


Draai het tandwiel niet nadat het op de servo is geïnstalleerd. Als u
het tandwiel al hebt gedraaid, moet u de servohoek opnieuw instellen op
180°.

![img](../media/image034.png)


#### 4.9


**OPMERKING: Bij het installeren van het deksel van de voerbak moet de
opening volledig gesloten zijn.**

![img](../media/image035.png)


#### 4.10


![img](../media/image036.png)


#### 4.11


![img](../media/image037.png)


#### 4.12


![img](../media/image037-1.png)


#### 4.13 Test de deur


1. Verbind de Servo met pin IO26 van het ESP32 board. Verbind geel met S,
   rood met V, zwart met G.

![image028-1](../media/image028-1-1744850789118-1.png)

2. Verbind 6 AA batterijen met de DC 7-12V poort van het ESP32 board.
   (Batterijen niet inbegrepen in de kit)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Upload de testcode

A. Verbind het ESP32 board met de computer via de USB-kabel. Open het
INO-bestand in de map **6.1Servo** met Arduino IDE.

![image-20250418081022882](../media/image-20250418081022882.png)

![image-20250418081231084](../media/image-20250418081231084.png)

B. Klik op Tools, selecteer "ESP32 Dev Module" voor het boardtype in de
vervolgkeuzelijst, en selecteer COM-XX voor de poort (volgens de poort
toegewezen door uw computer in de apparaatbeheerder)

C. Zorg ervoor dat u de **ESP32Servo** bibliotheek hebt geüpload en
upload vervolgens de code. De deur van de voedingscabine zal langzaam
openen en sluiten.

![image-20250417085407205](../media/image-20250417085407205.png)

OPMERKING: Als de deur na het uploaden van de code niet kan worden geopend en gesloten en de servo heet is, schakel dan onmiddellijk de stroom uit.

**controleer:**

1. Of de plastic deur goed contact maakt en krachtpunten heeft met de
   tandwielstructuur van de servo.
1. Of de punt van de bevestigingsschroef op de tandwielstructuur van de
   servo vastzit met de plastic behuizing van de servo. Zo ja, draai dan
   de bevestigingsschroef een beetje los om te voorkomen dat de punt
   contact maakt met de servo.

![image-20250417085630662](../media/image-20250417085630662.png)


### Stap 5 Installeer het LCD-display en de DHT11-sensor



#### 5.1 Benodigde componenten


![img](../media/image038.png)


#### 5.2


![img](../media/image039.png)


#### 5.3


![img](../media/image040.png)


#### 5.4


![img](../media/image041.png)


#### 5.5 Prototype


![img](../media/image042.png)