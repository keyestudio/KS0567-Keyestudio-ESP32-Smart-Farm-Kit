## 3. Stel de Hoek van de Servo in

In de volgende les zullen we deze smart farm kit assembleren. Voordat we de servo aan de kit monteren, moeten we **de hoek instellen op 165°** (met een buffer van 15° aan elk uiteinde gereserveerd) zodat deze naar verwachting werkt en mechanische schade wordt voorkomen.

> **⚠ WAARSCHUWING — Lezen voordat u verdergaat:**
>
> 1. **Stel de servo NIET in op 180°.** Het deurmechanisme heeft niet het volledige bereik van 0°–180° nodig. Het instellen op het uiterste einde zal ervoor zorgen dat de servo tegen de mechanische stop drukt, wat kan leiden tot oververhitting en permanente schade aan de servomotor.
> 2. **Houd de printplaat van stroom voorzien tijdens de installatie.** Wanneer de servo van stroom is voorzien en zijn hoek vasthoudt, forceer de tandwielen of de deur dan NIET met de hand. Als de printplaat niet van stroom is voorzien, heeft de servo geen houdkoppel, en handmatig draaien aan het tandwiel zal de gekalibreerde hoek verschuiven, wat na het inschakelen tot verkeerde uitlijning leidt.
> 3. **Gebruik GEEN brute kracht.** Als de deur niet soepel beweegt, stop dan onmiddellijk en controleer de montage. Forceren zal de servotandwielen strippen.

![image-20250416152950497](../media/image-20250416152950497.png)

1. Sluit de servo aan op de **pin io26** van de ESP32 PLUS-printplaat. Opmerking: De bruine, rode en oranje draad van de servo zijn respectievelijk bevestigd aan GND(G), 5V(V) en **Pin io26.**

![image028-1](../media/image028-1.png)

2. Sluit de ESP32 PLUS-printplaat aan op de computer.

![image-20250416153731709](../media/image-20250416153731709.png)

3. Zorg ervoor dat u de **ESP32Servo.h**-bibliotheek voor de Arduino IDE hebt geïnstalleerd. Zo niet, raadpleeg dan de vorige sectie om deze te installeren.

![3bd9304d-73d9-4fc3-9e59-50c55f947960](../media/3bd9304d-73d9-4fc3-9e59-50c55f947960.png)

4. Open de **window_servo**-code die in ons tutorialpakket is geleverd met Arduino IDE.

> **Opmerking:** De meegeleverde `window_servo`-code stelt de servo in op **165°** (niet 180°). Dit reserveert een mechanische buffer van 15° om botsing bij de eindstop te voorkomen. Het werkbereik van de deur is 15°–165°.

![image-20250416154133013](../media/image-20250416154133013.png)

5. Klik op **Tools**, selecteer "**ESP32 Dev Module**" voor het type bord, en selecteer **COM-XX** voor Poort zoals weergegeven in Apparaatbeheer.

![51454125](../media/51454125.png)

6. Klik op ![image-20250416154532804](../media/image-20250416154532804.png) om te uploaden. Nadat het uploaden is voltooid, zal de servo naar **165°** bewegen en die positie vasthouden.

> **Belangrijk:** Houd de printplaat van stroom voorzien en de servo op 165° terwijl u doorgaat met de montagestap. Koppel de stroom **niet** los en beweeg de tandwielen niet handmatig totdat het deurpaneel volledig is geïnstalleerd.

![image-20250416155301751](../media/image-20250416155301751.png)
