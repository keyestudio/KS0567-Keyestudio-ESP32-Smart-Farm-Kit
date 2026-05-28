## 4. Smart Farm Kit zusammenbauen



### Schritt 1 ESP32 Board und Relaismodul installieren



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


### Schritt 2 Befestigungsrahmen für das Batteriegehäuse installieren und die Futterkabine installieren, das ESP32 Board und das Relaismodul verbinden



#### 2.1 Benötigte Komponenten


![img](../media/image007.png)


#### 2.2


Holzplatte X und O auf der Bodenplatte montieren

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


#### 2.8 ESP32 Board und Relaismodul verbinden


| Modul | Kabel | Pin |
| --- | --- | --- |
| Relaismodul | 3PIN 20cm | IO25 |

| Modul Pin | Kabelfarbe | ESP32 Board Pin |
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
Schutzfolie zu entfernen, um die Reibung beim Bewegen als Tür zu
reduzieren.


#### 4.3 Servo installieren


![img](../media/image029.png)


#### 4.4


**Hinweis: Die Schrauben müssen fest angezogen werden, um das Servo
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


#### 4.13 Tür testen


1. Servo an Pin IO26 des ESP32 Boards anschließen. Gelb an S,
   rot an V, schwarz an G anschließen.

![image028-1](../media/image028-1-1744850789118-1.png)

2. 6 AA-Batterien an den DC 7-12V-Anschluss des ESP32 Boards
   anschließen. (Batterien nicht im Kit enthalten)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Testcode hochladen

A. Das ESP32 Board mit dem USB-Kabel an den Computer anschließen. Die
INO-Datei im Ordner **6.1Servo** mit Arduino IDE öffnen.

![image-20250418081022882](../media/image-20250418081022882.png)

![image-20250418081231084](../media/image-20250418081231084.png)

B. Auf "Tools" klicken, im Dropdown-Menü "ESP32 Dev Module" als Boardtyp
auswählen und COM-XX für den Port auswählen (entsprechend dem vom
Computer im Gerätemanager zugewiesenen Port).

C. Bitte stellen Sie sicher, dass Sie die **ESP32Servo** Bibliothek
hochgeladen haben und laden Sie dann den Code hoch. Die Tür der
Futterkabine öffnet und schließt sich langsam.

![image-20250417085407205](../media/image-20250417085407205.png)

HINWEIS: Wenn sich die Tür nach dem Hochladen des Codes nicht öffnen und schließen lässt und das Servo heiß ist, schalten Sie die Stromversorgung sofort aus.

**Überprüfen:**

1. Ob die Kunststofftür guten Kontakt und Kraftpunkte mit der
   Getriebestruktur des Servos hat.
1. Ob die Spitze der Befestigungsschraube an der Getriebestruktur des
   Servos mit dem Kunststoffgehäuse des Servos verklemmt ist. Falls ja,
   lösen Sie die Befestigungsschraube etwas, um zu verhindern, dass ihre
   Spitze das Servo berührt.

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

**Achten Sie auf die Farbe