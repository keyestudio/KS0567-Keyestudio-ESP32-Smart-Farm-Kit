## 3. Montaje

Durante el montaje, se requiere grabar algunos códigos, así que por favor instale el software primero.

Todo el montaje generalmente se puede dividir en dos partes: montaje de
piezas y cableado.

---

### Paso 1 Instale la placa ESP32 y el módulo de relé

#### 1.1 Componentes requeridos

![img](../media/image001.png)

---

#### 1.2

![img](../media/image002.png)

---

#### 1.3

![img](../media/image003.png)

---

#### 1.4

![img](../media/image004.png)

---

#### 1.5

![img](../media/image006.png)

---

### Paso 2 Instale el marco de fijación para la caja de la batería e instale la cabina de alimentación, conecte la placa ESP32 y el módulo de relé

#### 2.1 Componentes requeridos

![img](../media/image007.png)

---

#### 2.2

Ensamble las tablas de madera X y O en la placa base

![img](../media/image008.png)

---

#### 2.3

![img](../media/image010.png)

---

#### 2.4

![img](../media/image011.png)

---

#### 2.5

![img](../media/image012.png)

---

#### 2.6

![img](../media/image013.png)

---

#### 2.7

![img](../media/image014.png)

---

#### 2.8 Conecte la placa ESP32 y el módulo de relé

| Módulo | Cable | Pin |
| --- | --- | --- |
| Módulo de relé | 3PIN 20cm | IO25 |

| Pin del módulo | Color del cable | Pin de la placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io25 |

![img](../media/image015.png)

---

#### 2.9

![img](../media/image015-1.png)

---

### Paso 3 Instale la subestructura de la casa

---

#### 3.1 Componentes requeridos

![img](../media/image016.png)

---

#### 3.2

![img](../media/image017.png)

---



#### 3.3


![img](../media/image018.png)

---



#### 3.4


![img](../media/image019.png)

---



#### 3.5


![img](../media/image020.png)

---



#### 3.6


![img](../media/image021.png)

---



#### 3.7


![img](../media/image022.png)

---



#### 3.8


![img](../media/image023.png)

---



#### 3.9


![img](../media/image024.png)

---



#### 3.10


![img](../media/image025.png)

---



#### 3.11


![img](../media/image026.png)

---



### Paso 4 Instalar la puerta de la cabina de alimentación


---



#### 4.1 Componentes requeridos


![image027](../media/image027.png)

![image](../media/image-20250416162128859.png)

La lámina acrílica se empaqueta por separado, y se recomienda quitar su película protectora para reducir la fricción cuando se mueve como una puerta.

---



#### 4.2 Ajustar el servo a 165°

> **⚠ ADVERTENCIA — Lea antes de continuar:**
>
> 1. **NO ajuste el servo a 180°.** El mecanismo de la puerta no requiere el rango completo de 0°–180°. Ajustarlo al extremo hará que el servo presione contra el tope mecánico, lo que puede sobrecalentar y dañar permanentemente el motor del servo.
> 2. **Mantenga la placa encendida durante la instalación.** Cuando el servo está encendido y manteniendo su ángulo, NO fuerce el engranaje o la puerta con la mano. Si la placa está apagada, el servo no tiene par de retención, y girar manualmente el engranaje cambiará el ángulo calibrado, causando desalineación después del encendido.
> 3. **NO use fuerza bruta.** Si la puerta no se mueve suavemente, deténgase inmediatamente y verifique el ensamblaje. Forzarla dañará los engranajes del servo.

Tenga en cuenta que este paso es muy importante. Antes de la instalación, asegúrese de ajustar el servo a **165°** (con un margen de 15° reservado en cada extremo para evitar daños mecánicos).

**Antes de montar el servo, primero ajuste el ángulo a 165° programando con KidsBlock (programación gráfica).**

Consulte los pasos de instalación del software para obtener más detalles.

**Conecte el Servo a la placa de desarrollo ESP32 en el pin IO26.**

![img](../media/image028-1.png)

---


![img](../media/image028-3.png)

---


- Abra **KidsBlock**. Seleccione la placa ESP32 y el puerto serie correcto, y grabe el siguiente código en la placa. El código ajusta el servo a **165°**.

![image-20250425134842857](../media/image-20250425134842857.png)

![img](../media/image028-2.png)

> **Importante:** Mantenga la placa encendida y el servo en 165° mientras procede al paso de ensamblaje. NO desconecte la alimentación ni mueva manualmente el engranaje hasta que el panel de la puerta esté completamente instalado.

---



#### 4.3 Instalar el Servo


