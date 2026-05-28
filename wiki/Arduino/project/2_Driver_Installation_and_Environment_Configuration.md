## 2. Configurar el Arduino


### 2.1 Instalar el controlador para la placa KEYESTUDIO ESP32 PLUS


La placa KEYESTUDIO ESP32 PLUS es una placa de desarrollo universal WIFI más Bluetooth basada en ESP32, integrada con el módulo ESP32-WOROOM-32 y compatible con Arduino.

Tiene un sensor Hall, SDIO/SPI de alta velocidad, UART, I2S, así como I2C. Además, está equipada con el sistema operativo freeRTOS, que es bastante adecuado para el Internet de las cosas y el hogar inteligente.

**Especificaciones**

Voltaje: 3.3V-5V

Corriente de salida: 1.2A (máximo)

Potencia máxima de salida: 10W

Temperatura de trabajo: -10℃~50℃

Dimensiones: 69 * 54 * 14.5mm

Peso: 25.5g

Atributos de protección ambiental: ROHS

![j255](../media/j255.png)

**Instalar controlador**

Conecte la placa ESP32 al ordenador y espere a que Windows inicie el proceso de instalación del controlador. A menudo, el controlador CH340 se instalará automáticamente en su sistema al usar Arduino. Puede verificar el Administrador de dispositivos o el puerto del IDE de Arduino para ver si el controlador se instaló correctamente.

![a10](../media/a10.png)

Si el controlador CH340 no se instala automáticamente, debemos instalarlo manualmente.

Haga clic para descargar [controlador CH340 para Windows](/Arduino/Windows.zip)

![a51](../media/a51.png)

1. Abra el **Administrador de dispositivos** haciendo clic derecho en "**Mi PC**" y seleccionando **Propiedades**. Busque en **Otros dispositivos**. Debería ver un puerto abierto llamado **USB Serial**.

![a11](../media/a11.png)

2. Haga clic derecho en "**USB Serial**" y elija la opción "**Actualizar controlador**".

![a13](../media/a13.png)

3. Elija la opción "**Buscar software de controlador en mi equipo**".

![a14](../media/a14.png)

4. Seleccione el archivo del controlador llamado "**usb_ch341_3.1.2009.06**", ubicado en la carpeta Driver del paquete del tutorial.

![a15](../media/a15.png)

5. Controlador instalado correctamente.

![a16](../media/a16.png)

6. El Administrador de dispositivos se actualizará automáticamente. Busque en Puertos (COM y LPT). Debería ver un puerto abierto llamado “**USB-SERIAL CH340(COM3)**”.

![a10](../media/a10.png)

7. Haga clic en **Herramientas>Puerto** en el IDE de Arduino, puede encontrar el mismo puerto COM que el controlador CH340 en el administrador de dispositivos.

![a38](../media/a38.png)


### 2.2 Añadir librerías al IDE de Arduino


**¿Por qué usar librerías?**

Las librerías son increíblemente útiles al crear cualquier tipo de proyecto. Hacen que nuestra experiencia de desarrollo sea mucho más fluida, y hay una cantidad casi infinita de ellas. Se utilizan para interactuar con muchos sensores diferentes, RTC, módulos Wi-Fi, matrices RGB y, por supuesto, con otros componentes de su placa.

**Incluir una librería en el sketch**

Para usar una librería, primero debe incluirla en la parte superior del sketch. Si encuentra una línea de código en el formato `#include "nombre de la librería"` al principio del código cuando usa nuestro código, significa que primero debe agregar este archivo de librería al IDE de Arduino antes de poder cargar este código con éxito.

![image-20250416150700630](../media/image-20250416150700630.png)

Para que el kit de granja inteligente funcione, necesitaremos **agregar estos archivos de librería al IDE de Arduino.** Puede encontrarlos en el paquete del tutorial.

![image-20250416150847190](../media/image-20250416150847190.png)

**Importar una librería .zip**

En la barra de menú, vaya a **Sketch > Incluir librería > Añadir librería .ZIP...** Se le pedirá que seleccione la librería que desea agregar.

![4564654654](../media/4564654654.png)

Navegue hasta la ubicación del archivo .zip y ábralo.

![image-20250416151456661](../media/image-20250416151456661.png)

Es posible que deba reiniciar el IDE de Arduino para que la librería esté disponible. Después de instalar correctamente el archivo de la librería, los verá en la lista.

![image-20250416151805635](../media/image-20250416151805635.png)


### 2.3 Configurar el entorno de desarrollo para ESP32


Antes de usar el IDE de Arduino para programar la granja inteligente, debe configurar el IDE de Arduino, seleccionar el tipo de placa correcto (**ESP32 Dev Module**) para la placa ESP32 Plus y seleccionar el **puerto COM** que se asigna en el administrador de dispositivos.

No hay una opción para ESP32 en la lista de placas predeterminada de Arduino, por lo que debemos **instalarla manualmente**.

![a30](../media/a30.png)

Haga clic en **Archivo > Preferencias**. Copie el enlace de la placa ESP32 (https://espressif.github.io/arduino-esp32/package_esp32_index.json) en las **URLs adicionales del gestor de tarjetas** y haga clic en **OK**.

![a31](../media/a31.png)

Haga clic en el icono de "**Gestor de tarjetas**" en la esquina superior izquierda.

![a32](../media/a32.png)

Busque **ESP32** en el cuadro de búsqueda e instale la última versión. Puede verificar su proceso en la esquina inferior derecha. **Durante la instalación, mantenga la red estable. Si la instalación falla, repita los pasos anteriores.**

Nota: En este tutorial utilizamos la versión 3.1.3 de ESP32. Manténgala consistente para evitar incompatibilidades de código.

![a33](../media/a33.png)

La instalación ha finalizado:

![a34](../media/a34-1744788169084-23.png)

Haga clic en **Herramientas > Placa > esp32** y elija el **Módulo de desarrollo EPS32**.

![a37](../media/a37.png)

Elija el puerto COM. Puede verificar su número de puerto en el Administrador de dispositivos. Si hay muchos puertos COM, desconecte el cable de la placa para ver qué puerto desaparece. Ese será el puerto listo para usar. Si no hay puerto COM, verifique si el controlador está instalado.

![image](../media/a10-1744788429738-26.png)

Aquí, nuestro puerto COM es COM3. Haga clic en “Herramientas” → “Puerto” → “COM3”.

![image](../media/a38-1744788429738-27.png)