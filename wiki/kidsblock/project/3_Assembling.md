## 3. Montage


Während der Montage müssen einige Codes gebrannt werden, daher installieren Sie bitte zuerst die Software.

Die gesamte Montage lässt sich im Allgemeinen in zwei Teile unterteilen: Montage
von Teilen und Verkabelung.

---



### Schritt 1 Installieren Sie das ESP32 Board und das Relaismodul



#### 1.1 Benötigte Komponenten


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



### Schritt 2 Installieren Sie den Befestigungsrahmen für das Batteriegehäuse und installieren Sie die Futterkabine, verbinden Sie das ESP32 Board und das Relaismodul



#### 2.1 Benötigte Komponenten


![img](../media/image007.png)

---



#### 2.2


Montieren Sie die Holzplatte X und O auf der Bodenplatte

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



#### 2.8 Verbinden Sie das ESP32 Board und das Relaismodul


| Modul | Kabel | Pin |
| --- | --- | --- |
| Relaismodul | 3PIN 20cm | IO25 |

| Modul Pin | Kabelfarbe | ESP32 Board Pin |
| --- | --- | --- |
| V | ROT | V |
| G | SCHWARZ | G |
| S | GELB | io25 |

![img](../media/image015.png)

---



#### 2.9


![img](../media/image015-1.png)

---



### Schritt 3 Installieren Sie die Unterkonstruktion des Hauses


---



#### 3.1 Benötigte Komponenten


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



### Schritt 4 Installieren Sie die Tür der Futterkabine


---



#### 4.1 Benötigte Komponenten


![image027](../media/image027.png)

![image](../media/image-20250416162128859.png)

Die Acrylplatte ist separat verpackt, und es wird empfohlen, die Schutzfolie abzuziehen, um die Reibung beim Bewegen als Tür zu reduzieren.

---



#### 4.2 Servo auf 165° einstellen

> **⚠ WARNUNG — Vor dem Fortfahren lesen:**
>
> 1. **Stellen Sie den Servo NICHT auf 180° ein.** Der Türmechanismus benötigt nicht den vollen Bereich von 0°–180°. Das Einstellen auf das extreme Ende führt dazu, dass der Servo gegen den mechanischen Anschlag drückt, was den Servomotor überhitzen und dauerhaft beschädigen kann.
> 2. **Halten Sie die Platine während der Installation mit Strom versorgt.** Wenn der Servo mit Strom versorgt wird und seinen Winkel hält, zwingen Sie das Getriebe oder die Tür NICHT von Hand. Wenn die Platine nicht mit Strom versorgt wird, hat der Servo kein Haltemoment, und das manuelle Drehen des Getriebes verschiebt den kalibrierten Winkel, was nach dem Einschalten zu einer Fehlausrichtung führt.
> 3. **Wenden Sie KEINE rohe Gewalt an.** Wenn sich die Tür nicht reibungslos bewegt, halten Sie sofort an und überprüfen Sie die Montage. Gewaltanwendung führt zum Ausreißen der Servozahnräder.

Bitte beachten Sie, dass dieser Schritt sehr wichtig ist. Stellen Sie den Servo vor der Installation unbedingt auf **165°** ein (mit einem Puffer von 15° an jedem Ende, um mechanische Schäden zu vermeiden).

**Bevor Sie den Servo montieren, stellen Sie den Winkel zuerst auf 165° ein, indem Sie mit KidsBlock (Grafische Programmierung) programmieren.**

Einzelheiten entnehmen Sie bitte den Schritten zur Softwareinstallation.

**Verbinden Sie den Servo mit dem ESP32 Entwicklungsboard an Pin IO26.**

![img](../media/image028-1.png)

---


![img](../media/image028-3.png)

---


- Öffnen Sie **KidsBlock**. Wählen Sie das ESP32 Board und den richtigen seriellen Port aus und brennen Sie den folgenden Code auf das Board. Der Code stellt den Servo auf **165°** ein.

![image-20250425134842857](../media/image-20250425134842857.png)

![img](../media/image028-2.png)

> **Wichtig:** Halten Sie die Platine mit Strom versorgt und den Servo auf 165° gehalten, während Sie mit dem Montageschritt fortfahren. Trennen Sie die Stromversorgung **nicht** und bewegen Sie das Getriebe nicht manuell, bis die Türverkleidung vollständig installiert ist.

---



#### 4.3 Servo installieren


![img](../media/image029.png)

---



#### 4.4

**Hinweis: Die Schrauben müssen fest angezogen werden, um den Servo stabil zu halten, da sonst die Tür klemmen kann.**

![img](../media/image030.png)

---



#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Installieren Sie M1.4*6MM selbstschneidende Schrauben wie unten gezeigt

![6e1caadec8b1ec99b0093200763607b6](../media/6e1caadec8b1ec99b0093200763607b6.jpg)

---



#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)

---



#### 4.7


![img](../media/image033.png)

---



#### 4.8


Drehen Sie das Zahnrad nicht, nachdem es am Servo installiert wurde. Wenn Sie das Zahnrad bereits gedreht haben, müssen Sie den Servowinkel auf 180° neu einstellen.

![img](../media/image034.png)

---



#### 4.9

**HINWEIS: Beim Anbringen des Deckels des Futterkastens sollte dessen Öffnung vollständig geschlossen sein.**

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



#### 4.13 Tür testen


1. Verbinden Sie den Servo mit Pin IO26 des ESP32 Boards. Verbinden Sie Gelb mit S, Rot mit V, Schwarz mit G.

![img](../media/image028-1.png)

2. Verbinden Sie 6 AA-Batterien mit dem DC 7-12V Port des ESP32 Boards. (Batterien nicht im