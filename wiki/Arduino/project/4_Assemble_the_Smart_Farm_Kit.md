## 4. Bausatz Smart Farm zusammenbauen



### Schritt 1 ESP32-Board und Relaismodul installieren



#### 1.1 Benötigte Komponenten


![img](../media/image001.png)


#### 1.2


![img](../media/image002.png)


#### 1.3


![img](../media/image003.png)


#### 1.4


![img](../media/image004.png)


#### 1.5


![img](../media/image006.png)


### Schritt 2 Befestigungsrahmen für das Batteriegehäuse installieren und die Futterkabine installieren, ESP32-Board und Relaismodul verbinden



#### 2.1 Benötigte Komponenten


![img](../media/image007.png)


#### 2.2


Montieren Sie die Holzbretter X und O auf der Bodenplatte

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


#### 2.8 ESP32-Board und Relaismodul verbinden


| Modul | Kabel | Pin |
| --- | --- | --- |
| Relaismodul | 3PIN 20cm | IO25 |

| Modul-Pin | Kabelfarbe | ESP32-Board-Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io25 |

![img](../media/image015.png)


#### 2.9


![img](../media/image015-1.png)


### Schritt 3 Unterkonstruktion des Hauses installieren



#### 3.1 Benötigte Komponenten


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


### Schritt 4 Tür der Futterkabine installieren

#### 4.1 Benötigte Komponenten


![img](../media/image027.png)


#### 4.2 Servo auf 180° einstellen


![image-20250416162128859](../media/image-20250416162128859.png)

Die Acrylplatte ist separat verpackt, und es wird empfohlen, die
Schutzfolie abzuziehen, um die Reibung zu reduzieren, wenn sie sich als
Tür bewegt.


#### 4.3 Servo installieren


![img](../media/image029.png)


#### 4.4


**Hinweis: Die Schrauben müssen fest angezogen werden, um den Servo
stabil zu halten, da sich die Tür sonst verklemmen kann.**

![img](../media/image030.png)


#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

M1.4*6MM selbstschneidende Schrauben wie unten gezeigt installieren

![img](../media/6e1caadec8b1ec99b0093200763607b6.jpg)


#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)


#### 4.7


![img](../media/image033.png)


#### 4.8


Drehen Sie das Zahnrad nicht, nachdem es am Servo installiert wurde. Wenn
Sie das Zahnrad bereits gedreht haben, müssen Sie den Servowinkel auf
180° neu einstellen.

![img](../media/image034.png)


#### 4.9


**HINWEIS: Beim Anbringen des Deckels des Futterkastens sollte dessen
Öffnung vollständig geschlossen sein.**

![img](../media/image035.png)


#### 4.10


![img](../media/image036.png)


#### 4.11


![img](../media/image037.png)


#### 4.12


![img](../media/image037-1.png)


#### 4.13 Die Tür testen


1. Verbinden Sie den Servo mit Pin IO26 des ESP32-Boards. Verbinden Sie
   Gelb mit S, Rot mit V, Schwarz mit G.

![image028-1](../media/image028-1-1744850789118-1.png)

2. Schließen Sie 6 AA-Batterien an den DC 7-12V-Anschluss des ESP32-Boards
   an. (Batterien nicht im Kit enthalten)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Laden Sie den Testcode hoch

A. Verbinden Sie das ESP32-Board mit dem USB-Kabel mit dem Computer.
Öffnen Sie die INO-Datei im Ordner **6.1Servo** mit der Arduino IDE.

![image-20250418081022882](../media/image-20250418081022882.png)

![image-20250418081231084](../media/image-20250418081231084.png)

B. Klicken Sie auf "Tools", wählen Sie "ESP32 Dev Module" für den
Board-Typ in der Dropdown-Menüleiste und wählen Sie COM-XX für den Port
(entsprechend dem vom Computer im Geräte-Manager zugewiesenen Port).

C. Stellen Sie sicher, dass Sie die **ESP32Servo**-Bibliothek
hochgeladen haben, und laden Sie dann den Code hoch. Die Tür der
Futterkabine öffnet und schließt sich langsam.

