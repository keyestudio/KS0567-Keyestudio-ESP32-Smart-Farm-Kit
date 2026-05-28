## 1. Introduzione a KidsBlock



### 1.1 Installazione di KidsBlock



#### 1.1.1 Installare KidsBlock su sistema Windows


1. È possibile scaricare KidsBlock da:

   -  Link: http://xiazai.keyesrobot.cn/KidsBlock.exe

   -  File fornito: ![img](../media/an1-1.png)

1. Dopo il download, fare clic su "KidsBlock.exe" ![image1](../media/an1.png)

1. Spuntare " **Anyone who uses this computer(all users)** " e quindi fare clic su "**Next**".

![img](../media/an2.png)

4. Fare clic su " **Browse...** " per scegliere un percorso di installazione (qui scegliamo il disco C; è possibile selezionare qualsiasi posizione desiderata) e fare clic su " **Install** ". Ora è in fase di installazione!

![img](../media/an3.png)

![img](../media/an4.png)

5. Al termine dell'installazione, fare clic su " **Finish** " per aprirlo.

![img](../media/an5.png)

6. Se viene visualizzato un avviso, fare clic su " **Allow access** " per accedere alla pagina principale del software.

![img](../media/an6.png)

---



#### 1.1.2 Installare KidsBlock su MacOS


1. Scaricare prima il pacchetto KidsBlock: http://xiazai.keyesrobot.cn/KidsBlock.dmg

![img](../media/an7.png)

2. Fare clic su KidsBlock e trascinare " **KidsBlock Desktop** " in " **Applications** ", come mostrato di seguito.

![img](../media/an8.png)

3. Dopo l'installazione, l'icona di KidsBlock apparirà nel pad operativo:

![img](../media/an9.png)

4. Fare clic sull'icona di KidsBlock per accedere al software. Se non funziona, modificare alcune impostazioni del computer per rientrarvi. Questo perché i sistemi Mac, per impostazione predefinita, autorizzano l'installazione solo nell'App Store, quindi altri non sono autorizzati a essere installati.

![img](../media/an9-1.png)

5. Aprire le impostazioni e fare clic su Privacy e sicurezza. Cambiare l'opzione di sicurezza in "App Store e sviluppatori approvati" e fare clic su "Apri comunque".

![img](../media/an9-2.png)

6. Fare clic su "Apri" per rientrare nel software bloccato.

![img](../media/an9-3.png)

7. Dopo le impostazioni, può funzionare normalmente.

![img](../media/an9-4.png)

8. L'interfaccia di avvio è come mostrato di seguito. Ora goditi il tuo viaggio nella programmazione!

![img](../media/an9-5.png)

---



### 1.2 Guida al software


(**Le seguenti dimostrazioni sono basate sul sistema Windows e sono solo un
riferimento per MacOS.**)


#### 1.2.1 Distribuzione delle funzioni della pagina principale 1


![img](../media/an10.png)


#### 1.2.2 Seleziona lingua


Fare clic su ![image2](../media/an11.png) per selezionare "English" o "简体中文" ![image3](../media/an12.png)


#### 1.2.3 Seleziona dispositivi


**Scegliere un dispositivo e una porta seriale**

-  Fare clic su ![image5](../media/an27.png) per scegliere un dispositivo.

-  Qui inseriamo **Kit** per trovare **Smart farm for ESP32** e aggiungerlo. Si noti che tutti i sensori sono inclusi in questo kit, quindi non è necessario importarli ulteriormente.

![img](../media/an28.png)

-  Dopo aver importato questo kit, vedrai la seguente interfaccia di selezione della porta. Fare clic su **Connect** sulla porta corretta.

![img](../media/an29.png)

-  Toccare **Go to Editor**.

![img](../media/an30.png)

-  Pagina principale:

![img](../media/an31.png)

**Disconnettere il dispositivo**

-  Se si desidera disconnettere il kit e la porta, fare clic su ![image6](../media/an32.png).

-  Quindi toccare **Disconnect** per scollegare la connessione corrente.

![img](../media/an33.png)

---



#### 1.2.4 Distribuzione delle funzioni della pagina principale 2


![img](../media/an34.png)


#### 1.2.5 Espandere un sensore/modulo


**NOTA: Questa parte può essere SALTA, poiché tutti i sensori richiesti sono integrati
nel kit senza bisogno di espansione. Se si desidera adottare un modulo escluso,
fare riferimento alle seguenti procedure.**

-  Fare clic su ![an42](../media/an35.png) per accedere alla libreria di estensione di sensori/moduli.

-  Scegliere un'estensione.

![img](../media/an36.png)

-  Ad esempio, se è richiesto un modulo buzzer, fare clic su buzzer passivo:
   
-  ![img](../media/an37.png)

-  Quando " **Not loaded** " diventa " **Loaded** ", questo modulo è stato importato con successo.

![img](../media/an38.png)

-  Fare clic su ![image7](../media/an39.png) per tornare all'editor. Ora scoprirai che un blocco Buzzer passivo appare in Code.

![img](../media/an41.png)

-  Se si desidera rimuovere il "Buzzer passivo", fare clic su ![image8](../media/an42.png) per accedere alla libreria e toccare.

![img](../media/an38.png)

-  Quando "Loaded" passa a "Not loaded", questo modulo è stato eliminato con successo.

![img](../media/an37.png)


#### 1.2.6 Importa file


-  Metodo 1

   -  Se il software non è in funzione, fare clic direttamente sul file SB3
      per aprirlo. Ad esempio, fare clic su ![image9](../media/an46.png) per aprirlo. Ricordarsi di selezionare un dispositivo.

![img](../media/an54.png)

-  Metodo 2

   -  Aprire KidsBlock. Fare clic su " **file** " per scegliere " **Load from your computer** ". ![image10](../media/an47.png)
      
-  Selezionare un file SB3 (come ![image11](../media/an46.png)).

![img](../media/an50.png)

   -  Importazione riuscita!

![img](../media/an54.png)


#### 1.2.7 Carica codice e imposta Baud Rate


**Carica codice**

-  Carica il file ![image12](../media/an47.png) su KidsBlock.

-  Collegare la scheda di sviluppo al computer (se non si riesce a vedere
   una porta, installare prima un driver) e selezionare la porta corretta e fare clic su ![image13](../media/an52.png).

![img](../media/an54.png)

-  Attendere il caricamento.

![img](../media/an53.png)

**Imposta Baud rate**

-  Se non c'è una casella di stampa, fare clic su una delle ![image14](../media/an56.png) per regolare
   la dimensione della casella.

   -  Casella di stampa piccola ![image15](../media/an58.png)
   -  Casella di stampa grande ![image16](../media/an59.png)
   -  Nessuna casella di stampa ![image17](../media/an60.png)

-  Fare clic su ![image18](../media/an57.png) per impostare la velocità di trasmissione corrispondente.

![img](../media/an55.png)

-  " **Hello KidsBlock** " inizia a essere stampato nella casella dopo l'impostazione.

![img](../media/an62.png)