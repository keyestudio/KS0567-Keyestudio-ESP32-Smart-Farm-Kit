.. _1-introduce-kidsblock:

1. Introduce KidsBlock
======================

.. _11-kidsblock-installation:

1.1 KidsBlock Installation
--------------------------

.. _111-install-kidsblock-on-windows-system:

1.1.1 Install Kidsblock on Windows System
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

1. You could download KidsBlock from:

   - Link: http://xiazai.keyesrobot.cn/KidsBlock.exe

   - Provided file: |image1|

2. After downloading, click “KidsBlock.exe” |image2|

3. Tick “ **Anyone who uses this computer(all users)** ” and then click
   “\ **Next** ”.

|image3|

1. Click “ **Browse...** ” to choose a path to install (Here we choose
   Disk C; you may select any where you like), and click “ **Install**
   ”. Now it is installing!

|image4|

|image5|

1. After installation completing, click “ **Finish** ” to open it.

|image6|

1. If a warning shows up, please just click “ **Allow access** ” to
   enter the software main page.

|image7|

--------------

.. _112-install-kidsblock-on-macos:

1.1.2 Install Kidsblock on MacOS
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

1. Please download Kidsblock package first:
   http://xiazai.keyesrobot.cn/KidsBlock.dmg

|image8|

1. Click KidsBlock and drag the "**KidsBlock Desktop**" into
   "**Applications**", as shown below.

|image9|

1. After installation, the KidsBlock icon will show in operating pad:

|image10|

1. Click the KidsBlock icon to enter the software. If it fails, please
   modify some computer settings to re-enter it. This is because Mac
   Systems, by default, only authorize the installation in App Store, so
   others is not allowed to be installed.

|image11|

1. Open the settings, and click Privacy and Security. Switch the
   security option to “App Store and Approved Developers”, and click
   “Still Open”.

|image12|

1. Click “Open” to re-enter the blocked software.

|image13|

1. After settings, it can work normally.

|image14|

1. The startup interface is as below. Now enjoy your journey of
   programming!

|image15|

--------------

.. _12-software-guidance:

1.2 Software Guidance
---------------------

(**Following demonstrations are based on Windows System, and is only a
reference for MacOS.**)

.. _121-main-page-function-distribution-1:

1.2.1 Main Page Function Distribution 1
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

|image16|

.. _122-select-language:

1.2.2 Select Language
~~~~~~~~~~~~~~~~~~~~~

Click |image17| to select “English” or “简体中文" |image18|

.. _123-select-devices:

1.2.3 Select Devices
~~~~~~~~~~~~~~~~~~~~

**Choose a device and a serial port**

- Click |image19| to choose a device.

- Here we enter **Kit** to find **Smart farm for ESP32** and add it.
  Note that all sensors are included in this kit, so you do not need to
  import them additionally.

|image20|

- After import this kit, you will see the following interface of port
  selecting. Click **Connect** at the correct port.

|image21|

- Tap **Go to Editor**.

|image22|

- Main Page:

|image23|

**Disconnect the device**

- If you want to disconnect the kit and port, please click |image24|.

- Then tap **Disconnect** to unbind the current connection.

|image25|

--------------

.. _124-main-page-function-distribution-2:

1.2.4 Main Page Function Distribution 2
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

|image26|

.. _125-expand-a-sensormodule:

1.2.5 Expand a Sensor/Module
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

**NOTE: This part can be SKIPPED, as all required sensors are integrated
in the kit with no need to expand. If you want to adopt an excluded
module, please refer to the following procedures.**

- Click |image27| to enter the sensors/modules extension library.

- Choose an extension.

|image28|

- For instance, a buzzer module is required, please click passive
  buzzer:

- |image29|

- When “ **Not loaded** ” becomes “ **Loaded** ”, this module is
  successfully imported.

|image30|

- Click |image31| to back to the editor. Now you will find that a
  Passive buzzer block appears in Code.

|image32|

- If you want to remove the “Passive buzzer”, just click |image33| to
  enter library and tap.

|image34|

- When “Loaded” shifts to “Not loaded”, this module is successfully
  deleted.

|image35|

.. _126-import-file:

1.2.6 Import File
~~~~~~~~~~~~~~~~~

- Method 1

  - | If the software is not in operation, then directly click SB3 file
    | to open it. For example, click |image36| to open it. Remember to
      select a device.

|image37|

- Method 2

  - Open Kidsblock. Click “ **file** ” to choose “ **Load from your
    computer** ”. |image38|

- Select an SB3 file (like |image39|).

|image40|

- Import successfully!

|image41|

.. _127-upload-code--set-baud-rate:

1.2.7 Upload Code & Set Baud Rate
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

**Upload code**

- Upload file |image42| to Kidsblock.

- | Connect the development board to your computer (If the you cannot
    see
  | a port, please install a driver first), and select the correct port
    and click |image43|.

|image44|

- Wait for uploading.

|image45|

**Set Baud rate**

- | If there is not a print box, please click one of |image46| to adjust
  | the box size.

  - Small print box |image47|

  - Large print box |image48|

  - No print box |image49|

- Click |image50| to set the corresponding baud rate.

|image51|

- “ **Hello KidsBlock** ” starts to be printed in the box after setting.

|image52|

.. |image1| image:: ./media/an1-1.png
.. |image2| image:: ./media/an1.png
.. |image3| image:: ./media/an2.png
.. |image4| image:: ./media/an3.png
.. |image5| image:: ./media/an4.png
.. |image6| image:: ./media/an5.png
.. |image7| image:: ./media/an6.png
.. |image8| image:: ./media/an7.png
.. |image9| image:: ./media/an8.png
.. |image10| image:: ./media/an9.png
.. |image11| image:: ./media/an9-1.png
.. |image12| image:: ./media/an9-2.png
.. |image13| image:: ./media/an9-3.png
.. |image14| image:: ./media/an9-4.png
.. |image15| image:: ./media/an9-5.png
.. |image16| image:: ./media/an10.png
.. |image17| image:: ./media/an11.png
.. |image18| image:: ./media/an12.png
.. |image19| image:: ./media/an27.png
.. |image20| image:: ./media/an28.png
.. |image21| image:: ./media/an29.png
.. |image22| image:: ./media/an30.png
.. |image23| image:: ./media/an31.png
.. |image24| image:: ./media/an32.png
.. |image25| image:: ./media/an33.png
.. |image26| image:: ./media/an34.png
.. |image27| image:: ./media/an35.png
.. |image28| image:: ./media/an36.png
.. |image29| image:: ./media/an37.png
.. |image30| image:: ./media/an38.png
.. |image31| image:: ./media/an39.png
.. |image32| image:: ./media/an41.png
.. |image33| image:: ./media/an42.png
.. |image34| image:: ./media/an38.png
.. |image35| image:: ./media/an37.png
.. |image36| image:: ./media/an46.png
.. |image37| image:: ./media/an54.png
.. |image38| image:: ./media/an47.png
.. |image39| image:: ./media/an46.png
.. |image40| image:: ./media/an50.png
.. |image41| image:: ./media/an54.png
.. |image42| image:: ./media/an47.png
.. |image43| image:: ./media/an52.png
.. |image44| image:: ./media/an54.png
.. |image45| image:: ./media/an53.png
.. |image46| image:: ./media/an56.png
.. |image47| image:: ./media/an58.png
.. |image48| image:: ./media/an59.png
.. |image49| image:: ./media/an60.png
.. |image50| image:: ./media/an57.png
.. |image51| image:: ./media/an55.png
.. |image52| image:: ./media/an62.png