![image-20250417085407205](../media/image-20250417085407205.png)

HINWEIS: Wenn sich die Tür nach dem Hochladen des Codes nicht öffnen und
schließen lässt und der Servo heiß ist, schalten Sie die Stromversorgung
sofort aus.

**Überprüfen Sie:**

1. Ob die Kunststofftür einen guten Kontakt und Kraftpunkte mit der
   Getriebestruktur des Servos hat.
1. Ob die Spitze der Befestigungsschraube an der Getriebestruktur des
   Servos mit dem Kunststoffgehäuse des Servos verklemmt ist. Wenn ja,
   lösen Sie die Befestigungsschraube etwas, um zu verhindern, dass ihre
   Spitze den Servo berührt.

![image-20250417085630662](../media/image-20250417085630662.png)


### Schritt 5 LCD-Display und DHT11-Sensor installieren



#### 5.1 Benötigte Komponenten


![img](../media/image038.png)


#### 5.2


![img](../media/image039.png)


#### 5.3


![img](../media/image040.png)


#### 5.4


![img](../media/image041.png)


#### 5.5 Prototyp


![img](../media/image042.png)


#### 5.6 Verkabelung


**Module über Dupont-Kabel verbinden.**

| Modul | Kabel |
| --- | --- |
| Temperatur- und Feuchtigkeitssensor | 3PIN 20cm |

**Achten Sie auf die Farbe des Dupont-Kabels:**

**Für den Temperatur- und Feuchtigkeitssensor verbinden Sie Gelb mit S, Rot mit V,
Schwarz mit G.**

![img](../media/image043.png)


#### 5.7


| Modul | Kabel |
| --- | --- |
| LCD 1602 | 4PIN **(Schwarz-Rot-Blau-Grün)** |

**Für das LCD-Display verbinden Sie Grün mit SCL, Blau mit SDA, Rot mit VCC,
Schwarz mit GND.**

![img](../media/image044.png)


### Schritt 6: Ultraschallmodul installieren



#### 6.1 Benötigte Komponenten


![img](../media/image045.png)


#### 6.2


![img](../media/image046.png)


#### 6.3


![img](../media/image047.png)


#### 6.4 Verkabelung


| Modul | Kabel |
| --- | --- |
| Ultraschallmodul | 4PIN **(Schwarz-Grün-Blau-Rot)** |

**Achten Sie auf die Farbe des Dupont-Kabels: Für das Ultraschallmodul
verbinden Sie Blau mit TRIG, Grün mit ECHO, Rot mit VCC, Schwarz mit GND.**

![img](../media/image048.png)


### Schritt 7: PIR-Bewegungssensor und Tastenmodul installieren



#### 7.1 Benötigte Komponenten


![img](../media/image049.png)


#### 7.2


![img](../media/image050.png)


#### 7.3


![img](../media/image051.png)


#### 7.4 Verkabelung


**Module über Dupont-Kabel verbinden.**

| Modul | Kabel |
| --- | --- |
| PIR-Bewegungssensor | 3PIN 15cm |
| Tastenmodul | 3PIN 15cm |

**Achten Sie auf die Farbe des Dupont-Kabels: Verbinden Sie Gelb mit S,
Rot mit V, Schwarz mit G.**

![img](../media/image052.png)


### Schritt 8: Hauswände installieren



#### 8.1 Benötigte Komponenten


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


#### 8.8 Prototyp


![img](../media/image060.png)


#### 8.9 Verkabelung


| Modul | Kabel |
| --- | --- |
| Lüfter | 4PIN **geteilt (Schwarz-Rot-Blau-Grün)** |
| Dampfsensor | 3PIN 15cm |
| Fotowiderstand | 3PIN 15cm |

**Achten Sie auf die Farbe des Dupont-Kabels für den Lüfter:**

| Modul-Pin | Kabelfarbe | ESP32 Board-Pins |
| :--- | :--- | :--- |
| IN- | GRÜN | io18 |
| IN+ | BLAU | io19 |
| V | ROT | V |
| G | SCHWARZ | G |

