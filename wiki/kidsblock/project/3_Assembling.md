## 3. Montaje

Durante el montaje, se requiere grabar algunos códigos, así que por favor instale el software primero.

El montaje completo generalmente se puede dividir en dos partes: montaje de
piezas y cableado.

---

### Paso 1 Instalar la placa ESP32 y el módulo de relé

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

### Paso 2 Instalar el marco de fijación para la caja de baterías e instalar la cabina de alimentación, conectar la placa ESP32 y el módulo de relé

#### 2.1 Componentes requeridos

![img](../media/image007.png)

---

#### 2.2

Ensamblar las tablas de madera X y O en la placa base

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

#### 2.8 Conectar la placa ESP32 y el módulo de relé

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

### Paso 3 Instalar la subestructura de la casa

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

La lámina acrílica se empaqueta por separado, y se recomienda quitar su película protectora para reducir la fricción cuando se mueve como puerta.

---

#### 4.2 Ajustar el servo a 165°

> **⚠ ADVERTENCIA — Lea antes de continuar:**
>
> 1. **NO ajuste el servo a 180°.** El mecanismo de la puerta no requiere el rango completo de 0°–180°. Ajustarlo al extremo causará que el servo presione contra el tope mecánico, lo que puede sobrecalentar y dañar permanentemente el motor del servo.
> 2. **Mantenga la placa encendida durante la instalación.** Cuando el servo está encendido y manteniendo su ángulo, NO fuerce el engranaje o la puerta con la mano. Si la placa está apagada, el servo no tiene par de retención, y girar manualmente el engranaje cambiará el ángulo calibrado, causando desalineación después de encenderlo.
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

A. Conecte la placa ESP32