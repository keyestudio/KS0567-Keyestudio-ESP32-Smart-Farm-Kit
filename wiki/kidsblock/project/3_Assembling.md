## 3. Montage


Tijdens de montage moeten sommige codes worden gebrand, dus installeer eerst de software.

De gehele montage kan over het algemeen in twee delen worden verdeeld: het monteren van
onderdelen en bedrading.

---



### Stap 1 Installeer het ESP32-bord en de relaismodule



#### 1.1 Benodigde componenten


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



### Stap 2 Installeer het bevestigingsframe voor de batterijhouder en installeer de voederbak, verbind het ESP32-bord en de relaismodule



#### 2.1 Benodigde componenten


![img](../media/image007.png)

---



#### 2.2


Monteer de houten platen X en O op de bodemplaat

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



#### 2.8 Verbind het ESP32-bord en de relaismodule


| Module | Draad | Pin |
| --- | --- | --- |
| Relaismodule | 3PIN 20cm | IO25 |

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io25 |

![img](../media/image015.png)

---



#### 2.9


![img](../media/image015-1.png)

---



### Stap 3 Installeer de onderbouw van het huis


---



#### 3.1 Benodigde componenten


![img](../media/image016.png)

---



#### 3.2


![img](../media/image017.png)

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



### Stap 4 Installeer de deur van de voederbak


---



#### 4.1 Benodigde componenten


![image027](../media/image027.png)

![image](../media/image-20250416162128859.png)

De acrylplaat is apart verpakt, en het wordt aanbevolen om de beschermfolie te verwijderen om de wrijving te verminderen wanneer deze als deur beweegt.

---



#### 4.2 Stel de servo in op 165°

> **⚠ WAARSCHUWING — Lees voordat u verdergaat:**
>
> 1. **Stel de servo NIET in op 180°.** Het deurmechanisme vereist niet het volledige bereik van 0°–180°. Als u het tot het uiterste instelt, zal de servo tegen de mechanische stop drukken, wat kan leiden tot oververhitting en permanente schade aan de servomotor.
> 2. **Houd de printplaat van stroom voorzien tijdens de installatie.** Wanneer de servo van stroom is voorzien en zijn hoek vasthoudt, forceer de tandwiel of de deur dan NIET met de hand. Als de printplaat niet van stroom is voorzien, heeft de servo geen houdkoppel, en handmatig draaien aan het tandwiel zal de gekalibreerde hoek verschuiven, wat na het inschakelen tot verkeerde uitlijning leidt.
> 3. **Gebruik GEEN brute kracht.** Als de deur niet soepel beweegt, stop dan onmiddellijk en controleer de montage. Als u het forceert, zullen de servotandwielen strippen.

Let op: deze stap is erg belangrijk. Voordat u installeert, moet u de servo instellen op **165°** (met een buffer van 15° aan elk uiteinde om mechanische schade te voorkomen).

**Voordat u de servo monteert, stelt u eerst de hoek in op 165° door te programmeren met KidsBlock (Grafische programmering).**

Raadpleeg de stappen voor software-installatie voor details.

**Sluit de servo aan op het ESP32 ontwikkelbord op pin IO26.**

![img](../media/image028-1.png)

---


![img](../media/image028-3.png)

---


- Open **KidsBlock**. Selecteer het ESP32-bord en de juiste seriële poort, en brand de volgende code naar het bord. De code stelt de servo in op **165°**.

![image-20250425134842857](../media/image-20250425134842857.png)

![img](../media/image028-2.png)

> **Belangrijk:** Houd het bord van stroom voorzien en de servo op 165° terwijl u doorgaat met de montagestap. Koppel de stroom **niet** los en beweeg het tandwiel niet handmatig totdat het deurpaneel volledig is geïnstalleerd.

---



#### 4.3 Installeer de servo


![img](../media/image029.png)

---



#### 4.4

**Opmerking: De schroeven moeten worden vastgedraaid om de servo stabiel te houden, anders kan de deur vastlopen**

![img](../media/image030.png)

---



#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Installeer M1.4*6MM zelftappende schroeven zoals hieronder weergegeven

![6e1caadec8b1ec99b0093200763607b6](../media/6e1caadec8b1ec99b0093200763607b6.jpg)

---



#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)

#### 4.7


![img](../media/image033.png)

---



#### 4.8


Draai het tandwiel niet nadat het op de servo is geïnstalleerd. Als u het tandwiel al hebt gedraaid, moet u de servohoek opnieuw instellen op 180°.