**Für Dampfsensor und Fotowiderstand: Verbinden Sie Gelb mit S, Rot mit V, Schwarz mit G.**

![img](../media/image061.png)


### Schritt 9: Hausdach installieren



#### 9.1 Benötigte Komponenten

![img](../media/image062.png)


#### 9.2


![img](../media/image063.png)


#### 9.3


![img](../media/image064.png)


#### 9.4 Halten Sie die Kabel organisiert


![img](../media/image065.png)


### Schritt 10 Haus und Boden installieren



#### 10.1 Erforderliche Komponenten


![img](../media/image066.png)


#### 10.2


![img](../media/image067.png)


#### 10.3


![img](../media/image068.png)


#### 10.4 Unteransicht


![img](../media/image069.png)


#### 10.5


![img](../media/image070.png)


#### 10.6 Kabel anordnen


![img](../media/image071.png)


#### 10.7


![img](../media/image072.png)


### Schritt 11 Verkabelung des Hauses



#### 11.1


**Achten Sie auf die Farbe des Dupont-Kabels: Gelb an S,
Rot an V, Schwarz an G anschließen.**

| NR. | Komponenten | Kabel | ESP32 Board Pins |
| --- | --- | --- | --- |
| 1 | Lüfter | 4-polig, geteilt Schwarz-Rot-Blau-Grün | io18(IN-) \ io19(IN+) |  |
| 2 | PIR-Bewegungssensor | 3-polig 15cm | io23 |
| 3 | Taste | 3-polig 15cm | io5 |
| 4 | Ultraschallmodul | 4-polig, geteilt Schwarz-Grün-Blau-Rot | D12(TRIG) D13(ECHO) |
| 5 | LCD 1602 | 4-polig, verbunden | I2C |
| 6 | Temperatur- und Feuchtigkeitssensor | 3-polig 20cm | io17 |
| 7 | Dampfsensor | 3-polig 15cm | io35 |
| 8 | Fotowiderstand | 3-polig 15cm | io34 |
| 9 | Servo | -- | io26 |
| 10 | Summer | 3-polig 20cm | io16 |
| 11 | LED | 3-polig 20cm | io27 |
| 12 | Wasserstandssensor | 3-polig 25cm | io33 |
| 13 | Bodenfeuchtigkeitssensor | 3-polig 20cm | io32 |
| 14 | Wasserpumpe | 3-polig 20cm | io25 |


#### 11.2 Lüfter


Führen Sie das mit dem Lüfter verbundene Dupont-Kabel durch das Loch, das **mit 30**
auf der Holzplatte markiert ist.

| Komponenten | Kabel | ESP32 Board Pins |
| --- | --- | --- |
| Lüfter | 4PIN geteilt (Schwarz-Rot-Blau-Grün) | io18(IN-), io19(IN+) |

| Modul Pin | Kabelfarbe | ESP32 Board Pins |
| :--- | :--- | :--- |
| IN- | GRÜN | io18 |
| IN+ | BLAU | io19 |
| V | ROT | V |
| G | SCHWARZ | G |

![img](../media/image073.png)


#### 11.3 PIR-Bewegungssensor


Führen Sie das mit dem PIR-Bewegungssensor verbundene Dupont-Kabel durch das Loch
mit der Nummer 24 auf der Holzplatte.

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| PIR-Bewegungssensor | 3PIN 15cm | io23 |

**Rot an V, Schwarz an G, Gelb an S anschließen.**

| Modul Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io23 |

![img](../media/image074.png)


#### 11.4 Tastenmodul


Führen Sie das mit dem Tastenmodul verbundene Dupont-Kabel durch das Loch
mit der Nummer 25 auf der Holzplatte.

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Taste | 3PIN 15cm | io5 |

**Rot an V, Schwarz an G, Gelb an S anschließen.**

| Modul Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io5 |

![img](../media/image075.png)


#### 11.5 Ultraschallmodul


| Komponente | Kabel | ESP32 Board Pins |
| --- | --- | --- |
| Ultraschallmodul | 4PIN **geteilt** (Schwarz-Grün-Blau-Rot) | io13(ECHO), io12(TRIG) |

