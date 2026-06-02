## 4. Assemblare il Kit Smart Farm



### Passo 1 Installare la scheda ESP32 e il modulo relè



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


### Passo 2 Installare il telaio di fissaggio per il vano batteria e installare la cabina di alimentazione, collegare la scheda ESP32 e il modulo relè



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


| Modulo | Filo | Pin |
| --- | --- | --- |
| Modulo relè | 3PIN 20cm | IO25 |

| Pin Modulo | Colore Filo | Pin Scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io25 |

![img](../media/image015.png)


#### 2.9


![img](../media/image015-1.png)


### Passo 3 Installare la sottostruttura della casa



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


### Passo 4 Installare la porta della cabina di alimentazione

#### 4.1 Componenti richiesti

![img](../media/image027.png)

#### 4.2 Impostare il Servo a 180°

![image-20250416162128859](../media/image-20250416162128859.png)

Il foglio acrilico è imballato separatamente, e si raccomanda di
rimuovere la sua pellicola protettiva per ridurre l'attrito quando si muove come
una porta.

#### 4.3 Installare il Servo

![img](../media/image029.png)

#### 4.4

**Nota: Le viti devono essere serrate per mantenere il servo stabile,
altrimenti la porta potrebbe bloccarsi.**

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

Non girare l'ingranaggio dopo che è stato installato sul servo. Se hai
già girato l'ingranaggio, dovrai riaggiustare l'angolo del servo a
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

B. Cliccare su Strumenti, selezionare "ESP32 Dev Module" per il tipo di scheda nella
barra del menu a discesa, e selezionare COM-XX per la Porta (Secondo la porta
assegnata dal computer in gestione dispositivi)

C. Assicurarsi di aver caricato la libreria **ESP32Servo** e quindi caricare il codice. La porta della cabina di alimentazione si aprirà e si chiuderà
lentamente.

![image-20250417085407205](../media/image-20250417085407205.png)

NOTA: Dopo aver caricato il codice, se la porta non si apre e si chiude e il servo è caldo, spegnere immediatamente l'alimentazione.

**Verificare:**

1. Se la porta di plastica ha un buon contatto e punti di forza con la
   struttura dell'ingranaggio del servo.
1. Se la punta della vite di fissaggio sulla struttura dell'ingranaggio del
   servo è bloccata con il guscio di plastica del servo. In tal caso,
   allentare leggermente la vite di fissaggio per evitare che la sua punta entri in contatto
   con il servo.

![image-20250417085630662](../media/image-20250417085630662.png)

### Passaggio 5 Installare il display LCD e il sensore DHT11

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

| Modulo | Cavo |
| --- | --- |
| Sensore di temperatura e umidità | 3PIN 20cm |

**Prestare attenzione al colore del cavo Dupont:**

**Per il sensore di temperatura e umidità, collegare il giallo a S, il rosso a V, il nero a G.**

![img](../media/image043.png)


#### 5.7


| Modulo | Cavo |
| --- | --- |
| LCD 1602 | 4PIN **(Nero-Rosso-Blu-Verde)** |

**Per il display LCD, collegare il verde a SCL, il blu a SDA, il rosso a VCC, il nero a GND.**

![img](../media/image044.png)


### Passo 6 Installare il Modulo Ultrasonico



#### 6.1 Componenti richiesti


![img](../media/image045.png)


#### 6.2


![img](../media/image046.png)


#### 6.3


![img](../media/image047.png)


#### 6.4 Cablaggio


| Modulo | Cavo |
| --- | --- |
| Modulo ultrasonico | 4PIN **(Nero-Verde-Blu-Rosso)** |

**Prestare attenzione al colore del cavo Dupont: Per il modulo ultrasonico, collegare il blu a TRIG, il verde a ECHO, il rosso a VCC, il nero a GND.**

![img](../media/image048.png)


### Passo 7 Installare il Sensore di Movimento PIR e il Modulo Pulsante



#### 7.1 Componenti richiesti


![img](../media/image049.png)


#### 7.2


![img](../media/image050.png)


#### 7.3


![img](../media/image051.png)


#### 7.4 Cablaggio


**Collegare i moduli tramite cavi Dupont.**