![img](../media/image029.png)

---



#### 4.4

**Nota: Los tornillos deben apretarse para mantener el servo estable, de lo contrario la puerta podría atascarse.**

![img](../media/image030.png)

---



#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Instale los tornillos autorroscantes M1.4*6MM como se muestra a continuación

![6e1caadec8b1ec99b0093200763607b6](../media/6e1caadec8b1ec99b0093200763607b6.jpg)

---



#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)

---



#### 4.7


![img](../media/image033.png)

---



#### 4.8


No gire el engranaje después de instalarlo en el servo. Si ya ha girado el engranaje, deberá reajustar el ángulo del servo a 180°.

![img](../media/image034.png)

---



#### 4.9

**NOTA: Al instalar la tapa de la caja de alimentación, su abertura debe estar completamente cerrada.**

![img](../media/image035.png)

---



#### 4.10


![img](../media/image036.png)

---



#### 4.11


![img](../media/image037.png)

---



#### 4.12


![img](../media/image037-1.png)

---



#### 4.13 Probar la puerta


1. Conecte el Servo al pin IO26 de la placa ESP32. Conecte el amarillo a S, el rojo a V, el negro a G.

![img](../media/image028-1.png)

2. Conecte 6 pilas AA al puerto DC 7-12V de la placa ESP32. (Pilas no incluidas en el kit)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Subir el código de prueba

A. Conecte la placa ESP32 al ordenador con el cable USB. Abra el archivo INO dentro de la carpeta **6.1Servo.sb3** con KidsBlock.

![image-20250427084645025](../media/image-20250427084645025.png)

B. Subir código

![image-20250417085407205](../media/image-20250417085407205.png)

> **⚠ NOTA:** Después de subir el código, si la puerta no se puede abrir y cerrar suavemente y el servo está caliente, por favor **apague la alimentación inmediatamente** para evitar que el servo se queme. Luego, revise los siguientes puntos.
>
> **NO use la fuerza bruta** para mover la puerta o el engranaje en ningún momento.

**Comprobar:**

1. Si la puerta de plástico tiene buen contacto y puntos de fuerza con la estructura de engranajes del servo.
1. Si la punta del tornillo de fijación en la estructura de engranajes del servo está atascada con la carcasa de plástico del servo. Si es así, afloje un poco el tornillo de fijación para evitar que su punta entre en contacto con el servo.

![image-20250417085630662](../media/image-20250417085630662.png)


### Paso 5 Instalar la pantalla LCD y el sensor DHT11


---



#### 5.1 Componentes requeridos


![img](../media/image038.png)

---



#### 5.2


![img](../media/image039.png)

---



#### 5.3


![img](../media/image040.png)

---



#### 5.4


![img](../media/image041.png)

---



#### 5.5 Prototipo


![img](../media/image042.png)

---



#### 5.6 Cableado


**Conecte los módulos mediante cables Dupont.**

| Módulo | Cable |
| --- | --- |
| Sensor de temperatura y humedad | 3PIN 20cm |
| LCD 1602 | 4PIN **(Negro-Rojo-Azul-Verde)** |

**Preste atención al color del cable Dupont:**

**Para el sensor de temperatura y humedad, conecte el amarillo a S, el rojo a V,
el negro a G.**

![img](../media/image043.png)

---



#### 5.7


| Módulo | Cable |
| --- | --- |
| LCD 1602 | 4PIN **(Negro-Rojo-Azul-Verde)** |

**Para la pantalla LCD, conecte el verde a SCL, el azul a SDA, el rojo a VCC, el negro a GND.**

![img](../media/image044.png)

---

### Paso 6 Instalar el Módulo Ultrasónico

---

#### 6.1 Componentes requeridos

![img](../media/image045.png)

---

#### 6.2

![img](../media/image046.png)

---

#### 6.3

![img](../media/image047.png)

---

#### 6.4 Cableado

| Módulo | Cable |
| --- | --- |
| Módulo ultrasónico | 4PIN **(Negro-Verde-Azul-Rojo)** |

**Preste atención al color del cable Dupont: Para el módulo ultrasónico,
conecte el azul a TRIG, el verde a ECHO, el rojo a VCC, el negro a GND.**

![img](../media/image048.png)

---

### Paso 7 Instalar el Sensor de Movimiento PIR y el Módulo de Botón

---

#### 7.1 Componentes requeridos

![img](../media/image049.png)

---

#### 7.2

![img](../media/image050.png)

---

#### 7.3

![img](../media/image051.png)

---

#### 7.4 Cableado

**Conecte los módulos mediante cables Dupont.**

