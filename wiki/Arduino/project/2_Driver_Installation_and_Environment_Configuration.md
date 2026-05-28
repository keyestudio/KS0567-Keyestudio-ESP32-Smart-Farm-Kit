## 2. Configureer de Arduino

### 2.1 Installeer de driver voor het KEYESTUDIO ESP32 PLUS-bord

Het KEYESTUDIO ESP32 PLUS-bord is een universeel WIFI plus Bluetooth ontwikkelingsbord gebaseerd op ESP32, geïntegreerd met de ESP32-WOROOM-32 module en compatibel met Arduino.

Het heeft een hallsensor, high-speed SDIO/SPI, UART, I2S en I2C. Bovendien is het uitgerust met het freeRTOS besturingssysteem, wat zeer geschikt is voor het Internet of Things en smart home-toepassingen.

**Specificaties**

Spanning: 3.3V-5V

Stroomuitgang: 1.2A (maximaal)

Maximaal vermogen: 10W

Werktemperatuur: -10℃~50℃

Afmetingen: 69 * 54 * 14.5mm

Gewicht: 25.5g

Milieubeschermingskenmerken: ROHS

![j255](../media/j255.png)

**Installeer de driver**

Verbind het ESP32-bord met de computer en wacht tot Windows begint met het installatieproces van de driver. Vaak wordt de CH340-driver automatisch door uw systeem geïnstalleerd bij gebruik van Arduino. U kunt de Apparaatbeheerder of de poort van de Arduino IDE controleren om te zien of de driver succesvol is geïnstalleerd.

![a10](../media/a10.png)

Als de CH340-driver niet automatisch wordt geïnstalleerd, moeten we deze handmatig installeren.

Klik om de [Windows CH340 driver](/Arduino/Windows.zip) te downloaden

![a51](../media/a51.png)

1. Open de **Apparaatbeheerder** door met de rechtermuisknop op "**Deze pc**" te klikken en **Eigenschappen** te selecteren. Kijk onder **Andere apparaten**. U zou een open poort moeten zien met de naam **USB Serial**.

![a11](../media/a11.png)

2. Klik met de rechtermuisknop op "**USB Serial**" en kies de optie "**Stuurprogramma bijwerken**".

![a13](../media/a13.png)

3. Kies de optie "**Op mijn computer naar stuurprogramma's zoeken**".

![a14](../media/a14.png)

4. Selecteer het driverbestand met de naam "**usb_ch341_3.1.2009.06**", te vinden in de Drivermap van het tutorialpakket.

![a15](../media/a15.png)

5. Driver succesvol geïnstalleerd.

![a16](../media/a16.png)

6. Apparaatbeheerder wordt automatisch vernieuwd. Kijk onder Poorten (COM & LPT). U zou een open poort moeten zien met de naam "**USB-SERIAL CH340(COM3)**".

![a10](../media/a10.png)

7. Klik op **Extra > Poort** in de Arduino IDE, u kunt dezelfde COM-poort vinden als de CH340-driver in de apparaatbeheerder.

![a38](../media/a38.png)

### 2.2 Bibliotheken toevoegen aan Arduino IDE

**Waarom bibliotheken gebruiken?**

Bibliotheken zijn ongelooflijk nuttig bij het maken van elk type project. Ze maken onze ontwikkelervaring veel soepeler, en er is bijna een oneindige hoeveelheid beschikbaar. Ze worden gebruikt om te communiceren met veel verschillende sensoren, RTC's, Wi-Fi-modules, RGB-matrices en natuurlijk met andere componenten op uw bord.

**Een bibliotheek opnemen in de sketch**

Om een bibliotheek te gebruiken, moet u deze eerst bovenaan de sketch opnemen. Als u een coderegel in het formaat `#include "bibliotheeknaam"` aan het begin van de code vindt bij het gebruik van onze code, betekent dit dat u dit bibliotheekbestand eerst aan de Arduino IDE moet toevoegen voordat u deze code succesvol kunt uploaden.

![image-20250416150700630](../media/image-20250416150700630.png)

Om de smart farm kit te laten werken, moeten we **deze bibliotheekbestanden toevoegen aan de Arduino IDE.** U kunt ze vinden in het tutorialpakket.

![image-20250416150847190](../media/image-20250416150847190.png)

**Een .zip-bibliotheek importeren**

Ga in de menubalk naar **Schets > Bibliotheek toevoegen > .ZIP-bibliotheek toevoegen...** U wordt gevraagd de bibliotheek te selecteren die u wilt toevoegen.

![4564654654](../media/4564654654.png)

Navigeer naar de locatie van het .zip-bestand en open het.

![image-20250416151456661](../media/image-20250416151456661.png)

Mogelijk moet u de Arduino IDE opnieuw opstarten om de bibliotheek beschikbaar te maken. Na het succesvol installeren van het bibliotheekbestand, ziet u ze in de lijst.

![image-20250416151805635](../media/image-20250416151805635.png)

### 2.3 Configureer de ontwikkelomgeving voor ESP32

Voordat u de Arduino IDE gebruikt om de smart farm te programmeren, moet u de Arduino IDE configureren, het juiste bordtype (**ESP32 Dev Module**) selecteren voor het ESP32 Plus-bord en de **COM-poort** selecteren die is toegewezen in de apparaatbeheerder.

Er is geen optie voor ESP32 in de standaard bordenlijst van Arduino, dus we moeten deze **handmatig installeren**.

![a30](../media/a30.png)

Klik op **Bestand > Voorkeuren**. Kopieer de link van het ESP32-bord (https://espressif.github.io/arduino-esp32/package_esp32_index.json) naar de **Aanvullende boards manager URLs** en klik op **OK**.

![a31](../media/a31.png)

Klik op het pictogram van "**Board Manager**" in de linkerbovenhoek.

![a32](../media/a32.png)

Zoek naar **ESP32** in het zoekvak en installeer de nieuwste versie. U kunt het proces in de rechterbenedenhoek controleren. **Houd tijdens de installatie het netwerk stabiel. Als de installatie mislukt, herhaalt u de bovenstaande stappen.**

Opmerking: We gebruiken ESP32 versie 3.1.3 in deze tutorial. Houd deze consistent om incompatibiliteit van de code te voorkomen.

![a33](../media/a33.png)

Installatie is voltooid:

![a34](../media/a34-1744788169084-23.png)

Klik op **Extra > Bord > esp32** en kies de **EPS32 Dev Module**.

![a37](../media/a37.png)

Kies de COM-poort. U kunt uw poortnummer controleren in Apparaatbeheer. Als er veel COM-poorten zijn, koppel dan de kabel van het bord los om te zien welke poort verdwijnt. Dat is dan de poort die u kunt gebruiken. Als er geen COM-poort is, controleer dan of de driver is geïnstalleerd.

![image](../media/a10-1744788429738-26.png)

Hier is onze COM-poort COM3. Klik op "Extra" → "Poort" → "COM3".

![image](../media/a38-1744788429738-27.png)