## 3. Montage


Tijdens de montage moeten er enkele codes worden gebrand, dus installeer eerst de software.

De gehele montage kan over het algemeen worden verdeeld in twee delen: het monteren van
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



### Stap 2 Installeer het bevestigingsframe voor de batterijhouder en installeer de voedingscabine, verbind het ESP32-bord en de relaismodule



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



### Stap 4 Installeer de deur van de voedingscabine


---



#### 4.1 Benodigde componenten


![image027](../media/image027.png)

![image](../media/image-20250416162128859.png)

De acrylplaat is apart verpakt en het wordt aanbevolen om de beschermfolie te verwijderen om de wrijving te verminderen wanneer deze als deur beweegt.

---



#### 4.2 Stel de servo in op 165°

> **⚠ WAARSCHUWING — Lees voordat u verdergaat:**
>
> 1. **Stel de servo NIET in op 180°.** Het deurmechanisme vereist niet het volledige bereik van 0°–180°. Als u deze op het uiterste einde instelt, zal de servo tegen de mechanische stop drukken, wat de servomotor kan oververhitten en permanent kan beschadigen.
> 2. **Houd het bord van stroom voorzien tijdens de installatie.** Wanneer de servo van stroom is voorzien en zijn hoek vasthoudt, forceer de tandwiel of deur dan NIET met de hand. Als het bord niet van stroom is voorzien, heeft de servo geen houdkoppel, en handmatig draaien van het tandwiel zal de gekalibreerde hoek verschuiven, wat na het inschakelen tot verkeerde uitlijning leidt.
> 3. **Gebruik GEEN brute kracht.** Als de deur niet soepel beweegt, stop dan onmiddellijk en controleer de montage. Forceer het niet, want dit zal de servotandwielen strippen.

Houd er rekening mee dat deze stap erg belangrijk is. Zorg ervoor dat u de servo vóór installatie instelt op **165°** (met een buffer van 15° aan elk uiteinde om mechanische schade te voorkomen).

**Voordat u de servo monteert, stelt u eerst de hoek in op 165° door te programmeren met KidsBlock (grafische programmering).**

Raadpleeg de software-installatiestappen voor details.

**Verbind de servo met het ESP32-ontwikkelbord op pin IO26.**

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

---



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


1. Verbind de servo met pin IO26 van het ESP32-bord. Verbind geel met S, rood met V, zwart met G.

![img](../media/image