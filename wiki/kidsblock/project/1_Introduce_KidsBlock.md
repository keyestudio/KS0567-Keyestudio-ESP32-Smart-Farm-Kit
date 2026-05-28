## 1. KidsBlock vorstellen



### 1.1 KidsBlock Installation



#### 1.1.1 KidsBlock auf Windows System installieren


1. Sie können KidsBlock herunterladen von:

   -  Link: http://xiazai.keyesrobot.cn/KidsBlock.exe

   -  Bereitgestellte Datei: ![img](../media/an1-1.png)

1. Nach dem Herunterladen klicken Sie auf „KidsBlock.exe“ ![image1](../media/an1.png)

1. Markieren Sie „ **Anyone who uses this computer(all users)** “ und klicken Sie dann auf „**Next** “.

![img](../media/an2.png)

4. Klicken Sie auf „ **Browse...** “, um einen Installationspfad auszuwählen (Hier wählen wir Laufwerk C; Sie können jeden beliebigen Ort wählen), und klicken Sie auf „ **Install** “. Die Installation läuft!

![img](../media/an3.png)

![img](../media/an4.png)

5. Nach Abschluss der Installation klicken Sie auf „ **Finish** “, um es zu öffnen.

![img](../media/an5.png)

6. Wenn eine Warnung angezeigt wird, klicken Sie einfach auf „ **Allow access** “, um die Hauptseite der Software aufzurufen.

![img](../media/an6.png)

---



#### 1.1.2 KidsBlock auf MacOS installieren


1. Bitte laden Sie zuerst das KidsBlock-Paket herunter: http://xiazai.keyesrobot.cn/KidsBlock.dmg

![img](../media/an7.png)

2. Klicken Sie auf KidsBlock und ziehen Sie „**KidsBlock Desktop**“ in „**Applications**“, wie unten gezeigt.

![img](../media/an8.png)

3. Nach der Installation wird das KidsBlock-Symbol im Bedienfeld angezeigt:

![img](../media/an9.png)

4. Klicken Sie auf das KidsBlock-Symbol, um die Software zu starten. Wenn dies fehlschlägt, ändern Sie bitte einige Computereinstellungen, um es erneut zu versuchen. Dies liegt daran, dass Mac-Systeme standardmäßig nur die Installation aus dem App Store autorisieren, sodass andere Installationen nicht zugelassen sind.

![img](../media/an9-1.png)

5. Öffnen Sie die Einstellungen und klicken Sie auf Datenschutz und Sicherheit. Ändern Sie die Sicherheitsoption auf „App Store und genehmigte Entwickler“ und klicken Sie auf „Trotzdem öffnen“.

![img](../media/an9-2.png)

6. Klicken Sie auf „Öffnen“, um die blockierte Software erneut zu starten.

![img](../media/an9-3.png)

7. Nach den Einstellungen kann es normal funktionieren.

![img](../media/an9-4.png)

8. Die Startoberfläche sieht wie folgt aus. Genießen Sie jetzt Ihre Programmierreise!

![img](../media/an9-5.png)

---



### 1.2 Software-Anleitung


(**Die folgenden Demonstrationen basieren auf dem Windows-System und dienen
nur als Referenz für MacOS.**)


#### 1.2.1 Verteilung der Hauptseitenfunktionen 1


![img](../media/an10.png)


#### 1.2.2 Sprache auswählen


Klicken Sie auf ![image2](../media/an11.png), um „English“ oder „简体中文" ![image3](../media/an12.png) auszuwählen.


#### 1.2.3 Geräte auswählen


**Wählen Sie ein Gerät und einen seriellen Port**

-  Klicken Sie auf ![image5](../media/an27.png), um ein Gerät auszuwählen.

-  Hier geben wir **Kit** ein, um **Smart farm for ESP32** zu finden und hinzuzufügen. Beachten Sie, dass alle Sensoren in diesem Kit enthalten sind, sodass Sie sie nicht zusätzlich importieren müssen.

![img](../media/an28.png)

-  Nach dem Import dieses Kits sehen Sie die folgende Oberfläche zur Portauswahl. Klicken Sie auf **Connect** am richtigen Port.