| Modulo | Cavo |
| --- | --- |
| Sensore di Movimento PIR | 3PIN 15cm |
| Modulo Pulsante | 3PIN 15cm |

**Prestare attenzione al colore del cavo Dupont: Collegare il giallo a S, il rosso a V, il nero a G.**

![img](../media/image052.png)


### Passo 8 Installare le Pareti della Casa



#### 8.1 Componenti richiesti


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


#### 8.8 Prototipo


![img](../media/image060.png)


#### 8.9 Cablaggio


| Modulo | Cavo |
| --- | --- |
| Ventola | 4PIN **Diviso (Nero-Rosso-Blu-Verde)** |
| Sensore di Vapore | 3PIN 15cm |
| Fotoresistore | 3PIN 15cm |

**Prestare attenzione al colore del cavo Dupont per la Ventola:**

| Pin Modulo | Colore Cavo | Pin Scheda ESP32 |
| :--- | :--- | :--- |
| IN- | VERDE | io18 |
| IN+ | BLU | io19 |
| V | ROSSO | V |
| G | NERO | G |

**Per il Sensore di Vapore e il Fotoresistore: Collegare il giallo a S, il rosso a V, il nero a G.**

![img](../media/image061.png)


### Passo 9 Installare il Tetto della casa



#### 9.1 Componenti richiesti

![img](../media/image062.png)


#### 9.2


![img](../media/image063.png)


#### 9.3


![img](../media/image064.png)


#### 9.4 Mantieni i cavi organizzati


![img](../media/image065.png)


### Passo 10 Installa la Casa e la Base



#### 10.1 Componenti richiesti


![img](../media/image066.png)


#### 10.2


![img](../media/image067.png)


#### 10.3


![img](../media/image068.png)


#### 10.4 Vista dal basso


![img](../media/image069.png)


#### 10.5


![img](../media/image070.png)


#### 10.6 Organizza i cavi


![img](../media/image071.png)


#### 10.7


![img](../media/image072.png)


### Passo 11 Cablaggio della Casa



#### 11.1


**Presta attenzione al colore del cavo Dupont: collega il giallo a S,
il rosso a V, il nero a G.**

| NO. | Componenti | Cavi | Pin della scheda ESP32 |
| --- | --- | --- | --- |
| 1 | Ventola | 4pin, Diviso Nero-Rosso-Blu-Verde | io18(IN-) \ io19(IN+) | |
| 2 | Sensore di movimento PIR | 3pin 15cm | io23 |
| 3 | Pulsante | 3pin 15cm | io5 |
| 4 | Modulo Ultrasuoni | 4pin, Diviso Nero-Verde-Blu-Rosso | D12(TRIG) D13(ECHO) |
| 5 | LCD 1602 | 4pin, Connesso | I2C |
| 6 | Sensore di Temperatura e Umidità | 3pin 20cm | io17 |
| 7 | Sensore di Vapore | 3pin 15cm | io35 |
| 8 | Fotoresistore | 3pin 15cm | io34 |
| 9 | Servo | -- | io26 |
| 10 | Buzzer | 3pin 20cm | io16 |
| 11 | LED | 3pin 20cm | io27 |
| 12 | Sensore di Livello dell'Acqua | 3pin 25cm | io33 |
| 13 | Sensore di Umidità del Suolo | 3pin 20cm | io32 |
| 14 | Pompa dell'Acqua | 3pin 20cm | io25 |


#### 11.2 Ventola


Fai passare il cavo Dupont collegato alla ventola attraverso il foro **contrassegnato 30**
sulla tavola di legno.

| Componenti | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Ventola | 4PIN Diviso (Nero-Rosso-Blu-Verde) | io18(IN-), io19(IN+) |

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| :--- | :--- | :--- |
| IN- | VERDE | io18 |
| IN+ | BLU | io19 |
| V | ROSSO | V |
| G | NERO | G |

![img](../media/image073.png)


#### 11.3 Sensore di movimento PIR


Fai passare il cavo Dupont collegato al sensore di movimento PIR attraverso il foro
contrassegnato 24 sulla tavola di legno.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Sensore di movimento PIR | 3PIN 15cm | io23 |

