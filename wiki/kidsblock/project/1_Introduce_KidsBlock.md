## 1. Introducción a KidsBlock



### 1.1 Instalación de KidsBlock



#### 1.1.1 Instalar Kidsblock en sistema Windows


1. Puedes descargar KidsBlock desde:

   -  Enlace: http://xiazai.keyesrobot.cn/KidsBlock.exe

   -  Archivo proporcionado: ![img](../media/an1-1.png)

1. Después de la descarga, haz clic en "KidsBlock.exe" ![image1](../media/an1.png)

1. Marca " **Anyone who uses this computer(all users)** " y luego haz clic en "**Next** ".

![img](../media/an2.png)

4. Haz clic en " **Browse...** " para elegir una ruta de instalación (Aquí elegimos el Disco C; puedes seleccionar donde quieras), y haz clic en " **Install** ". ¡Ahora se está instalando!

![img](../media/an3.png)

![img](../media/an4.png)

5. Una vez completada la instalación, haz clic en " **Finish** " para abrirlo.

![img](../media/an5.png)

6. Si aparece una advertencia, simplemente haz clic en " **Allow access** " para acceder a la página principal del software.

![img](../media/an6.png)

---



#### 1.1.2 Instalar Kidsblock en MacOS


1. Por favor, descarga primero el paquete de Kidsblock: http://xiazai.keyesrobot.cn/KidsBlock.dmg

![img](../media/an7.png)

2. Haz clic en KidsBlock y arrastra " **KidsBlock Desktop** " a " **Applications** ", como se muestra a continuación.

![img](../media/an8.png)

3. Después de la instalación, el icono de KidsBlock aparecerá en el panel de operaciones:

![img](../media/an9.png)

4. Haz clic en el icono de KidsBlock para entrar al software. Si falla, por favor, modifica algunas configuraciones del ordenador para volver a entrar. Esto se debe a que los sistemas Mac, por defecto, solo autorizan la instalación desde la App Store, por lo que no se permite la instalación de otros.

![img](../media/an9-1.png)

5. Abre la configuración y haz clic en Privacidad y Seguridad. Cambia la opción de seguridad a "App Store y Desarrolladores Aprobados", y haz clic en "Abrir de todos modos".

![img](../media/an9-2.png)

6. Haz clic en "Abrir" para volver a entrar al software bloqueado.

![img](../media/an9-3.png)

7. Después de la configuración, puede funcionar normalmente.

![img](../media/an9-4.png)

8. La interfaz de inicio es la siguiente. ¡Ahora disfruta de tu viaje de programación!

![img](../media/an9-5.png)

---



### 1.2 Guía del Software


(**Las siguientes demostraciones se basan en el sistema Windows y son solo una
referencia para MacOS.**)


#### 1.2.1 Distribución de funciones de la página principal 1


![img](../media/an10.png)


#### 1.2.2 Seleccionar idioma


Haz clic en ![image2](../media/an11.png) para seleccionar "English" o "简体中文" ![image3](../media/an12.png)


#### 1.2.3 Seleccionar dispositivos


**Elige un dispositivo y un puerto serie**

-  Haz clic en ![image5](../media/an27.png) para elegir un dispositivo.

-  Aquí introducimos **Kit** para encontrar **Smart farm for ESP32** y añadirlo. Ten en cuenta que todos los sensores están incluidos en este kit, por lo que no necesitas importarlos adicionalmente.

![img](../media/an28.png)

-  Después de importar este kit, verás la siguiente interfaz de selección de puerto. Haz clic en **Connect** en el puerto correcto.

![img](../media/an29.png)

-  Toca **Go to Editor**.

![img](../media/an30.png)

-  Página principal:

![img](../media/an31.png)

**Desconectar el dispositivo**

-  Si deseas desconectar el kit y el puerto, haz clic en ![image6](../media/an32.png).

-  Luego toca **Disconnect** para desvincular la conexión actual.

![img](../media/an33.png)

---



#### 1.2.4 Distribución de funciones de la página principal 2


![img](../media/an34.png)


#### 1.2.5 Expandir un sensor/módulo


**NOTA: Esta parte se puede OMITIR, ya que todos los sensores requeridos están integrados
en el kit sin necesidad de expandir. Si deseas adoptar un módulo excluido,
consulta los siguientes procedimientos.**

-  Haz clic en ![an42](../media/an35.png) para entrar en la biblioteca de extensiones de sensores/módulos.

-  Elige una extensión.

![img](../media/an36.png)

-  Por ejemplo, si se requiere un módulo de zumbador, haz clic en zumbador pasivo:
   
-  ![img](../media/an37.png)

-  Cuando " **Not loaded** " se convierte en " **Loaded** ", este módulo se ha importado correctamente.

![img](../media/an38.png)

-  Haz clic en ![image7](../media/an39.png) para volver al editor. Ahora verás que aparece un bloque de zumbador pasivo en Código.

![img](../media/an41.png)

-  Si deseas eliminar el "Zumbador pasivo", simplemente haz clic en ![image8](../media/an42.png) para entrar en la biblioteca y tocar.

![img](../media/an38.png)

-  Cuando "Loaded" cambia a "Not loaded", este módulo se ha eliminado correctamente.

![img](../media/an37.png)


#### 1.2.6 Importar archivo


-  Método 1

   -  Si el software no está en funcionamiento, haz clic directamente en el archivo SB3
      para abrirlo. Por ejemplo, haz clic en ![image9](../media/an46.png) para abrirlo. Recuerda seleccionar un dispositivo.

![img](../media/an54.png)

-  Método 2

   -  Abre Kidsblock. Haz clic en " **file** " para elegir " **Load from your computer** ". ![image10](../media/an47.png)
      
-  Selecciona un archivo SB3 (como ![image11](../media/an46.png)).

![img](../media/an50.png)

   -  ¡Importación exitosa!

![img](../media/an54.png)


#### 1.2.7 Subir código y configurar la velocidad de transmisión


**Subir código**

-  Sube el archivo ![image12](../media/an47.png) a Kidsblock.

-  Conecta la placa de desarrollo a tu ordenador (Si no puedes ver
   un puerto, instala primero un controlador), y selecciona el puerto correcto y haz clic en ![image13](../media/an52.png).

![img](../media/an54.png)

-  Espera a que se suba.

![img](../media/an53.png)

**Configurar la velocidad de transmisión**

-  Si no hay un cuadro de impresión, haz clic en uno de ![image14](../media/an56.png) para ajustar
   el tamaño del cuadro.

   -  Cuadro de impresión pequeño ![image15](../media/an58.png)
   -  Cuadro de impresión grande ![image16](../media/an59.png)
   -  Sin cuadro de impresión ![image17](../media/an60.png)

-  Haz clic en ![image18](../media/an57.png) para configurar la velocidad de transmisión correspondiente.

![img](../media/an55.png)

-  " **Hello KidsBlock** " comienza a imprimirse en el cuadro después de la configuración.

![img](../media/an62.png)