**Rot an V, Schwarz an G, Blau an io12, Grün an io13 anschließen.**

| Modul Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V (io12) |
| G | SCHWARZ | G (io12) |
| ECHO | GRÜN | io13 |
| TRIG | BLAU | io12 |

![img](../media/image076.png)


#### 11.6 LCD 1602

| Komponente | Kabel | ESP32 Board Pins |
| --- | --- | --- |
| LCD1602 | 4PIN verbunden (Schwarz-Rot-Blau-Grün) | I2C |

**Rot mit V, Schwarz mit G, Blau mit SDA, Grün mit SCL verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| SCL | GRÜN | SCL |
| SDA | BLAU | SDA |

![img](../media/image077.png)


#### 11.7 Temperatur- und Feuchtigkeitssensor


Führen Sie das mit dem Tastenmodul verbundene Dupont-Kabel durch das Loch mit der Nummer 20 auf der Holzplatte.

| Komponente | Kabel | ESP32 Board Pins |
| --- | --- | --- |
| Temperatur- und Feuchtigkeitssensor | 3PIN 20cm | io17 |

**Rot mit V, Schwarz mit G, Gelb mit io17 verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io17 |

![img](../media/image078.png)


#### 11.8 Dampfsensor


| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Dampfsensor | 3PIN 15cm | io35 |

**Rot mit V, Schwarz mit G, Gelb mit io35 verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io35 |

![img](../media/image079.png)


#### 11.9 Fotowiderstand


| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Fotowiderstand | 3PIN 15cm | io34 |

**Rot mit V, Schwarz mit G, Gelb mit io34 verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io34 |

![img](../media/image080.png)


#### 11.10 Servo


Führen Sie das Kabel des Servos durch Loch 15 und verbinden Sie es dann mit dem ESP32-Board.

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Servo | 3PIN | io26 |

**Rot mit V, Schwarz mit G, Gelb mit io26 verbinden.**

| ESP32 Board Pin | Kabelfarbe |
| --- | --- |
| V | ROT |
| G | SCHWARZ |
| IO26 | GELB |

![img](../media/image081.png)


#### 11.11 Summer


Führen Sie das Kabel des Summers durch Loch 17 und verbinden Sie es dann mit dem ESP32-Board.

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Summer | 3PIN 20cm | io16 |

**Rot mit V, Schwarz mit G, Gelb mit io16 verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io16 |

![image-20250417093147856](../media/image-20250417093147856.png)

![img](../media/image082.png)


#### 11.12 LED


Führen Sie das Kabel der LED durch Loch 7 und verbinden Sie es dann mit dem ESP32-Board.

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| LED | 3PIN 20cm | io27 |

**Rot mit V, Schwarz mit G, Gelb mit io27 verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io27 |

![img](../media/image083.png)


#### 11.13 Wasserstandssensor

Führen Sie das Kabel des Wasserstandssensors durch Loch 13 und verbinden Sie es dann mit dem ESP32-Board.

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Wasserstandssensor | 3PIN 25cm | io33 |

**Rot mit V, Schwarz mit G, Gelb mit io33 verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io33 |

![img](../media/image084.png)


#### 11.14 Bodenfeuchtigkeitssensor


Führen Sie das Kabel des Bodenfeuchtigkeitssensors durch Loch 11 und verbinden Sie es dann mit dem ESP32-Board.

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Bodenfeuchtigkeitssensor | 3PIN 20cm | io32 |

**Rot mit V, Schwarz mit G, Gelb mit io32 verbinden.**

| Modul-Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io32 |

![img](../media/image085.png)


#### 11.15 Relaismodul

| Komponente | Kabel | ESP32 Board Pin |
| --- | --- | --- |
| Relaismodul | 3PIN | io25 |

| Modul Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io25 |

Führen Sie das Kabel der Wasserpumpe wie unten gezeigt durch das Loch 11:

![img](../media/image086.png)

Das rote Kabel der Wasserpumpe wird mit dem mittleren Anschluss des Relaismoduls verbunden, und das schwarze Kabel wird mit dem GND des ESP32-Boards verbunden.