**Collega il rosso a V, il nero a G, il giallo a S.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io23 |

![img](../media/image074.png)


#### 11.4 Modulo Pulsante


Fai passare il cavo Dupont collegato al modulo pulsante attraverso il foro
contrassegnato 25 sulla tavola di legno.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Pulsante | 3PIN 15cm | io5 |

**Collega il rosso a V, il nero a G, il giallo a S.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io5 |

![img](../media/image075.png)


#### 11.5 Modulo Ultrasuoni


| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Modulo Ultrasuoni | 4PIN **Diviso** (Nero-Verde-Blu-Rosso) | io13(ECHO), io12(TRIG) |

**Collega il rosso a V, il nero a G, il blu a io12, il verde a io13.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V (io12) |
| G | NERO | G (io12) |
| ECHO | VERDE | io13 |
| TRIG | BLU | io12 |

![img](../media/image076.png)


#### 11.6 LCD 1602

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| LCD1602 | 4PIN Collegato (Nero-Rosso-Blu-Verde) | I2C |

**Collegare il rosso a V, il nero a G, il blu a SDA, il verde a SCL.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| SCL | VERDE | SCL |
| SDA | BLU | SDA |

![img](../media/image077.png)


#### 11.7 Sensore di Temperatura e Umidità


Far passare il cavo Dupont collegato al modulo pulsante attraverso il foro contrassegnato con 20 sulla tavola di legno.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Sensore di Temperatura e Umidità | 3PIN 20cm | io17 |

**Collegare il rosso a V, il nero a G, il giallo a io17.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io17 |

![img](../media/image078.png)


#### 11.8 Sensore di Vapore


| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Sensore di Vapore | 3PIN 15cm | io35 |

**Collegare il rosso a V, il nero a G, il giallo a io35.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io35 |

![img](../media/image079.png)


#### 11.9 Fotoresistore


| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Fotoresistore | 3PIN 15cm | io34 |

**Collegare il rosso a V, il nero a G, il giallo a io34.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io34 |

![img](../media/image080.png)


#### 11.10 Servo


Far passare il cavo del Servo attraverso il Foro 15, quindi collegarlo alla scheda ESP32.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Servo | 3PIN | io26 |

**Collegare il rosso a V, il nero a G, il giallo a io26.**

| Pin della scheda ESP32 | Colore del cavo |
| --- | --- |
| V | ROSSO |
| G | NERO |
| IO26 | GIALLO |

![img](../media/image081.png)


#### 11.11 Buzzer


Far passare il cavo del Buzzer attraverso il Foro 17, quindi collegarlo alla scheda ESP32.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Buzzer | 3PIN 20cm | io16 |

**Collegare il rosso a V, il nero a G, il giallo a io16.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io16 |

![image-20250417093147856](../media/image-20250417093147856.png)

![img](../media/image082.png)


#### 11.12 LED


Far passare il cavo del LED attraverso il Foro 7, quindi collegarlo alla scheda ESP32.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| LED | 3PIN 20cm | io27 |

**Collegare il rosso a V, il nero a G, il giallo a io27.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io27 |

![img](../media/image083.png)


#### 11.13 Sensore di Livello dell'Acqua

Far passare il cavo del sensore di livello dell'acqua attraverso il Foro 13, quindi collegarlo alla scheda ESP32.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Sensore di Livello dell'Acqua | 3PIN 25cm | io33 |

**Collegare il rosso a V, il nero a G, il giallo a io33.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io33 |

![img](../media/image084.png)


#### 11.14 Sensore di Umidità del Suolo


Far passare il cavo del sensore di umidità del suolo attraverso il Foro 11, quindi collegarlo alla scheda ESP32.

| Componente | Cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| Sensore di Umidità del Suolo | 3PIN 20cm | io32 |

**Collegare il rosso a V, il nero a G, il giallo a io32.**

| Pin del modulo | Colore del cavo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io32 |

![img](../media/image085.png)


#### 11.15 Modulo Relè

| Componente | Filo | Pin della scheda ESP32 |
| --- | --- | --- |
| Modulo relè | 3PIN | io25 |

| Pin del modulo | Colore del filo | Pin della scheda ESP32 |
| --- | --- | --- |
| V | ROSSO | V |
| G | NERO | G |
| S | GIALLO | io25 |