| Módulo | Cable |
| --- | --- |
| Sensor de movimiento PIR | 3PIN 15cm |
| Módulo de botón | 3PIN 15cm |

**Preste atención al color del cable Dupont: Conecte el amarillo a S, el rojo a V, el negro a G.**

![img](../media/image052.png)

---

### Paso 8 Instalar las Paredes de la Casa

---

#### 8.1 Componentes requeridos

![img](../media/image053.png)

---

#### 8.2

![img](../media/image054.png)

---

#### 8.3

![img](../media/image055.png)

---

#### 8.4

![img](../media/image056.png)

---

#### 8.5

![img](../media/image057.png)

---

#### 8.6

![img](../media/image058.png)

---

#### 8.7

![img](../media/image059.png)

---

#### 8.8 Prototipo

![img](../media/image060.png)

---



#### 8.9 Cableado


| Módulo | Cable |
| --- | --- |
| Ventilador | 4PIN **Dividido (Negro-Rojo-Azul-Verde)** |
| Sensor de Vapor | 3PIN 15cm |
| Fotorresistencia | 3PIN 15cm |

**Preste atención al color del cable Dupont para el Ventilador:**

| Pin del Módulo | Color del Cable | Pines de la Placa ESP32 |
| :--- | :--- | :--- |
| IN- | VERDE | io18 |
| IN+ | AZUL | io19 |
| V | ROJO | V |
| G | NEGRO | G |

**Para el Sensor de Vapor y la Fotorresistencia: Conecte el amarillo a S, el rojo a V, el negro a G.**

![img](../media/image061.png)

---



### Paso 9 Instalar el Techo de la casa


---



#### 9.1 Componentes requeridos


![img](../media/image062.png)

---



#### 9.2


![img](../media/image063.png)

---



#### 9.3


![img](../media/image064.png)

---



#### 9.4 Mantenga los cables organizados


![img](../media/image065.png)

---



### Paso 10 Instalar la Casa y el Suelo



#### 10.1 Componentes requeridos


![img](../media/image066.png)

---



#### 10.2


![img](../media/image067.png)

---



#### 10.3


![img](../media/image068.png)

---



#### 10.4 Vista Inferior


![img](../media/image069.png)

---



#### 10.5


![img](../media/image070.png)

---



#### 10.6 Organizar los cables


![img](../media/image071.png)

---



#### 10.7


![img](../media/image072.png)

---



### Paso 11 Cableado de la Casa


---



#### 11.1

**Preste atención al color del cable Dupont: Conecte el amarillo a S, el rojo a V, el negro a G.**

| NO. | Componentes | Cables | Pines de la Placa ESP32 | |
| --- | --- | --- | --- | --- |
| 1 | Ventilador | 4 pines, **Dividido** Negro-Rojo-Azul-Verde | io18(IN-) \ io19(IN+) | |
| 2 | Sensor de Movimiento PIR | 3 pines 15cm | io23 | |
| 3 | Botón | 3 pines 15cm | io5 | |
| 4 | Módulo Ultrasónico | 4 pines, **Dividido** Negro-Verde-Azul-Rojo | D12(TRIG) D13(ECHO) | |
| 5 | LCD 1602 | 4 pines, **Conectado** | I2C | |
| 6 | Sensor de Temperatura y Humedad | 3 pines 20cm | io17 | |
| 7 | Sensor de Vapor | 3 pines 15cm | io35 | |
| 8 | Fotorresistencia | 3 pines 15cm | io34 | |
| 9 | Servo | -- | io26 | |
| 10 | Zumbador | 3 pines 20cm | io16 | |
| 11 | LED | 3 pines 20cm | io27 | |
| 12 | Sensor de Nivel de Agua | 3 pines 25cm | io33 | |
| 13 | Sensor de Humedad del Suelo | 3 pines 20cm | io32 | |
| 14 | Bomba de Agua | 3 pines 20cm | io25 | |


#### 11.2 Ventilador


Pase el cable Dupont conectado al ventilador a través del orificio **marcado 30** en la tabla de madera.

| Componentes | Cable | Pines de la Placa ESP32 |
| :--- | :--- | :--- |
| Ventilador | 4PIN **Dividido (Negro-Rojo-Azul-Verde)** | io18(IN-), io19(IN+) |

| Pin del Módulo | Color del Cable | Pines de la Placa ESP32 |
| :--- | :--- | :--- |
| IN- | VERDE | io18 |
| IN+ | AZUL | io19 |
| V | ROJO | V |
| G | NEGRO | G |

![img](../media/image073.png)

---