Zusätzlich müssen Sie ein Dupont-Kabel verwenden, um den linken Anschluss des Relaismoduls mit 3,3 V des ESP32 zu verbinden.

![img](../media/image087.png)

![img](../media/image088.png)

Stecken Sie den Stecker des Dupont-Kabels in die Buchse des Relaismoduls und ziehen Sie es mit einem Schraubendreher fest.

![image-20250417093737686](../media/image-20250417093737686.png)

Nach den oben genannten Schritten ist die gesamte Verkabelung abgeschlossen. Die Kabel der LED, des Wasserstandssensors, des Bodenfeuchtigkeitssensors, des Buzzers und der Relais-Wasserpumpe wurden jeweils durch die Löcher 7, 11, 13, 17 und 40 geführt, die in die Lindenholzplatte geschnitzt sind, um die nachfolgende Installation vorzubereiten.

![354e13bf130d878628f1361fdd37b997](../media/354e13bf130d878628f1361fdd37b997.png)

### Schritt 12 Haus und Fundament installieren

#### 12.1 Erforderliche Komponenten

![img](../media/image089.png)

#### 12.2

![img](../media/image090.png)

#### 12.3

![img](../media/image091.png)

#### 12.4

![img](../media/image092.png)

#### 12.5

![img](../media/image093.png)

### Schritt 13 Kunststoffspülen installieren

#### 13.1 Erforderliche Komponenten

![img](../media/image094.png)

#### 13.2

![img](../media/image095.png)

#### 13.3

![img](../media/image096.png)

### Schritt 14 Bodenmodul und Wasserstandsmodul installieren

#### 14.1 Erforderliche Komponenten

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

### Schritt 15 Zaun installieren

#### 15.1 Erforderliche Komponenten

![image-20230718085854136](../media/image-20230718085854136.png)

#### 15.2

![image-20230718085921988](../media/image-20230718085921988.png)

#### 15.3

![image-20230718085936256](../media/image-20230718085936256.png)

#### 15.4

![image-20230718085954487](../media/image-20230718085954487.png)

### Schritt 16 Summer und LED-Modul installieren

#### 16.1 Erforderliche Komponenten

![image-20230718090031524](../media/image-20230718090031524.png)

#### 16.2

![image-20230718090057124](../media/image-20230718090057124.png)


#### 16.3


![image-20230718090110113](../media/image-20230718090110113.png)


#### 16.4


![image-20230718090127577](../media/image-20230718090127577.png)


### Schritt 17 Das Haus dekorieren



#### 17.1 Benötigte Komponenten


![image-20230718090150918](../media/image-20230718090150918.png)


#### 17.2


![image-20230718090215504](../media/image-20230718090215504.png)


#### 17.3


![image-20230718090227072](../media/image-20230718090227072.png)


### Schritt 18 Solarpanel installieren



#### 18.1 Benötigte Komponenten


![img](../media/image128.png)


#### 18.2


![img](../media/image129.png)


#### 18.3


![img](../media/image130.png)


#### 18.4


![img](../media/image131.png)


#### 18.5


Installieren Sie die LED-Leuchte des Solarpanels in dieses Loch.

![img](../media/image132.png)


#### 18.6


Verwenden Sie einen Aufkleber, um die Kabel an der Wand zu befestigen.

![img](../media/image131-1.png)


#### 18.7


![img](../media/image132-1.png)


#### 18.8


![img](../media/image133.png)


#### 18.9


![img](../media/image135.png)


#### 18.10


![image-20230718091556561](../media/image-20230718091556561.png)


### Schritt 19 Batteriegehäuse installieren



#### 19.1 Benötigte Komponenten


![image-20230718091623881](../media/image-20230718091623881.png)


#### 19.2


Legen Sie 6 AA-Batterien ein (nicht im Kit enthalten).

![image-20250417095312061](../media/image-20250417095312061.png)


#### 19.3


![image-20230718091649546](../media/image-20230718091649546.png)


#### 19.4


![image-20230718091701966](../media/image-20230718091701966.png)

