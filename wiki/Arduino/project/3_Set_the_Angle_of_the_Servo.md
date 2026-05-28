## 3. Den Winkel des Servos einstellen

In der nächsten Lektion werden wir dieses Smart-Farm-Kit zusammenbauen. Bevor wir den Servo am Kit montieren, müssen wir **seinen Winkel auf 165° einstellen** (mit einem Puffer von 15° an jedem Ende), damit er wie erwartet funktioniert und mechanische Schäden vermieden werden.

> **⚠ WARNUNG — Vor dem Fortfahren lesen:**
>
> 1. **Stellen Sie den Servo NICHT auf 180° ein.** Der Türmechanismus benötigt nicht den vollen Bereich von 0°–180°. Wenn Sie ihn an das extreme Ende einstellen, drückt der Servo gegen den mechanischen Anschlag, was zu Überhitzung und dauerhafter Beschädigung des Servomotors führen kann.
> 2. **Halten Sie die Platine während der Installation mit Strom versorgt.** Wenn der Servo mit Strom versorgt wird und seinen Winkel hält, erzwingen Sie NICHT das Getriebe oder die Tür von Hand. Wenn die Platine nicht mit Strom versorgt wird, hat der Servo kein Haltemoment, und das manuelle Drehen des Getriebes verschiebt den kalibrierten Winkel, was nach dem Einschalten zu einer Fehlausrichtung führt.
> 3. **Verwenden Sie KEINE rohe Gewalt.** Wenn sich die Tür nicht reibungslos bewegt, halten Sie sofort an und überprüfen Sie die Montage. Gewaltanwendung führt zum Ausreißen der Servozahnräder.

![image-20250416152950497](../media/image-20250416152950497.png)

1. Verbinden Sie den Servo mit dem **Pin io26** der ESP32 PLUS Platine. Hinweis: Die braunen, roten und orangefarbenen Kabel des Servos sind jeweils mit GND(G), 5V(V) und **Pin io26** verbunden.

![image028-1](../media/image028-1.png)

2. Verbinden Sie die ESP32 PLUS Platine mit dem Computer.

![image-20250416153731709](../media/image-20250416153731709.png)

3. Stellen Sie sicher, dass Sie die Bibliothek **ESP32Servo.h** für die Arduino IDE installiert haben. Falls nicht, lesen Sie den vorherigen Abschnitt, um sie zu installieren.

![3bd9304d-73d9-4fc3-9e59-50c55f947960](../media/3bd9304d-73d9-4fc3-9e59-50c55f947960.png)

4. Öffnen Sie den Code **window_servo**, der in unserem Tutorial-Paket enthalten ist, mit der Arduino IDE.

> **Hinweis:** Der bereitgestellte `window_servo` Code stellt den Servo auf **165°** (nicht 180°) ein. Dies reserviert einen mechanischen Puffer von 15°, um Kollisionen am Endanschlag zu verhindern. Der Arbeitsbereich der Tür beträgt 15°–165°.

![image-20250416154133013](../media/image-20250416154133013.png)

5. Klicken Sie auf **Tools**, wählen Sie "**ESP32 Dev Module**" für den Board-Typ und wählen Sie **COM-XX** für den Port, wie im Geräte-Manager gezeigt.

![51454125](../media/51454125.png)

6. Klicken Sie auf ![image-20250416154532804](../media/image-20250416154532804.png), um hochzuladen. Nach Abschluss des Uploads bewegt sich der Servo auf **165°** und hält diese Position.

> **Wichtig:** Halten Sie die Platine mit Strom versorgt und den Servo auf 165° gehalten, während Sie mit dem Montageschritt fortfahren. Trennen Sie die Stromversorgung NICHT und bewegen Sie das Getriebe NICHT manuell, bis die Türverkleidung vollständig installiert ist.

![image-20250416155301751](../media/image-20250416155301751.png)