#### 11.3 Sensor de Movimiento PIR

Pase el cable Dupont conectado al sensor de movimiento PIR a través del orificio marcado con el número 24 en la tabla de madera.

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Sensor de Movimiento PIR | 3PIN 15cm | io23 |

**Conecte el rojo a V, el negro a G, el amarillo a S.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io23 |

![img](../media/image074.png)

---

#### 11.4 Módulo de Botón

Pase el cable Dupont conectado al módulo de botón a través del orificio marcado con el número 25 en la tabla de madera.

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Botón | 3PIN 15cm | io5 |

**Conecte el rojo a V, el negro a G, el amarillo a S.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io5 |

![img](../media/image075.png)

---

#### 11.5 Módulo Ultrasónico

| Componente | Cable | Pines de la Placa ESP32 |
| --- | --- | --- |
| Módulo Ultrasónico | 4PIN **Dividido** (Negro-Verde-Azul-Rojo) | io13(ECHO), io12(TRIG) |

**Conecte el rojo a V, el negro a G, el azul a io12, el verde a io13.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V (io12) |
| G | NEGRO | G (io12) |
| ECHO | VERDE | io13 |
| TRIG | AZUL | io12 |

![img](../media/image076.png)

---

#### 11.6 LCD 1602

| Componente | Cable | Pines de la Placa ESP32 |
| --- | --- | --- |
| LCD1602 | 4PIN **Conectado** **(Negro-Rojo-Azul-Verde)** | I2C |

**Conecte el rojo a V, el negro a G, el azul a SDA, el verde a SCL.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| SCL | VERDE | SCL |
| SDA | AZUL | SDA |

![img](../media/image077.png)

---

#### 11.7 Sensor de Temperatura y Humedad

Pase el cable Dupont conectado al módulo de botón a través del orificio marcado con el número 20 en la tabla de madera.

| Componente | Cable | Pines de la Placa ESP32 |
| --- | --- | --- |
| Sensor de Temperatura y Humedad | 3PIN 20cm | io17 |

**Conecte el rojo a V, el negro a G, el amarillo a io17.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io17 |

![img](../media/image078.png)

---

#### 11.8 Sensor de Vapor

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Sensor de Vapor | 3PIN 15cm | io35 |

**Conecte el rojo a V, el negro a G, el amarillo a io35.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io35 |

![img](../media/image079.png)

---

#### 11.9 Fotorresistencia

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Fotorresistencia | 3PIN 15cm | io34 |

**Conecte el rojo a V, el negro a G, el amarillo a io34.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io34 |

![img](../media/image080.png)

---

#### 11.10 Servo

**Pase el cable del Servo por el Agujero 15 y luego conéctelo a la placa ESP32.**

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Servo | 3PIN | io26 |

**Conecte el rojo a V, el negro a G, el amarillo a io26.**

| Pin de la Placa | Color del Cable |
| --- | --- |
| V | ROJO |
| G | NEGRO |
| IO26 | AMARILLO |

![img](../media/image081.png)

---

#### 11.11 Zumbador

**Pase el cable del Zumbador por el Agujero 17, y luego conéctelo a la placa ESP32.**

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Zumbador | 3PIN 20cm | io16 |

**Conecte el rojo a V, el negro a G, el amarillo a io16.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io16 |

![image-20250417093147856](../media/image-20250417093147856.png)

![img](../media/image082.png)

---

#### 11.12 LED

**Pase el cable del LED por el Agujero 7, y luego conéctelo a la placa ESP32.**

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| LED | 3PIN 20cm | io27 |

**Conecte el rojo a V, el negro a G, el amarillo a io27.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io27 |

![img](../media/image083.png)

---

#### 11.13 Sensor de Nivel de Agua

**Pase el cable del sensor de nivel de agua por el Agujero 13, y luego conéctelo a la placa ESP32.**

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Sensor de Nivel de Agua | 3PIN 25cm | io33 |

**Conecte el rojo a V, el negro a G, el amarillo a io33.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io33 |

![img](../media/image084.png)

---

#### 11.14 Sensor de Humedad del Suelo

**Pase el cable del sensor de humedad del suelo por el Agujero 11, y luego conéctelo a la placa ESP32.**

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Sensor de Humedad del Suelo | 3PIN 20cm | io32 |

**Conecte el rojo a V, el negro a G, el amarillo a io32.**

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io32 |

![img](../media/image085.png)

---

#### 11.15 Módulo de Relé

| Componente | Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| Módulo de Relé | 3PIN | io25 |

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io25 |

**Pase el cable de la Bomba de Agua por el Agujero 11 como se muestra a continuación:**

