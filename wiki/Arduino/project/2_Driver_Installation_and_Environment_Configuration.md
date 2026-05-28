## 2. Konfigurieren des Arduino


### 2.1 Treiber für KEYESTUDIO ESP32 PLUS Board installieren


Das KEYESTUDIO ESP32 PLUS Board ist ein universelles WIFI- und Bluetooth-Entwicklungsboard, das auf dem ESP32 basiert, mit dem ESP32-WOROOM-32-Modul integriert und mit Arduino kompatibel ist.

Es verfügt über einen Hallsensor, Hochgeschwindigkeits-SDIO/SPI, UART, I2S sowie I2C. Darüber hinaus ist es mit dem freeRTOS-Betriebssystem ausgestattet, das sich hervorragend für das Internet der Dinge und Smart Home eignet.

**Spezifikationen**

Spannung: 3,3V-5V

Stromausgang: 1,2A (maximal)

Maximale Ausgangsleistung: 10W

Arbeitstemperatur: -10℃~50℃

Abmessungen: 69 * 54 * 14,5mm

Gewicht: 25,5g

Umweltschutzmerkmale: ROHS

![j255](../media/j255.png)

**Treiber installieren**

Verbinden Sie das ESP32-Board mit dem Computer und warten Sie, bis Windows den Treiberinstallationsprozess startet. Oft wird der CH340-Treiber automatisch von Ihrem System installiert, wenn Sie Arduino verwenden. Sie können den Geräte-Manager oder den Port der Arduino IDE überprüfen, um festzustellen, ob der Treiber erfolgreich installiert wurde.

![a10](../media/a10.png)

Wenn der CH340-Treiber nicht automatisch installiert wird, müssen wir ihn manuell installieren.

Klicken Sie hier, um den [Windows CH340 Treiber](/Arduino/Windows.zip) herunterzuladen.

![a51](../media/a51.png)

1. Öffnen Sie den **Geräte-Manager**, indem Sie mit der rechten Maustaste auf „**Mein PC**“ klicken und **Eigenschaften** auswählen. Suchen Sie unter **Andere Geräte**. Sie sollten einen offenen Port namens **USB Serial** sehen.

![a11](../media/a11.png)

2. Klicken Sie mit der rechten Maustaste auf "**USB Serial**" und wählen Sie die Option "**Treiber aktualisieren**".

![a13](../media/a13.png)

3. Wählen Sie die Option "**Auf meinem Computer nach Treibersoftware suchen**".

![a14](../media/a14.png)

4. Wählen Sie die Treiberdatei mit dem Namen "**usb_ch341_3.1.2009.06**" aus, die sich im Treiberordner des Tutorialpakets befindet.

![a15](../media/a15.png)

5. Treiber erfolgreich installiert.

![a16](../media/a16.png)

6. Der Geräte-Manager wird automatisch aktualisiert. Suchen Sie unter Anschlüsse (COM & LPT). Sie sollten einen offenen Port namens „**USB-SERIAL CH340(COM3)**“ sehen.

![a10](../media/a10.png)

7. Klicken Sie in der Arduino IDE auf **Tools>Port**. Sie finden denselben COM-Port wie den CH340-Treiber im Geräte-Manager.

![a38](../media/a38.png)


### 2.2 Bibliotheken zur Arduino IDE hinzufügen


**Warum Bibliotheken verwenden?**

Bibliotheken sind unglaublich nützlich, wenn man ein Projekt jeglicher Art erstellt. Sie machen unsere Entwicklung

viel reibungsloser, und es gibt fast unendlich viele davon. Sie werden verwendet, um

mit vielen verschiedenen Sensoren, RTCs, Wi-Fi-Modulen, RGB-Matrizen und natürlich mit anderen

Komponenten auf Ihrem Board zu kommunizieren.

**Eine Bibliothek in den Sketch einbinden**

Um eine Bibliothek zu verwenden, müssen Sie diese zuerst am Anfang des Sketches einbinden. Wenn Sie beim Verwenden unseres Codes eine Zeile im Format `#include "Bibliotheksname"` am Anfang des Codes finden, bedeutet dies, dass Sie diese Bibliotheksdatei zuerst zur Arduino IDE hinzufügen müssen, bevor Sie diesen Code erfolgreich hochladen können.

![image-20250416150700630](../media/image-20250416150700630.png)

Damit das Smart Farm Kit funktioniert, müssen wir **diese Bibliotheksdateien zur Arduino IDE hinzufügen.** Sie finden sie im Tutorial-Paket.

![image-20250416150847190](../media/image-20250416150847190.png)

**Eine .zip-Bibliothek importieren**

Gehen Sie in der Menüleiste zu **Sketch > Bibliothek einbinden > .ZIP-Bibliothek hinzufügen...** Sie werden aufgefordert, die Bibliothek auszuwählen, die Sie hinzufügen möchten.

![4564654654](../media/4564654654.png)

Navigieren Sie zum Speicherort der .zip-Datei und öffnen Sie sie.

![image-20250416151456661](../media/image-20250416151456661.png)

Möglicherweise müssen Sie die Arduino IDE neu starten, damit die Bibliothek verfügbar ist. Nach erfolgreicher Installation der Bibliotheksdatei werden diese in der Liste angezeigt.

![image-20250416151805635](../media/image-20250416151805635.png)


### 2.3 Entwicklungsumgebung für ESP32 konfigurieren


Bevor Sie die Arduino IDE zum Programmieren der Smart Farm verwenden, müssen Sie die Arduino IDE konfigurieren, den richtigen Board-Typ (**ESP32 Dev Module**) für das ESP32 Plus Board auswählen und den im Geräte-Manager zugewiesenen **COM-Port** auswählen.

In der Standard-Boardliste von Arduino gibt es keine Option für ESP32, daher müssen wir sie **manuell installieren**.

![a30](../media/a30.png)

Klicken Sie auf **Datei > Voreinstellungen**. Kopieren Sie den Link des ESP32-Boards (https://espressif.github.io/arduino-esp32/package_esp32_index.json) in die **Zusätzliche Boardverwalter-URLs** und klicken Sie auf **OK**.

![a31](../media/a31.png)

Klicken Sie auf das Symbol des "**Board-Managers**" in der oberen linken Ecke.

![a32](../media/a32.png)

Suchen Sie im Suchfeld nach **ESP32** und installieren Sie die neueste Version. Sie können den Fortschritt in der unteren rechten Ecke überprüfen. **Halten Sie während der Installation das Netzwerk stabil. Wenn die Installation fehlschlägt, wiederholen Sie die obigen Schritte.**

Hinweis: Wir verwenden in diesem Tutorial ESP32 Version 3.1.3. Bitte halten Sie diese Version konsistent, um Code-Inkompatibilitäten zu vermeiden.

![a33](../media/a33.png)

Installation ist abgeschlossen:

![a34](../media/a34-1744788169084-23.png)

Klicken Sie auf **Tools > Board > esp32** und wählen Sie das **EPS32 Dev Module**.

![a37](../media/a37.png)

Wählen Sie den COM-Port. Sie können Ihre Portnummer im Geräte-Manager überprüfen. Wenn es viele COM-Ports gibt, ziehen Sie das Kabel des Boards ab, um zu sehen, welcher Port verschwindet. Dieser ist dann der verwendbare Port. Wenn kein COM-Port vorhanden ist, überprüfen Sie bitte, ob der Treiber installiert ist.

![image](../media/a10-1744788429738-26.png)

Hier ist unser COM-Port COM3. Klicken Sie auf „Tools“ → „Port“ → „COM3“.

![image](../media/a38-1744788429738-27.png)