![img](../media/image034.png)

---



#### 4.9

**OPMERKING: Bij het installeren van het deksel van de voerbak moet de opening volledig gesloten zijn.**

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



#### 4.13 Test de deur


1. Sluit de servo aan op pin IO26 van het ESP32-bord. Sluit geel aan op S, rood op V, zwart op G.

![img](../media/image028-1.png)

2. Sluit 6 AA-batterijen aan op de DC 7-12V-poort van het ESP32-bord. (Batterijen niet inbegrepen in de kit)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Upload de testcode

A. Verbind het ESP32-bord met de computer met de USB-kabel. Open het INO-bestand in de map **6.1Servo.sb3** met KidsBlock.

![image-20250427084645025](../media/image-20250427084645025.png)

B. Upload code

![image-20250417085407205](../media/image-20250417085407205.png)

> **⚠ OPMERKING:** Als de deur na het uploaden van de code niet soepel kan worden geopend en gesloten en de servo heet is, **schakel dan onmiddellijk de stroom uit** om doorbranden van de servo te voorkomen. Controleer vervolgens de onderstaande punten.
>
> **Gebruik GEEN brute kracht** om de deur of het tandwiel op enig moment te bewegen.

**Controleer:**

1. Of de plastic deur goed contact maakt en krachtpunten heeft met de tandwielstructuur van de servo.
1. Of de punt van de bevestigingsschroef op de tandwielstructuur van de servo vastzit met de plastic behuizing van de servo. Zo ja, draai de bevestigingsschroef dan een beetje los om te voorkomen dat de punt contact maakt met de servo.

![image-20250417085630662](../media/image-20250417085630662.png)


### Stap 5 Installeer het LCD-scherm en de DHT11-sensor


---



#### 5.1 Benodigde componenten


![img](../media/image038.png)

---



#### 5.2


![img](../media/image039.png)

---



#### 5.3


![img](../media/image040.png)

---



#### 5.4


![img](../media/image041.png)

---



#### 5.5 Prototype


![img](../media/image042.png)

---



#### 5.6 Bedrading


**Verbind modules via Dupont-draden.**

| Module | Draad |
| --- | --- |
| Temperatuur- en vochtigheidssensor | 3PIN 20cm |
| LCD 1602 | 4PIN **(Zwart-Rood-Blauw-Groen)** |

**Let op de kleur van de Dupont-draad:**

**Voor temperatuur- en vochtigheidssensor, sluit geel aan op S, rood op V,
zwart op G.**

![img](../media/image043.png)

---



#### 5.7


| Module | Draad |
| --- | --- |
| LCD 1602 | 4PIN **(Zwart-Rood-Blauw-Groen)** |

**Voor het LCD-scherm, sluit groen aan op SCL, blauw op SDA, rood op VCC, zwart op GND.**

![img](../media/image044.png)

---

### Stap 6 Installeer de Ultrasone Module


---



#### 6.1 Benodigde componenten


![img](../media/image045.png)

---



#### 6.2


![img](../media/image046.png)

---



#### 6.3


![img](../media/image047.png)

---



#### 6.4 Bedrading


| Module | Draad |
| --- | --- |
| Ultrasone module | 4PIN **(Zwart-Groen-Blauw-Rood)** |

**Let op de kleur van de Dupont-draad: Voor de ultrasone module,
verbind blauw met TRIG, groen met ECHO, rood met VCC, zwart met GND.**

![img](../media/image048.png)

---



### Stap 7 Installeer de PIR Bewegingssensor en Knopmodule


---



#### 7.1 Benodigde componenten


![img](../media/image049.png)

---



#### 7.2


![img](../media/image050.png)

---



#### 7.3


![img](../media/image051.png)

---



#### 7.4 Bedrading


**Verbind modules via Dupont-draden.**

| Module | Draad |
| --- | --- |
| PIR Bewegingssensor | 3PIN 15cm |
| Knopmodule | 3PIN 15cm |

**Let op de kleur van de Dupont-draad: Verbind geel met S, rood met V, zwart met G.**

![img](../media/image052.png)

---



### Stap 8 Installeer de Muren van het Huis


---



#### 8.1 Benodigde componenten


![img](../media/image053.png)

---



#### 8.2


![img](../media/image054.png)

---



#### 8.3


![img](../media/image055.png)

---



#### 8.4