![img](../media/an29.png)

-  Tippen Sie auf **Go to Editor**.

![img](../media/an30.png)

-  Hauptseite:

![img](../media/an31.png)

**Gerät trennen**

-  Wenn Sie das Kit und den Port trennen möchten, klicken Sie bitte auf ![image6](../media/an32.png).

-  Tippen Sie dann auf **Disconnect**, um die aktuelle Verbindung zu trennen.

![img](../media/an33.png)

---



#### 1.2.4 Verteilung der Hauptseitenfunktionen 2


![img](../media/an34.png)


#### 1.2.5 Einen Sensor/Modul erweitern


**HINWEIS: Dieser Teil kann ÜBERSPRUNGEN werden, da alle benötigten Sensoren
im Kit integriert sind und nicht erweitert werden müssen. Wenn Sie ein
ausgeschlossenes Modul verwenden möchten, beachten Sie bitte die folgenden
Verfahren.**

-  Klicken Sie auf ![an42](../media/an35.png), um die Erweiterungsbibliothek für Sensoren/Module aufzurufen.

-  Wählen Sie eine Erweiterung.

![img](../media/an36.png)

-  Wenn beispielsweise ein Buzzer-Modul benötigt wird, klicken Sie auf passiven Buzzer:
   
-  ![img](../media/an37.png)

-  Wenn „ **Not loaded** “ zu „ **Loaded** “ wird, ist dieses Modul erfolgreich importiert.

![img](../media/an38.png)

-  Klicken Sie auf ![image7](../media/an39.png), um zum Editor zurückzukehren. Sie werden nun feststellen, dass ein passiver Buzzer-Block im Code erscheint.

![img](../media/an41.png)

-  Wenn Sie den „Passive buzzer“ entfernen möchten, klicken Sie einfach auf ![image8](../media/an42.png], um die Bibliothek aufzurufen und darauf zu tippen.

![img](../media/an38.png)

-  Wenn „Loaded“ zu „Not loaded“ wechselt, ist dieses Modul erfolgreich gelöscht.

![img](../media/an37.png)


#### 1.2.6 Datei importieren


-  Methode 1

   -  Wenn die Software nicht in Betrieb ist, klicken Sie direkt auf die SB3-Datei,
      um sie zu öffnen. Klicken Sie zum Beispiel auf ![image9](../media/an46.png), um sie zu öffnen. Denken Sie daran, ein Gerät auszuwählen.

![img](../media/an54.png)

-  Methode 2

   -  Öffnen Sie Kidsblock. Klicken Sie auf „ **file** “, um „ **Load from your computer** “ auszuwählen. ![image10](../media/an47.png)
      
-  Wählen Sie eine SB3-Datei (wie ![image11](../media/an46.png)).

![img](../media/an50.png)

   -  Erfolgreich importiert!

![img](../media/an54.png)


#### 1.2.7 Code hochladen & Baudrate einstellen


**Code hochladen**

-  Laden Sie die Datei ![image12](../media/an47.png) in Kidsblock hoch.

-  Verbinden Sie das Entwicklungsboard mit Ihrem Computer (Wenn Sie keinen
   Port sehen können, installieren Sie zuerst einen Treiber) und wählen Sie den
   richtigen Port aus und klicken Sie auf ![image13](../media/an52.png).

![img](../media/an54.png)

-  Warten Sie auf den Upload.

![img](../media/an53.png)

**Baudrate einstellen**

-  Wenn keine Druckbox vorhanden ist, klicken Sie auf eine der ![image14](../media/an56.png), um
   die Größe der Box anzupassen.

   -  Kleine Druckbox ![image15](../media/an58.png)
   -  Große Druckbox ![image16](../media/an59.png)
   -  Keine Druckbox ![image17](../media/an60.png)

-  Klicken Sie auf ![image18](../media/an57.png), um die entsprechende Baudrate einzustellen.

![img](../media/an55.png)

-  „ **Hello KidsBlock** “ wird nach der Einstellung in der Box gedruckt.

![img](../media/an62.png)