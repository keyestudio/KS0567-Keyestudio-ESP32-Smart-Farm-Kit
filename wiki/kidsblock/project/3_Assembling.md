## 3. Assemblaggio

Durante l'assemblaggio, è necessario caricare alcuni codici, quindi si prega di installare prima il software.

L'intero assemblaggio può essere generalmente diviso in due parti: assemblaggio
dei componenti e cablaggio.

---

### Step 1 Installare la scheda ESP32 e il modulo relè

#### 1.1 Componenti richiesti

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

### Step 2 Installare il telaio di fissaggio per il vano batteria e installare la cabina di alimentazione, collegare la scheda ESP32 e il modulo relè

#### 2.1 Componenti richiesti

![img](../media/image007.png)

---

#### 2.2

Assemblare le tavole di legno X e O sulla piastra inferiore

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

#### 2.8 Collegare la scheda ESP32 e il modulo relè

| Modulo | Filo | Pin |
| --- | --- | --- |
| Modulo relè | 3PIN 20cm | IO25 |

| Pin modulo | Colore filo | Pin scheda ESP32 |
| --- | --- | --- |
| V | RED | V |
| G | BLACK | G |
| S | YELLOW | io25 |

![img](../media/image015.png)

---

#### 2.9

![img](../media/image015-1.png)

---

### Step 3 Installare la sottostruttura della casa

---

#### 3.1 Componenti richiesti

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

### Step 4 Installare la porta della cabina di alimentazione

---

#### 4.1 Componenti richiesti

![image027](../media/image027.png)

![image](../media/image-20250416162128859.png)

Il foglio acrilico è imballato separatamente, e si raccomanda di rimuovere la sua pellicola protettiva per ridurre l'attrito quando si muove come una porta.

---

#### 4.2 Impostare il Servo a 165°

> **⚠ ATTENZIONE — Leggere prima di procedere:**
>
> 1. **NON impostare il servo a 180°.** Il meccanismo della porta non richiede l'intera gamma 0°–180°. Impostarlo all'estremità causerà la pressione del servo contro il fermo meccanico, il che potrebbe surriscaldare e danneggiare permanentemente il motore del servo.
> 2. **Mantenere la scheda alimentata durante l'installazione.** Quando il servo è alimentato e mantiene il suo angolo, NON forzare l'ingranaggio o la porta a mano. Se la scheda è spenta, il servo non ha coppia di tenuta, e ruotare manualmente l'ingranaggio sposterà l'angolo calibrato, causando un disallineamento dopo l'accensione.
> 3. **NON usare la forza bruta.** Se la porta non si muove agevolmente, fermarsi immediatamente e controllare l'assemblaggio. Forzarla danneggerà gli ingranaggi del servo.

Si prega di notare che questo passaggio è molto importante. Prima dell'installazione, assicurarsi di impostare il servo a **165°** (con un buffer di 15° riservato a ciascuna estremità per prevenire danni meccanici).

**Prima di montare il servo, impostare prima l'angolo a 165° programmando con KidsBlock (programmazione grafica).**

Si prega di fare riferimento ai passaggi di installazione del software per i dettagli.

**Collegare il Servo alla scheda di sviluppo ESP32 al pin IO26.**

![img](../media/image028-1.png)

---

![img](../media/image028-3.png)

---

- Aprire **KidsBlock**. Selezionare la scheda ESP32 e la porta seriale corretta, e caricare il seguente codice sulla scheda. Il codice imposta il servo a **165°**.

![image-20250425134842857](../media/image-20250425134842857.png)

![img](../media/image028-2.png)

> **Importante:** Mantenere la scheda alimentata e il servo a 165° mentre si procede con il passaggio di assemblaggio. NON scollegare l'alimentazione o muovere manualmente l'ingranaggio finché il pannello della porta non è completamente installato.

---

#### 4.3 Installare il Servo

![img](../media/image029.png)

---

#### 4.4

**Nota: Le viti devono essere serrate per mantenere il servo stabile, altrimenti la porta potrebbe bloccarsi**

![img](../media/image030.png)

---

#### 4.5

![image-20250416162337896](../media/image-20250416162337896.png)

Installare le viti autofilettanti M1.4*6MM come mostrato di seguito

![6e1caadec8b1ec99b0093200763607b6](../media/6e1caadec8b1ec99b0093200763607b6.jpg)

---

#### 4.6

![image-20250416162754513](../media/image-20250416162754513.png)

---

#### 4.7

![img](../media/image033.png)

---

#### 4.8

Non girare l'ingranaggio dopo che è stato installato sul servo. Se hai già girato l'ingranaggio, dovrai riaggiustare l'angolo del servo a 180°.

![img](../media/image034.png)

---

#### 4.9

**NOTA: Quando si installa il coperchio della scatola di alimentazione, la sua apertura deve essere completamente chiusa.**

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

#### 4.13 Testare la porta

1. Collegare il Servo al pin IO26 della scheda ESP32. Collegare il giallo a S, il rosso a V, il nero a G.

![img](../media/image028-1.png)

2. Collegare 6 batterie AA alla porta DC 7-12V della scheda ESP32. (Batterie non incluse nel kit)

![