![img](../media/image056.png)

---



#### 8.5


![img](../media/image057.png)

---



#### 8.6


![img](../media/image058.png)

---



#### 8.7


![img](../media/image059.png)

---



#### 8.8 Prototype


![img](../media/image060.png)

#### 8.9 Bedrading

| Module | Draad |
| --- | --- |
| Ventilator | 4PIN **Gedeeld (Zwart-Rood-Blauw-Groen)** |
| Stoom Sensor | 3PIN 15cm |
| Fotoweerstand | 3PIN 15cm |

**Let op de kleur van de Dupont draad voor de Ventilator:**

| Module Pin | Draadkleur | ESP32 Board Pins |
| :--- | :--- | :--- |
| IN- | GROEN | io18 |
| IN+ | BLAUW | io19 |
| V | ROOD | V |
| G | ZWART | G |

**Voor Stoom Sensor en Fotoweerstand: Verbind geel met S, rood met V, zwart met G.**

![img](../media/image061.png)

### Stap 9 Installeer het dak van het huis

#### 9.1 Benodigde componenten

![img](../media/image062.png)

#### 9.2

![img](../media/image063.png)

#### 9.3

![img](../media/image064.png)

#### 9.4 Houd de draden georganiseerd

![img](../media/image065.png)

### Stap 10 Installeer het huis en de grond

#### 10.1 Benodigde componenten

![img](../media/image066.png)

#### 10.2

![img](../media/image067.png)

#### 10.3

![img](../media/image068.png)

#### 10.4 Onderkant

![img](../media/image069.png)

#### 10.5

![img](../media/image070.png)

#### 10.6 Rangschik de draden

![img](../media/image071.png)

#### 10.7

![img](../media/image072.png)

### Stap 11 Bedrading van het huis

#### 11.1

**Let op de kleur van de Dupont draad: Verbind geel met S, rood met V, zwart met G.**

| NR. | Componenten | Draden | ESP32 Board Pins | |
| --- | --- | --- | --- | --- |
| 1 | Ventilator | 4pin, **Gedeeld** Zwart-Rood-Blauw-Groen | io18(IN-) \ io19(IN+) | |
| 2 | PIR Bewegingssensor | 3pin 15cm | io23 | |
| 3 | Knop | 3pin 15cm | io5 | |
| 4 | Ultrasone Module | 4 pin,\ **Gedeeld** Zwart-Groen-Blauw-Rood | D12(TRIG) D13(ECHO) | |
| 5 | LCD 1602 | 4pin, **Verbonden** | I2C | |
| 6 | Temperatuur- en Vochtigheidssensor | 3pin 20cm | io17 | |
| 7 | Stoom Sensor | 3pin 15cm | io35 | |
| 8 | Fotoweerstand | 3pin 15cm | io34 | |
| 9 | Servo | -- | io26 | |
| 10 | Buzzer | 3pin 20cm | io16 | |
| 11 | LED | 3pin 20cm | io27 | |
| 12 | Waterniveausensor | 3pin 25cm | io33 | |
| 13 | Bodemvochtigheidssensor | 3pin 20cm | io32 | |
| 14 | Waterpomp | 3pin 20cm | io25 | |

#### 11.2 Ventilator

Voer de Dupont draad die is aangesloten op de ventilator door het gat **gemarkeerd 30** op de houten plank.

| Componenten | Draad | ESP32 Board Pins |
| :--- | :--- | :--- |
| Ventilator | 4PIN **Gedeeld (Zwart-Rood-Blauw-Groen)** | io18(IN-), io19(IN+) |

| Module Pin | Draadkleur | ESP32 Board Pins |
| :--- | :--- | :--- |
| IN- | GROEN | io18 |
| IN+ | BLAUW | io19 |
| V | ROOD | V |
| G | ZWART | G |

![img](../media/image073.png)

---



#### 11.3 PIR Bewegingssensor


Haal de Dupont-draad die is aangesloten op de PIR-bewegingssensor door het gat gemarkeerd met 24 op de houten plank.

| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| PIR Bewegingssensor | 3PIN 15cm | io23 |

**Verbind rood met V, zwart met G, geel met S.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io23 |

![img](../media/image074.png)

---



#### 11.4 Knopmodule


Haal de Dupont-draad die is aangesloten op de knopmodule door het gat gemarkeerd met 25 op de houten plank.

| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Knop | 3PIN 15cm | io5 |

