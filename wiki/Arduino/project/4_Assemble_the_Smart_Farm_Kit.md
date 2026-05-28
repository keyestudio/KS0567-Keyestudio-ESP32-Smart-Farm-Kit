## 4. Ensamblar el Kit de Granja Inteligente



### Paso 1 Instalar la Placa ESP32 y el Módulo de Relé



#### 1.1 Componentes requeridos


![img](../media/image001.png)


#### 1.2


![img](../media/image002.png)


#### 1.3


![img](../media/image003.png)


#### 1.4


![img](../media/image004.png)


#### 1.5


![img](../media/image006.png)


### Paso 2 Instalar el Marco de Fijación para la Caja de Baterías e instalar la Cabina de Alimentación, conectar la placa ESP32 y el Módulo de Relé



#### 2.1 Componentes requeridos


![img](../media/image007.png)


#### 2.2


Ensamblar las tablas de madera X y O en la placa base

![img](../media/image008.png)


#### 2.3


![img](../media/image010.png)


#### 2.4


![img](../media/image011.png)


#### 2.5


![img](../media/image012.png)


#### 2.6


![img](../media/image013.png)


#### 2.7


![img](../media/image014.png)


#### 2.8 Conectar la placa ESP32 y el Módulo de Relé


| Módulo | Cable | Pin |
| --- | --- | --- |
| Módulo de Relé | 3PIN 20cm | IO25 |

| Pin del Módulo | Color del Cable | Pin de la Placa ESP32 |
| --- | --- | --- |
| V | ROJO | V |
| G | NEGRO | G |
| S | AMARILLO | io25 |

![img](../media/image015.png)


#### 2.9


![img](../media/image015-1.png)


### Paso 3 Instalar la Subestructura de la casa



#### 3.1 Componentes requeridos


![img](../media/image016.png)


#### 3.2


![img](../media/image017.png)


#### 3.3


![img](../media/image018.png)


#### 3.4


![img](../media/image019.png)


#### 3.5


![img](../media/image020.png)


#### 3.6


![img](../media/image021.png)


#### 3.7


![img](../media/image022.png)


#### 3.8


![img](../media/image023.png)


#### 3.9


![img](../media/image024.png)


#### 3.10


![img](../media/image025.png)


#### 3.11


![img](../media/image026.png)


### Paso 4 Instalar la Puerta de la Cabina de Alimentación



#### 4.1 Componentes requeridos


![img](../media/image027.png)


#### 4.2 Ajustar el Servo a 180°


![image-20250416162128859](../media/image-20250416162128859.png)

La lámina acrílica se empaqueta por separado, y se recomienda que
retire su película protectora para reducir la fricción cuando se mueva como
una puerta.


#### 4.3 Instalar el Servo


![img](../media/image029.png)


#### 4.4


**Nota: Los tornillos deben apretarse para mantener el servo estable,
de lo contrario, la puerta podría atascarse.**

![img](../media/image030.png)


#### 4.5


![image-20250416162337896](../media/image-20250416162337896.png)

Instale los tornillos autorroscantes M1.4*6MM como se muestra a continuación

![img](../media/6e1caadec8b1ec99b0093200763607b6.jpg)


#### 4.6


![image-20250416162754513](../media/image-20250416162754513.png)


#### 4.7


![img](../media/image033.png)


#### 4.8


No gire el engranaje después de instalarlo en el servo. Si ya ha
girado el engranaje, deberá reajustar el ángulo del servo a
180°.

![img](../media/image034.png)


#### 4.9


**NOTA: Al instalar la tapa de la caja de alimentación, su abertura debe
estar completamente cerrada.**

![img](../media/image035.png)


#### 4.10


![img](../media/image036.png)


#### 4.11


![img](../media/image037.png)


#### 4.12


![img](../media/image037-1.png)


#### 4.13 Probar la puerta


1. Conecte el Servo al pin IO26 de la placa ESP32. Conecte el amarillo a S,
   el rojo a V, el negro a G.

![image028-1](../media/image028-1-1744850789118-1.png)

2. Conecte 6 pilas AA al puerto DC 7-12V de la placa ESP32.
   (Pilas no incluidas en el kit)

![image-20250417084747308](../media/image-20250417084747308.png)

3. Subir el código de prueba

A. Conecte la placa ESP32 al ordenador con el cable USB. Abra el
archivo INO dentro de la carpeta **6.1Servo** con Arduino IDE.

![image-20250418081022882](../media/image-20250418081022882.png)

![image-20250418081231084](../media/image-20250418081231084.png)

B. Haga clic en Herramientas, seleccione "ESP32 Dev Module" para el tipo de placa en la
barra de menú desplegable, y seleccione COM-XX para el Puerto (Según el puerto
asignado por su ordenador en el administrador de dispositivos)

C. Asegúrese de haber subido la biblioteca **ESP32Servo** y
luego suba el código. La puerta de la cabina de alimentación se abrirá y cerrará
lentamente.

![image-20250417085407205](../media/image-20250417085407205.png)

NOTA: Después de subir el código, si la puerta no se puede abrir y cerrar y el servo está caliente, apague la alimentación inmediatamente.

**comprobar:**

1. Si la puerta de plástico tiene buen contacto y puntos de fuerza con la
   estructura de engranajes del servo.
1. Si la punta del tornillo de fijación en la estructura de engranajes del
   servo está atascada con la carcasa de plástico del servo. Si es así, por favor
   afloje un poco el tornillo de fijación para evitar que su punta entre en contacto
   con el servo.

![image-20250417085630662](../media/image-20250417085630662.png)


### Paso 5 Instalar la pantalla LCD y el Sensor DHT11



#### 5.1 Componentes requeridos


![img](../media/image038.png)


#### 5.2


![img](../media/image039.png)


#### 5.3


![img](../media/image040.png)


#### 5.4


![img](../media/image041.png)


#### 5.5 Prototipo


![img](../media/image042.png)


#### 5.6 Cableado


**Conectar módulos mediante cables Dupont.**

| Módulo | Cable |
| --- | --- |
|