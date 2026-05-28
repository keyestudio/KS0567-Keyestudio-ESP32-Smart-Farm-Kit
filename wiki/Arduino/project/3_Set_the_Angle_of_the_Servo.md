## 3. Ajustar el ángulo del servo

En la próxima lección, ensamblaremos este kit de granja inteligente. Antes de ensamblar el servo al kit, necesitamos **establecer su ángulo a 165°** (con un margen de 15° reservado en cada extremo) para que funcione como se espera y evitar daños mecánicos.

> **⚠ ADVERTENCIA — Leer antes de continuar:**
>
> 1. **NO ajuste el servo a 180°.** El mecanismo de la puerta no requiere el rango completo de 0°–180°. Ajustarlo al extremo hará que el servo presione contra el tope mecánico, lo que puede sobrecalentar y dañar permanentemente el motor del servo.
> 2. **Mantenga la placa encendida durante la instalación.** Cuando el servo esté encendido y manteniendo su ángulo, NO fuerce el engranaje o la puerta con la mano. Si la placa no está encendida, el servo no tiene par de retención, y girar manualmente el engranaje cambiará el ángulo calibrado, causando desalineación después de encenderlo.
> 3. **NO use fuerza bruta.** Si la puerta no se mueve suavemente, deténgase inmediatamente y verifique el ensamblaje. Forzarla desgastará los engranajes del servo.

![image-20250416152950497](../media/image-20250416152950497.png)

1. Conecte el servo al **pin io26** de la placa ESP32 PLUS. Nota: Los cables marrón, rojo y naranja del servo se conectan respectivamente a GND(G), 5V(V) y al **Pin io26.**

![image028-1](../media/image028-1.png)

2. Conecte la placa ESP32 PLUS a la computadora.

![image-20250416153731709](../media/image-20250416153731709.png)

3. Asegúrese de haber instalado la biblioteca **ESP32Servo.h** para el Arduino IDE. Si no, consulte la sección anterior para instalarla.

![3bd9304d-73d9-4fc3-9e59-50c55f947960](../media/3bd9304d-73d9-4fc3-9e59-50c55f947960.png)

4. Abra el código **window_servo** proporcionado en nuestro paquete de tutoriales con Arduino IDE.

> **Nota:** El código `window_servo` proporcionado ajusta el servo a **165°** (no 180°). Esto reserva un margen mecánico de 15° para evitar colisiones en el tope final. El rango de trabajo de la puerta es de 15°–165°.

![image-20250416154133013](../media/image-20250416154133013.png)

5. Haga clic en **Tools**, seleccione "**ESP32 Dev Module**" para el tipo de placa, y seleccione **COM-XX** para el puerto como se muestra en el Administrador de dispositivos.

![51454125](../media/51454125.png)

6. Haga clic en ![image-20250416154532804](../media/image-20250416154532804.png) para subir. Después de que la subida se complete, el servo se moverá a **165°** y mantendrá esa posición.

> **Importante:** Mantenga la placa encendida y el servo en 165° mientras procede al paso de ensamblaje. **No** desconecte la alimentación ni mueva manualmente el engranaje hasta que el panel de la puerta esté completamente instalado.

![image-20250416155301751](../media/image-20250416155301751.png)