**Verbind rood met V, zwart met G, geel met S.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io5 |

![img](../media/image075.png)

---



#### 11.5 Ultrasone Module


| Component | Draad | ESP32 Board Pins |
| --- | --- | --- |
| Ultrasone Module | 4PIN **Gesplitst** ( Zwart-Groen-Blauw-Rood) | io13(ECHO), io12(TRIG) |

**Verbind rood met V, zwart met G, blauw met io12, groen met io13.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V (io12) |
| G | ZWART | G (io12) |
| ECHO | GROEN | io13 |
| TRIG | BLAUW | io12 |

![img](../media/image076.png)

---



#### 11.6 LCD 1602


| Component | Draad | ESP32 Board Pins |
| --- | --- | --- |
| LCD1602 | 4PIN **Verbonden** **(Zwart-Rood-Blauw-Groen)** | I2C |

**Verbind rood met V, zwart met G, blauw met SDA, groen met SCL.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| SCL | GROEN | SCL |
| SDA | BLAUW | SDA |

![img](../media/image077.png)

---



#### 11.7 Temperatuur- en Vochtigheidssensor


Haal de Dupont-draad die is aangesloten op de knopmodule door het gat gemarkeerd met 20 op de houten plank.

| Component | Draad | ESP32 Board Pins |
| --- | --- | --- |
| Temperatuur- en Vochtigheidssensor | 3PIN 20cm | io17 |

**Verbind rood met V, zwart met G, geel met io17.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io17 |

![img](../media/image078.png)

---



#### 11.8 Stoom Sensor


| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Stoom Sensor | 3PIN 15cm | io35 |

**Verbind rood met V, zwart met G, geel met io35.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io35 |

![img](../media/image079.png)

---



#### 11.9 Fotoweerstand


| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Fotoweerstand | 3PIN 15cm | io34 |

**Verbind rood met V, zwart met G, geel met io34.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io34 |

![img](../media/image080.png)

---



#### 11.10 Servo

**Haal de draad van de Servo door Gat 15 en verbind deze vervolgens met het ESP32-bord.**

| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Servo | 3PIN | io26 |

**Verbind rood met V, zwart met G, geel met io26.**

| Board Pin | Wire Color |
| --- | --- |
| V | ROOD |
| G | ZWART |
| IO26 | GEEL |

![img](../media/image081.png)

---



#### 11.11 Buzzer

**Haal de draad van de Buzzer door Gat 17 en sluit deze vervolgens aan op het ESP32-bord.**

| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Buzzer | 3PIN 20cm | io16 |

**Sluit rood aan op V, zwart op G, geel op io16.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io16 |

![image-20250417093147856](../media/image-20250417093147856.png)

![img](../media/image082.png)

---



#### 11.12 LED


**Haal de draad van de LED door Gat 7 en sluit deze vervolgens aan op het ESP32-bord.**

| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| LED | 3PIN 20cm | io27 |

**Sluit rood aan op V, zwart op G, geel op io27.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io27 |

![img](../media/image083.png)

---



#### 11.13 Waterniveausensor


**Haal de draad van de waterniveausensor door Gat 13 en sluit deze vervolgens aan op het ESP32-bord.**

| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Waterniveausensor | 3PIN 25cm | io33 |

**Sluit rood aan op V, zwart op G, geel op io33.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io33 |

![img](../media/image084.png)

---



#### 11.14 Bodemvochtigheidssensor


**Haal de draad van de bodemvochtigheidssensor door Gat 11 en sluit deze vervolgens aan op het ESP32-bord.**

| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Bodemvochtigheidssensor | 3PIN 20cm | io32 |

**Sluit rood aan op V, zwart op G, geel op io32.**

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io32 |

![img](../media/image085.png)

---



#### 11.15 Relaismodule


| Component | Draad | ESP32 Board Pin |
| --- | --- | --- |
| Relaismodule | 3PIN | io25 |

| Module Pin | Draadkleur | ESP32 Board Pin |
| --- | --- | --- |
| V | ROOD | V |
| G | ZWART | G |
| S | GEEL | io25 |

**Haal de draad van de waterpomp door Gat 11 zoals hieronder weergegeven:**

![img](../media/image086.png)

De rode draad van de waterpomp is aangesloten op de middelste aansluiting van de relaismodule, en de zwarte draad is aangesloten op de GND van het ESP32-bord.

