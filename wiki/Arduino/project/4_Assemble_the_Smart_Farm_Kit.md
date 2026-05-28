## 4. Assemblare il Kit Smart Farm



### Step 1 Installare la scheda ESP32 e il modulo relè



#### 1.1 Componenti richiesti


![img](../media/image001.png)


#### 1.2


![img](../media/image002.png)


#### 1.3


![img](../media/image003.png)


#### 1.4


![img](../media/image004.png)


#### 1.5


![img](../media/image006.png)


### Step 2 Installare il telaio di fissaggio per il vano batteria e installare la cabina di alimentazione, collegare la scheda ESP32 e il modulo relè



#### 2.1 Componenti richiesti


![img](../media/image007.png)


#### 2.2


Assemblare le tavole di legno X e O sulla piastra inferiore

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


#### 2.8 Collegare la scheda ESP32 e il modulo relè


| Modulo | Cavo | Pin |
| --- | --- | --- |
| Modulo relè | 3PIN 20cm | IO25 |

| Pin modulo | Colore cavo | Pin scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io25 |

![img](../media/image015.png)


#### 2.9


![img](../media/image015-1.png)


### Step 3 Installare la sottostruttura della casa



#### 3.1 Componenti richiesti


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


### Step 4 Installare la porta della cabina di alimentazione



#### 4.1 Componenti richiesti


![img](../media/image027.png)


#### 4.2 Impostare il Servo a 180°


![image-20250416162128859](../media/image-20250416162128859.png)

Il foglio acrilico è confezionato separatamente, e si consiglia di
rimuovere la sua pellicola protettiva per ridurre l'attrito quando si muove come
porta.


#### 4.3 Installare il Servo


![img](../media/image029.png)


#### 4.4


**Nota: Le viti devono essere serrate per mantenere il servo stabile,
altrimenti la porta potrebbe bloccarsi**

![img](../media/image030.png)


#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Installare le viti autofilettanti M1.4*6MM come mostrato di seguito

![img](../media/6e1caadec8b1ec99b0093200763607b6.jpg)


#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)


#### 4.7


![img](../media/image033.png)


#### 4.8


Non ruotare l'ingranaggio dopo che è stato installato sul servo. Se si è
già ruotato l'ingranaggio, sarà necessario regolare nuovamente l'angolo del servo a
180°.

![img](../media/image034.png)


#### 4.9


**NOTA: Quando si installa il coperchio della scatola di alimentazione, la sua apertura deve
essere completamente chiusa.**

![img](../media/image035.png)


#### 4.10


![img](../media/image036.png)


#### 4.11


![img](../media/image037.png)


#### 4.12


![img](../media/image037-1.png)


#### 4.13 Testare la porta


1. Collegare il Servo al pin IO26 della scheda ESP32. Collegare il giallo a S,
   il rosso a V, il nero a G.

![image028-1](../media/image028-1-1744850789118-1.png)

2. Collegare 6 batterie AA alla porta DC 7-12V della scheda ESP32.
   (Batterie non incluse nel kit)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Caricare il codice di test

A. Collegare la scheda ESP32 al computer con il cavo USB. Aprire il
file INO all'interno della cartella **6.1Servo** con Arduino IDE.

![image-20250418081022882](../media/image-20250418081022882.png)

![image-20250418081231084](../media/image-20250418081231084.png)

B. Cliccare su Strumenti, selezionare "ESP32 Dev Module" per il tipo di scheda nel
menu a discesa, e selezionare COM-XX per la Porta (Secondo la porta
assegnata dal computer in gestione dispositivi)

C. Assicurarsi di aver caricato la libreria **ESP32Servo** e quindi caricare il codice. La porta della cabina di alimentazione si aprirà e chiuderà lentamente.

![image-20250417085407205](../media/image-20250417085407205.png)

NOTA: Dopo aver caricato il codice, se la porta non può essere aperta e chiusa e il servo è caldo, spegnere immediatamente l'alimentazione.

**Verificare:**

1. Se la porta di plastica ha un buon contatto e punti di forza con la
   struttura dell'ingranaggio del servo.
1. Se la punta della vite di fissaggio sulla struttura dell'ingranaggio del
   servo è bloccata con il guscio di plastica del servo. In tal caso, si prega di
   allentare un po' la vite di fissaggio per evitare che la sua punta entri in contatto
   con il servo.

![image-20250417085630662](../media/image-20250417085630662.png)


### Step 5 Installare il display LCD e il sensore DHT11



#### 5.1 Componenti richiesti


![img](../media/image038.png)


#### 5.2


![img](../media/image039.png)


#### 5.3


![img](../media/image040.png)


#### 5.4


![img](../media/image041.png)


#### 5.5 Prototipo


![img](../media/image042.png)


#### 5.6 Cablaggio


**Collegare i moduli tramite cavi Dupont.**

|