Far passare il filo della pompa dell'acqua attraverso il Foro 11 nel modo mostrato di seguito:

![img](../media/image086.png)

Il filo rosso della pompa dell'acqua è collegato al terminale centrale del modulo relè, e il filo nero è collegato al GND della scheda ESP32.

Inoltre, è necessario utilizzare un cavo Dupont per collegare il terminale sinistro del modulo relè al 3.3V dell'ESP32.

![img](../media/image087.png)

![img](../media/image088.png)

Inserire il terminale maschio del cavo Dupont nel terminale femmina del modulo relè e serrarlo con un cacciavite.

![image-20250417093737686](../media/image-20250417093737686.png)

Dopo i passaggi precedenti, si noti che tutti i cablaggi sono stati completati. E i fili del LED, del sensore di livello dell'acqua, del sensore di umidità del suolo, del buzzer e della pompa dell'acqua del relè sono passati rispettivamente attraverso i fori 7, 11, 13, 17 e 40 intagliati sulla tavola di tiglio, preparandosi per la successiva installazione.

![354e13bf130d878628f1361fdd37b997](../media/354e13bf130d878628f1361fdd37b997.png)


### Passaggio 12 Installare la casa e le fondamenta



#### 12.1 Componenti richiesti


![img](../media/image089.png)


#### 12.2


![img](../media/image090.png)


#### 12.3


![img](../media/image091.png)


#### 12.4


![img](../media/image092.png)


#### 12.5


![img](../media/image093.png)


### Passaggio 13 Installare i lavelli in plastica



#### 13.1 Componenti richiesti


![img](../media/image094.png)


#### 13.2


![img](../media/image095.png)


#### 13.3


![img](../media/image096.png)


### Passaggio 14 Installare il modulo del suolo e il modulo del livello dell'acqua



#### 14.1 Componenti richiesti


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


### Passaggio 15 Installare la recinzione



#### 15.1 Componenti richiesti


![image-20230718085854136](../media/image-20230718085854136.png)


#### 15.2


![image-20230718085921988](../media/image-20230718085921988.png)


#### 15.3


![image-20230718085936256](../media/image-20230718085936256.png)


#### 15.4


![image-20230718085954487](../media/image-20230718085954487.png)


### Passaggio 16 Installare il Buzzer e il modulo Led



#### 16.1 Componenti richiesti


![image-20230718090031524](../media/image-20230718090031524.png)


#### 16.2

![image-20230718090057124](../media/image-20230718090057124.png)


#### 16.3


![image-20230718090110113](../media/image-20230718090110113.png)


#### 16.4


![image-20230718090127577](../media/image-20230718090127577.png)


### Passo 17 Decora la Casa



#### 17.1 Componenti richiesti


![image-20230718090150918](../media/image-20230718090150918.png)


#### 17.2


![image-20230718090215504](../media/image-20230718090215504.png)


#### 17.3


![image-20230718090227072](../media/image-20230718090227072.png)


### Passo 18 Installa il Pannello Solare



#### 18.1 Componenti richiesti


![img](../media/image128.png)


#### 18.2


![img](../media/image129.png)


#### 18.3


![img](../media/image130.png)


#### 18.4


![img](../media/image131.png)


#### 18.5


Installa la luce LED del pannello solare in questo foro.

![img](../media/image132.png)


#### 18.6


Usa un adesivo per fissare i suoi fili al muro

![img](../media/image131-1.png)


#### 18.7


![img](../media/image132-1.png)


#### 18.8


![img](../media/image133.png)


#### 18.9


![img](../media/image135.png)


#### 18.10


![image-20230718091556561](../media/image-20230718091556561.png)


### Passo 19 Installa il Portabatterie



#### 19.1 Componenti richiesti


![image-20230718091623881](../media/image-20230718091623881.png)


#### 19.2


Installa 6 batterie AA (non incluse nel kit)

![image-20250417095312061](../media/image-20250417095312061.png)


#### 19.3


![image-20230718091649546](../media/image-20230718091649546.png)


#### 19.4


![image-20230718091701966](../media/image-20230718091701966.png)
