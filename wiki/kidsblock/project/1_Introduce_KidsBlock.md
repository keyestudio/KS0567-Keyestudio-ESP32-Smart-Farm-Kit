## 1. Introductie KidsBlock



### 1.1 KidsBlock Installatie



#### 1.1.1 Kidsblock installeren op Windows Systeem


1. U kunt KidsBlock downloaden via:

   - Link: http://xiazai.keyesrobot.cn/KidsBlock.exe

   - Meegeleverd bestand: ![img](../media/an1-1.png)

1. Na het downloaden klikt u op "KidsBlock.exe" ![image1](../media/an1.png)

1. Vink " **Anyone who uses this computer(all users)** " aan en klik vervolgens op "**Next** ".

![img](../media/an2.png)

4. Klik op " **Browse...** " om een installatiepad te kiezen (hier kiezen we schijf C; u kunt elke gewenste locatie selecteren) en klik op " **Install** ". Het wordt nu geïnstalleerd!

![img](../media/an3.png)

![img](../media/an4.png)

5. Nadat de installatie is voltooid, klikt u op " **Finish** " om het te openen.

![img](../media/an5.png)

6. Als er een waarschuwing verschijnt, klikt u gewoon op " **Allow access** " om de hoofdpagina van de software te openen.

![img](../media/an6.png)

---



#### 1.1.2 Kidsblock installeren op MacOS


1. Download eerst het Kidsblock-pakket: http://xiazai.keyesrobot.cn/KidsBlock.dmg

![img](../media/an7.png)

2. Klik op KidsBlock en sleep de "**KidsBlock Desktop**" naar "**Applications**", zoals hieronder weergegeven.

![img](../media/an8.png)

3. Na de installatie verschijnt het KidsBlock-pictogram in het bedieningspaneel:

![img](../media/an9.png)

4. Klik op het KidsBlock-pictogram om de software te openen. Als dit mislukt, wijzig dan enkele computerinstellingen om het opnieuw te openen. Dit komt omdat Mac-systemen standaard alleen de installatie in de App Store autoriseren, dus andere installaties zijn niet toegestaan.

![img](../media/an9-1.png)

5. Open de instellingen en klik op Privacy en Beveiliging. Wijzig de beveiligingsoptie naar "App Store en Goedgekeurde Ontwikkelaars" en klik op "Toch openen".

![img](../media/an9-2.png)

6. Klik op "Openen" om de geblokkeerde software opnieuw te openen.

![img](../media/an9-3.png)

7. Na de instellingen kan het normaal werken.

![img](../media/an9-4.png)

8. De opstartinterface is zoals hieronder. Geniet nu van uw programmeerreis!

![img](../media/an9-5.png)

---



### 1.2 Softwarehandleiding


(**De volgende demonstraties zijn gebaseerd op Windows Systeem, en is slechts een
referentie voor MacOS.**)


#### 1.2.1 Hoofdpagina Functieverdeling 1


![img](../media/an10.png)


#### 1.2.2 Taal selecteren


Klik op ![image2](../media/an11.png) om "English" of "简体中文" te selecteren ![image3](../media/an12.png)


#### 1.2.3 Apparaten selecteren


**Kies een apparaat en een seriële poort**

- Klik op ![image5](../media/an27.png) om een apparaat te kiezen.

- Hier voeren we **Kit** in om **Smart farm for ESP32** te vinden en toe te voegen. Merk op dat alle sensoren in deze kit zijn inbegrepen, dus u hoeft ze niet extra te importeren.

![img](../media/an28.png)

- Na het importeren van deze kit ziet u de volgende interface voor poortselectie. Klik op **Connect** bij de juiste poort.

![img](../media/an29.png)

- Tik op **Go to Editor**.

![img](../media/an30.png)

- Hoofdpagina:

![img](../media/an31.png)

**Apparaat loskoppelen**

- Als u de kit en poort wilt loskoppelen, klikt u op ![image6](../media/an32.png).

- Tik vervolgens op **Disconnect** om de huidige verbinding te ontbinden.

![img](../media/an33.png)

---



#### 1.2.4 Hoofdpagina Functieverdeling 2


![img](../media/an34.png)


#### 1.2.5 Een sensor/module uitbreiden


**OPMERKING: Dit deel kan worden OVERGESLAGEN, aangezien alle benodigde sensoren zijn geïntegreerd
in de kit en niet hoeven te worden uitgebreid. Als u een uitgesloten
module wilt gebruiken, raadpleeg dan de volgende procedures.**

- Klik op ![an42](../media/an35.png) om de uitbreidingsbibliotheek voor sensoren/modules te openen.

- Kies een uitbreiding.

![img](../media/an36.png)

- Als bijvoorbeeld een buzzer-module nodig is, klik dan op passieve buzzer:
   
- ![img](../media/an37.png)

- Wanneer " **Not loaded** " verandert in " **Loaded** ", is deze module succesvol geïmporteerd.

![img](../media/an38.png)

- Klik op ![image7](../media/an39.png) om terug te gaan naar de editor. Nu zult u zien dat een passieve buzzer-blok verschijnt in Code.

![img](../media/an41.png)

- Als u de "Passieve buzzer" wilt verwijderen, klikt u gewoon op ![image8](../media/an42.png) om de bibliotheek te openen en tikt u erop.

![img](../media/an38.png)

- Wanneer "Loaded" verandert in "Not loaded", is deze module succesvol verwijderd.

![img](../media/an37.png)


#### 1.2.6 Bestand importeren


- Methode 1

   - Als de software niet in gebruik is, klik dan direct op het SB3-bestand
     om het te openen. Klik bijvoorbeeld op ![image9](../media/an46.png) om het te openen. Vergeet niet een apparaat te selecteren.

![img](../media/an54.png)

- Methode 2

   - Open Kidsblock. Klik op " **file** " om " **Load from your computer** " te kiezen. ![image10](../media/an47.png)
      
- Selecteer een SB3-bestand (zoals ![image11](../media/an46.png)).

![img](../media/an50.png)

   - Succesvol geïmporteerd!

![img](../media/an54.png)


#### 1.2.7 Code uploaden & Baudrate instellen


**Code uploaden**

- Upload bestand ![image12](../media/an47.png) naar Kidsblock.

- Verbind het ontwikkelbord met uw computer (Als u geen poort ziet, installeer dan eerst een driver), en selecteer de juiste poort en klik op ![image13](../media/an52.png).

![img](../media/an54.png)

- Wacht op het uploaden.

![img](../media/an53.png)

**Baudrate instellen**

- Als er geen afdrukvenster is, klik dan op een van ![image14](../media/an56.png) om
  de grootte van het venster aan te passen.

   - Klein afdrukvenster ![image15](../media/an58.png)
   - Groot afdrukvenster ![image16](../media/an59.png)
   - Geen afdrukvenster ![image17](../media/an60.png)

- Klik op ![image18](../media/an57.png) om de bijbehorende baudrate in te stellen.

![img](../media/an55.png)

- " **Hello KidsBlock** " begint te worden afgedrukt in het venster na instelling.

![img](../media/an62.png)