![img](../media/image086.png)

El cable rojo de la bomba de agua se conecta al terminal central del módulo de relé, y el cable negro se conecta al GND de la placa ESP32.

Además, debe usar un cable Dupont para conectar el terminal izquierdo del módulo de relé a los 3.3V del ESP32.

![img](../media/image087.png)

---

#### 11.16

![img](../media/image088.png)

---

Inserte el terminal macho del cable Dupont en el terminal hembra del módulo de relé y apriételo con un destornillador.

![image-20250417093737686](../media/image-20250417093737686.png)

Después de los pasos anteriores, tenga en cuenta que todo el cableado ha sido terminado. Y los cables del LED, sensor de nivel de agua, sensor de humedad del suelo, zumbador y bomba de agua del relé han pasado respectivamente por los agujeros 7, 11, 13, 17 y 40 tallados en la tabla de tilo, preparándose para la instalación posterior.

![354e13bf130d878628f1361fdd37b997](../media/354e13bf130d878628f1361fdd37b997.png)

### Paso 12 Instalar la casa y la base

---

#### 12.1 Componentes requeridos

![img](../media/image089.png)

---

#### 12.2

![img](../media/image090.png)

---

#### 12.3


![img](../media/image091.png)

---



#### 12.4


![img](../media/image092.png)

---



#### 12.5


![img](../media/image093.png)

---



### Paso 13 Instalar los fregaderos de plástico


---



#### 13.1 Componentes requeridos


![img](../media/image094.png)

---



#### 13.2


![img](../media/image095.png)

---



#### 13.3


![img](../media/image096.png)

---



### Paso 14 Instalar el módulo de suelo y el módulo de nivel de agua


---



#### 14.1 Componentes requeridos


![img](../media/image098.png)

---



#### 14.2


![img](../media/image099.png)

---



#### 14.3


![img](../media/image100.png)

---



#### 14.4


![image-20230718085623979](../media/image-20230718085623979.png)

---



#### 14.5


![image-20230718085641291](../media/image-20230718085641291.png)

---



#### 14.6


![image-20230718085722378](../media/image-20230718085722378.png)

---



#### 14.7


![image-20230718085743776](../media/image-20230718085743776.png)

---



### Paso 15 Instalar la valla


---



#### 15.1 Componentes requeridos


![image-20230718085854136](../media/image-20230718085854136.png)

---



#### 15.2


![image-20230718085921988](../media/image-20230718085921988.png)

---



#### 15.3


![image-20230718085936256](../media/image-20230718085936256.png)

---



#### 15.4


![image-20230718085954487](../media/image-20230718085954487.png)

---



### Paso 16 Instalar el zumbador y el módulo Led

---



#### 16.1 Componentes requeridos


![image-20230718090031524](../media/image-20230718090031524.png)

---



#### 16.2


![image-20230718090057124](../media/image-20230718090057124.png)

---



#### 16.3


![image-20230718090110113](../media/image-20230718090110113.png)

---



#### 16.4


![image-20230718090127577](../media/image-20230718090127577.png)

---



### Paso 17 Decorar la Casa


---



#### 17.1 Componentes requeridos


![image-20230718090150918](../media/image-20230718090150918.png)

---



#### 17.2


![image-20230718090215504](../media/image-20230718090215504.png)

---



#### 17.3


![image-20230718090227072](../media/image-20230718090227072.png)

---



### Paso 18 Instalar el Panel Solar


---



#### 18.1


![img](../media/image128.png)

---



#### 18.2


![img](../media/image129.png)

---



#### 18.3


![img](../media/image130.png)

---



#### 18.4


![img](../media/image131.png)

---



#### 18.5


Instale la luz LED del panel solar en este orificio.

![img](../media/image132.png)

---



#### 18.6


Use una pegatina para asegurar sus cables a la pared.

![img](../media/image131-1.png)

---



#### 18.7


![img](../media/image132-1.png)

---



#### 18.8


![img](../media/image133.png)

---



#### 18.9


![img](../media/image135.png)

---



#### 18.10


![image-20230718091556561](../media/image-20230718091556561.png)

---



### Paso 19 Instalar la Caja de Baterías


---

#### 19.1


![image-20230718091623881](../media/image-20230718091623881.png)

---



#### 19.2


Instale 6 pilas AA (no incluidas en el kit)

![image-20250417095312061](../media/image-20250417095312061.png)

![image-20230718091649546](../media/image-20230718091649546.png)

---



#### 19.3


![image-20230718091701966](../media/image-20230718091701966.png)


