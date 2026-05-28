## 2. Configure the Arduino


### 2.1 Install Driver for KEYESTUDIO ESP32 PLUS Board


KEYESTUDIO ESP32 PLUS Board a universal WIFI plus Bluetooth development
board based on ESP32, integrated with ESP32-WOROOM-32 module and
compatible with Arduino.

It has a hall sensor, high-speed SDIO/SPI, UART, I2S as well as I2C.
Furthermore, equipped with freeRTOS operating system, which is quite
suitable for the Internet of things and smart home.

**Specifications**

Voltage: 3.3V-5V

Current Output: 1.2A(maximum)

Maximum power Output: 10W

Working temperature: -10℃~50℃

Dimension: 69 * 54 * 14.5mm

Weight: 25.5g

Environmental protection attributes: ROHS

![j255](../media/j255.png)

**Install driver**

Connect the ESP32 board to the computer and wait for Windows to begin its
driver installation process. Often CH340 driver will be automatically
installed by your system when using Arduino. You can check the Device
Manager or the port of the Arduino IDE to see if the driver is successfully
installed.

![a10](../media/a10.png)

If the CH340 driver is not installed automatically, we need to install it manually.

Click to download [Windows CH340 driver](../Windows.zip) 

![a51](../media/a51.png)

1. Open the **Device Manager** by right clicking “**My PC**” and
   selecting **Properties**. Look under **Other devices**. You should
   see an open port named **USB Serial**

![a11](../media/a11.png)

2. Right click on the "**USB Serial**" and choose the "**Update
   Driver**" option.

![a13](../media/a13.png)

3. Choose the "**Browse my computer for Driver software**" option.

![a14](../media/a14.png)

4. Select the driver file named "**usb_ch341_3.1.2009.06**", located in the Driver Folder of the tutorial package.

![a15](../media/a15.png)

5. Driver successfully installed.

![a16](../media/a16.png)

6. Device Manager will automatically refresh. Look under Ports (COM &
   LPT). You should see an open port named “**USB-SERIAL CH340(COM3)**”

![a10](../media/a10.png)

7. Click **Tools>Port** at Arduino IDE, you can find the same COM port
   as the CH340 driver in the device manager.

![a38](../media/a38.png)


### 2.2 Add Libraries to Arduino IDE


**Why Use Libraries?**

Libraries are incredibly useful when creating a project of any type. They make our development

experience much smoother, and there almost an infinite amount out there. They are used to

interface with many different sensors, RTCs, Wi-Fi modules, RGB matrices and of course with other

components on your board.

**Including a Library in the sketch**

To use a library, you first need to include the library at the top of the sketch.If you find a line of code in the format of `#include "library name"` at the beginning of the code when using our code, it means that you need to add this library file to arduino IDE first before you can successfully upload this code.

![image-20250416150700630](../media/image-20250416150700630.png)

To make the smart farm kit work, we will need to **add these library files to the Arduino IDE.** You can find them in the tutorial package.

![image-20250416150847190](../media/image-20250416150847190.png)

**Importing a .zip Library**

In the menu bar, go to **Sketch > Include Library > Add .ZIP Library...** You will be prompted to select the library you want to add.

![4564654654](../media/4564654654.png)

Navigate to the .zip file’s location and open it.

![image-20250416151456661](../media/image-20250416151456661.png)

You may need to restart the Arduino IDE for the library to be available. After successfully installing the library file, you will see them in the list.

![image-20250416151805635](../media/image-20250416151805635.png)


### 2.3 Configure the development environment for ESP32


Before using Arduino IDE to program the smart farm, you need to configure the Arduino IDE, select the correct board type (**ESP32 Dev Module**) for the ESP32 Plus board, and select the **COM port** that is assigned in the device manager.

There is no option for ESP32 in Arduino's default board list,so we need to **install it manually**.

![a30](../media/a30.png)

Click **File > Preferences**. Copy the link of ESP32 board (https://espressif.github.io/arduino-esp32/package_esp32_index.json) into the **Additional boards manager URLs**, and click **OK**.

![a31](../media/a31.png)

Click the icon of "**Board Manager**" in the upper left corner.

![a32](../media/a32.png)

Search for **ESP32** in the search box and install the latest version. You can check its process in the lower right corner. **During installation, keep the network stable. If the installation fails, repeat the above steps.**

Note: We adopt ESP32 version 3.1.3 in this tutorial. Please keep it consistent to avoid code incompatibilities.

![a33](../media/a33.png)

installation is complete:

![a34](../media/a34-1744788169084-23.png)

Click **Tools> Board > esp32** ,and choose the **EPS32 Dev Module**

![a37](../media/a37.png)

Choose COM port. You may check your port number at Device Manager. If there are many COM ports, unplug the cable of board to see which port disappears. Then that one is the port ready to use. If there is no COM port, please check whether driver is installed.

![image](../media/a10-1744788429738-26.png)

Herein, our COM port is COM3. Click “Tools” → “Port” → “COM3”.

![image](../media/a38-1744788429738-27.png)
