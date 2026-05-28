## 1. Introduce KidsBlock



### 1.1 KidsBlock Installation



#### 1.1.1 Install Kidsblock on Windows System


1. You could download KidsBlock from:

   -  Link: http://xiazai.keyesrobot.cn/KidsBlock.exe

   -  Provided file: ![img](../media/an1-1.png)

1. After downloading, click “KidsBlock.exe” ![image1](../media/an1.png)

1. Tick “ **Anyone who uses this computer(all users)** ” and then click “**Next** ”.

![img](../media/an2.png)

4. Click “ **Browse...** ” to choose a path to install (Here we choose Disk C; you may select any where you like), and click “ **Install** ”. Now it is installing!

![img](../media/an3.png)

![img](../media/an4.png)

5. After installation completing, click “ **Finish** ” to open it.

![img](../media/an5.png)

6. If a warning shows up, please just click “ **Allow access** ” to enter the software main page.

![img](../media/an6.png)

---



#### 1.1.2 Install Kidsblock on MacOS


1. Please download Kidsblock package first: http://xiazai.keyesrobot.cn/KidsBlock.dmg

![img](../media/an7.png)

2. Click KidsBlock and drag the "**KidsBlock Desktop**" into "**Applications**", as shown below.

![img](../media/an8.png)

3. After installation, the KidsBlock icon will show in operating pad:

![img](../media/an9.png)

4. Click the KidsBlock icon to enter the software. If it fails, please modify some computer settings to re-enter it. This is because Mac Systems, by default, only authorize the installation in App Store, so others is not allowed to be installed.

![img](../media/an9-1.png)

5. Open the settings, and click Privacy and Security. Switch the security option to “App Store and Approved Developers”, and click “Still Open”.

![img](../media/an9-2.png)

6. Click “Open” to re-enter the blocked software.

![img](../media/an9-3.png)

7. After settings, it can work normally.

![img](../media/an9-4.png)

8. The startup interface is as below. Now enjoy your journey of programming!

![img](../media/an9-5.png)

---



### 1.2 Software Guidance


(**Following demonstrations are based on Windows System, and is only a
reference for MacOS.**)


#### 1.2.1 Main Page Function Distribution 1


![img](../media/an10.png)


#### 1.2.2 Select Language


Click ![image2](../media/an11.png) to select “English” or “简体中文" ![image3](../media/an12.png)


#### 1.2.3 Select Devices


**Choose a device and a serial port**

-  Click ![image5](../media/an27.png) to choose a device.

-  Here we enter **Kit** to find **Smart farm for ESP32** and add it. Note that all sensors are included in this kit, so you do not need to import them additionally.

![img](../media/an28.png)

-  After import this kit, you will see the following interface of port selecting. Click **Connect** at the correct port.

![img](../media/an29.png)

-  Tap **Go to Editor**.

![img](../media/an30.png)

-  Main Page:

![img](../media/an31.png)

**Disconnect the device**

-  If you want to disconnect the kit and port, please click ![image6](../media/an32.png).

-  Then tap **Disconnect** to unbind the current connection.

![img](../media/an33.png)

---



#### 1.2.4 Main Page Function Distribution 2


![img](../media/an34.png)


#### 1.2.5 Expand a Sensor/Module


**NOTE: This part can be SKIPPED, as all required sensors are integrated
in the kit with no need to expand. If you want to adopt an excluded
module, please refer to the following procedures.**

-  Click ![an42](../media/an35.png) to enter the sensors/modules extension library.

-  Choose an extension.

![img](../media/an36.png)

-  For instance, a buzzer module is required, please click passive buzzer:
   
-  ![img](../media/an37.png)

-  When “ **Not loaded** ” becomes “ **Loaded** ”, this module is successfully imported.

![img](../media/an38.png)

-  Click ![image7](../media/an39.png) to back to the editor. Now you will find that a Passive buzzer block appears in Code.

![img](../media/an41.png)

-  If you want to remove the “Passive buzzer”, just click ![image8](../media/an42.png) to enter library and tap.

![img](../media/an38.png)

-  When “Loaded” shifts to “Not loaded”, this module is successfully deleted.

![img](../media/an37.png)


#### 1.2.6 Import File


-  Method 1

   -  If the software is not in operation, then directly click SB3 file
      to open it. For example, click ![image9](../media/an46.png) to open it. Remember to select a device.

![img](../media/an54.png)

-  Method 2

   -  Open Kidsblock. Click “ **file** ” to choose “ **Load from your computer** ”. ![image10](../media/an47.png)
      
-  Select an SB3 file (like ![image11](../media/an46.png)).

![img](../media/an50.png)

   -  Import successfully!

![img](../media/an54.png)


#### 1.2.7 Upload Code & Set Baud Rate


**Upload code**

-  Upload file ![image12](../media/an47.png) to Kidsblock.

-  Connect the development board to your computer (If the you cannot see
   a port, please install a driver first), and select the correct port and click ![image13](../media/an52.png).

![img](../media/an54.png)

-  Wait for uploading.

![img](../media/an53.png)

**Set Baud rate**

-  If there is not a print box, please click one of ![image14](../media/an56.png) to adjust
   the box size.

   -  Small print box ![image15](../media/an58.png)
   -  Large print box ![image16](../media/an59.png)
   -  No print box ![image17](../media/an60.png)

-  Click ![image18](../media/an57.png) to set the corresponding baud rate.

![img](../media/an55.png)

-  “ **Hello KidsBlock** ” starts to be printed in the box after setting.

![img](../media/an62.png)