Bovendien moet u een Dupont-draad gebruiken om de linker aansluiting van de relaismodule aan te sluiten op de 3.3V van de ESP32.

![img](../media/image087.png)

---



#### 11.16


![img](../media/image088.png)

---


Steek de mannelijke aansluiting van de Dupont-draad in de vrouwelijke aansluiting van de relaismodule en draai deze vast met een schroevendraaier.

![image-20250417093737686](../media/image-20250417093737686.png)

Na de bovenstaande stappen, let op dat alle bedrading is voltooid. En de draden van de LED, waterniveausensor, bodemvochtigheidssensor, buzzer en relaiswaterpomp zijn respectievelijk door de gaten 7, 11, 13, 17 en 40 gegaan die in de lindehouten plaat zijn gesneden, ter voorbereiding op de daaropvolgende installatie.

![354e13bf130d878628f1361fdd37b997](../media/354e13bf130d878628f1361fdd37b997.png)


### Stap 12 Installeer het huis en de fundering


---



#### 12.1 Benodigde componenten


![img](../media/image089.png)

---



#### 12.2


![img](../media/image090.png)

---

#### 12.3


![img](../media/image091.png)

---



#### 12.4


![img](../media/image092.png)

---



#### 12.5


![img](../media/image093.png)

---



### Stap 13 Installeer de plastic gootstenen


---



#### 13.1 Benodigde componenten


![img](../media/image094.png)

---



#### 13.2


![img](../media/image095.png)

---



#### 13.3


![img](../media/image096.png)

---



### Stap 14 Installeer de bodemmodule en de waterniveau-module


---



#### 14.1 Benodigde componenten


![img](../media/image098.png)

---



#### 14.2


![img](../media/image099.png)

---



#### 14.3


![img](../media/image100.png)

---



#### 14.4


![image-20230718085623979](../media/image-20230718085623979.png)

---



#### 14.5


![image-20230718085641291](../media/image-20230718085641291.png)

---



#### 14.6


![image-20230718085722378](../media/image-20230718085722378.png)

---



#### 14.7


![image-20230718085743776](../media/image-20230718085743776.png)

---



### Stap 15 Installeer het hek


---



#### 15.1 Benodigde componenten


![image-20230718085854136](../media/image-20230718085854136.png)

---



#### 15.2


![image-20230718085921988](../media/image-20230718085921988.png)

---



#### 15.3


![image-20230718085936256](../media/image-20230718085936256.png)

---



#### 15.4


![image-20230718085954487](../media/image-20230718085954487.png)

---



### Stap 16 Installeer de zoemer en de led-module

#### 16.1 Benodigde componenten


![image-20230718090031524](../media/image-20230718090031524.png)

---



#### 16.2


![image-20230718090057124](../media/image-20230718090057124.png)

---



#### 16.3


![image-20230718090110113](../media/image-20230718090110113.png)

---



#### 16.4


![image-20230718090127577](../media/image-20230718090127577.png)

---



### Stap 17 Versier het huis


---



#### 17.1 Benodigde componenten


![image-20230718090150918](../media/image-20230718090150918.png)

---



#### 17.2


![image-20230718090215504](../media/image-20230718090215504.png)

---



#### 17.3


![image-20230718090227072](../media/image-20230718090227072.png)

---



### Stap 18 Installeer zonnepaneel


---



#### 18.1


![img](../media/image128.png)

---



#### 18.2


![img](../media/image129.png)

---



#### 18.3


![img](../media/image130.png)

---



#### 18.4


![img](../media/image131.png)

---



#### 18.5


Installeer het LED-lampje van het zonnepaneel in dit gat.

![img](../media/image132.png)

---



#### 18.6


Gebruik een sticker om de draden aan de muur te bevestigen

![img](../media/image131-1.png)

---



#### 18.7


![img](../media/image132-1.png)

---



#### 18.8


![img](../media/image133.png)

---



#### 18.9


![img](../media/image135.png)

---



#### 18.10


![image-20230718091556561](../media/image-20230718091556561.png)

---



### Stap 19 Installeer batterijhouder


---

#### 19.1


![image-20230718091623881](../media/image-20230718091623881.png)

---



#### 19.2


Installeer 6 AA-batterijen (niet inbegrepen in de kit)

![image-20250417095312061](../media/image-20250417095312061.png)

![image-20230718091649546](../media/image-20230718091649546.png)

---



#### 19.3


![image-20230718091701966](../media/image-20230718091701966.png)


