## 3. Impostare l'angolo del servo

Nella prossima lezione, assembleremo questo kit di fattoria intelligente. Prima di assemblare il servo al kit, dobbiamo **impostare il suo angolo a 165°** (con un margine di 15° riservato a ciascuna estremità) in modo che funzioni come previsto ed eviti danni meccanici.

> **⚠ ATTENZIONE — Leggere prima di procedere:**
>
> 1. **NON impostare il servo a 180°.** Il meccanismo della porta non richiede l'intera gamma 0°–180°. Impostarlo all'estremità causerà la pressione del servo contro il fermo meccanico, il che potrebbe surriscaldare e danneggiare permanentemente il motore del servo.
> 2. **Mantenere la scheda alimentata durante l'installazione.** Quando il servo è alimentato e mantiene il suo angolo, NON forzare l'ingranaggio o la porta a mano. Se la scheda non è alimentata, il servo non ha coppia di tenuta e la rotazione manuale dell'ingranaggio sposterà l'angolo calibrato, causando un disallineamento dopo l'accensione.
> 3. **NON usare la forza bruta.** Se la porta non si muove agevolmente, fermarsi immediatamente e controllare l'assemblaggio. Forzarla danneggerà gli ingranaggi del servo.

![image-20250416152950497](../media/image-20250416152950497.png)

1. Collegare il servo al **pin io26** della scheda ESP32 PLUS. Nota: I fili marrone, rosso e arancione del servo sono rispettivamente collegati a GND(G), 5V(V) e **Pin io26.**

![image028-1](../media/image028-1.png)

2. Collegare la scheda ESP32 PLUS al computer.

![image-20250416153731709](../media/image-20250416153731709.png)

3. Assicurarsi di aver installato la libreria **ESP32Servo.h** per l'Arduino IDE. In caso contrario, fare riferimento alla sezione precedente per installarla.

![3bd9304d-73d9-4fc3-9e59-50c55f947960](../media/3bd9304d-73d9-4fc3-9e59-50c55f947960.png)

4. Aprire il codice **window_servo** fornito nel nostro pacchetto tutorial con Arduino IDE.

> **Nota:** Il codice `window_servo` fornito imposta il servo a **165°** (non 180°). Questo riserva un margine meccanico di 15° per prevenire collisioni al fine corsa. L'intervallo di lavoro della porta è 15°–165°.

![image-20250416154133013](../media/image-20250416154133013.png)

5. Cliccare su **Strumenti**, selezionare "**ESP32 Dev Module**" per il tipo di scheda e selezionare **COM-XX** per la porta come mostrato in Gestione dispositivi.

![51454125](../media/51454125.png)

6. Cliccare ![image-20250416154532804](../media/image-20250416154532804.png) per caricare. Dopo che il caricamento è completo, il servo si sposterà a **165°** e manterrà quella posizione.

> **Importante:** Mantenere la scheda alimentata e il servo in posizione a 165° mentre si procede al passaggio di assemblaggio. **Non** scollegare l'alimentazione o muovere manualmente l'ingranaggio finché il pannello della porta non è completamente installato.

![image-20250416155301751](../media/image-20250416155301751.png)
