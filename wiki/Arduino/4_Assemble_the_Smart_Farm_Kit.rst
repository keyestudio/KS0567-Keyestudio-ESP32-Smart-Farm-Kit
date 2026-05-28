.. _4-assemble-the-smart-farm-kit:

4. Assemble the Smart Farm Kit
==============================

Step 1 Install the ESP32 Board and the Relay Module
---------------------------------------------------

.. _11-required-components:

1.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image1|

.. _12:

1.2
~~~

|image2|

.. _13:

1.3
~~~

|image3|

.. _14:

1.4
~~~

|image4|

.. _15:

1.5
~~~

|image5|

Step 2 Install the Fixing Frame for Battery Case and install the Feeding Cabin, connect the ESP32 board and the Relay Module
----------------------------------------------------------------------------------------------------------------------------

.. _21-required-components:

2.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image6|

.. _22:

2.2
~~~

Assemble the wooden board X and O on bottom plate

|image7|

.. _23:

2.3
~~~

|image8|

.. _24:

2.4
~~~

|image9|

.. _25:

2.5
~~~

|image10|

.. _26:

2.6
~~~

|image11|

.. _27:

2.7
~~~

|image12|

.. _28-connect-the-esp32-board-and-the-relay-module:

2.8 Connect the ESP32 board and the Relay Module
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

============ ========= ====
Module       Wire      Pin
============ ========= ====
Relay Module 3PIN 20cm IO25
============ ========= ====

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io25
========== ========== ===============

|image13|

.. _29:

2.9
~~~

|image14|

Step 3 Install the Substructure of the house
--------------------------------------------

.. _31-required-components:

3.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image15|

.. _32:

3.2
~~~

|image16|

.. _33:

3.3
~~~

|image17|

.. _34:

3.4
~~~

|image18|

.. _35:

3.5
~~~

|image19|

.. _36:

3.6
~~~

|image20|

.. _37:

3.7
~~~

|image21|

.. _38:

3.8
~~~

|image22|

.. _39:

3.9
~~~

|image23|

.. _310:

3.10
~~~~

|image24|

.. _311:

3.11
~~~~

|image25|

Step 4 Install the Door of the Feeding Cabin
--------------------------------------------

.. _41-required-components:

4.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image26|

.. _42-set-servo-to-180°:

4.2 Set Servo to 180°
~~~~~~~~~~~~~~~~~~~~~

|image27|

| The acrylic sheet is packed separately, and it is recommended that you
| tear off its protective film to reduce the friction when it moves as a
| door.

.. _43-install-servo:

4.3 Install Servo
~~~~~~~~~~~~~~~~~

|image28|

.. _44:

4.4
~~~

**Note: The screws need to be tightened to keep the servo stable,
otherwise the door may get stuck**

|image29|

.. _45:

4.5
~~~

|image30|

Install M1.4*6MM self-tapping screws as shown below

|image31|

.. _46:

4.6
~~~

|image32|

.. _47:

4.7
~~~

|image33|

.. _48:

4.8
~~~

| Do not turn the gear after it is installed on the servo. If you have
| already turned the gear you will need to readjust the servo angle to
| 180°.

|image34|

.. _49:

4.9
~~~

**NOTE: When installing the lid of the feeding box, its opening should
be fully closed.**

|image35|

.. _410:

4.10
~~~~

|image36|

.. _411:

4.11
~~~~

|image37|

.. _412:

4.12
~~~~

|image38|

.. _413-test-the-door:

4.13 Test the door
~~~~~~~~~~~~~~~~~~

1. | Connect Servo to pin IO26 of the ESP32 board. Connect yellow to S,
   | red to V, black to G.

|image39|

1. | Connect 6 AA batteries to the DC 7-12V port of ESP32 board.
   | (Batteries not included in the kit)

|image40|

1. Upload the Test code

| A. Connect the ESP32 board to the computer with the usb cable. Open
  the
| INO file inside the **6.1Servo** folder with Arduino IDE.

|image41|

|image42|

| B. Click on Tools, select "ESP32 Dev Module" for the board type in the
| drop-down menu bar, and select COM-XX for Port (According to the port
| assigned by your computer in the device manager)

| C. Please make sure you have uploaded the **ESP32Servo** library and
| then upload the code. The door of the feeding cabin will open and
  close
| slowly.

|image43|

NOTE: After uploading the code, ifthe door cannot be opened and closed
and the servo is hot, please turn offthe powerimmediately.

**check:**

1. | Whether the plastic door has good contact and force points with the
   | gear structure of the servo.

2. | Whether the tip of the fixing screw on the gear structure of the
   | servo is stuck with the plastic shell of the servo. If so, please
   | loosen the fixing screw a little to prevent its tip from contacting
   | the servo.

|image44|

Step 5 Install the LCD display and the DHT11 Sensor
---------------------------------------------------

.. _51-required-components:

5.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image45|

.. _52:

5.2
~~~

|image46|

.. _53:

5.3
~~~

|image47|

.. _54:

5.4
~~~

|image48|

.. _55-prototype:

5.5 Prototype
~~~~~~~~~~~~~

|image49|

.. _56-wiring:

5.6 Wiring
~~~~~~~~~~

**Connect modules via Dupont wires.**

=============================== =========
Module                          Wire
=============================== =========
Temperature and Humidity Sensor 3PIN 20cm
=============================== =========

**Pay attention to the color of the Dupont wire:**

**For temperature and humidity sensor, connect yellow to S, red to V,
black to G.**

|image50|

.. _57:

5.7
~~~

======== ===============================
Module   Wire
======== ===============================
LCD 1602 4PIN **(Black-Red-Blue-Green)**
======== ===============================

**For the LCD display, connect green to SCL, blue to SDA, red to VCC,
black to GND.**

|image51|

Step 6 Install the Ultrasonic Module
------------------------------------

.. _61-required-components:

6.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image52|

.. _62:

6.2
~~~

|image53|

.. _63:

6.3
~~~

|image54|

.. _64-wiring:

6.4 Wiring
~~~~~~~~~~

================= ===============================
Module            Wire
================= ===============================
Ultrasonic module 4PIN **(Black-Green-Blue-Red)**
================= ===============================

**Pay attention to the color of the Dupont wire: For the ultrasonic
module, connect blue to TRIG,green to ECHO, red to VCC, black to GND.**

|image55|

Step 7 Install the PIR Motion Sensor and Button Module
------------------------------------------------------

.. _71-required-components:

7.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image56|

.. _72:

7.2
~~~

|image57|

.. _73:

7.3
~~~

|image58|

.. _74-wiring:

7.4 Wiring
~~~~~~~~~~

**Connect modules via Dupont wires.**

================= =========
Module            Wire
================= =========
PIR Motion Sensor 3PIN 15cm
Button Module     3PIN 15cm
================= =========

**Pay attention to the color of the Dupont wire: Connect yellow to S,
red to V, black to G.**

|image59|

Step 8 Install the Walls of the House
-------------------------------------

.. _81-required-components:

8.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image60|

.. _82:

8.2
~~~

|image61|

.. _83:

8.3
~~~

|image62|

.. _84:

8.4
~~~

|image63|

.. _85:

8.5
~~~

|image64|

.. _86:

8.6
~~~

|image65|

.. _87:

8.7
~~~

|image66|

.. _88-prototype:

8.8 Prototype
~~~~~~~~~~~~~

|image67|

.. _89-wiring:

8.9 Wiring
~~~~~~~~~~

============= =======================================
Module        Wire
============= =======================================
Fan           4PIN **Divided (Black-Red-Blue-Green)**
Steam Sensor  3PIN 15cm
Photoresistor 3PIN 15cm
============= =======================================

**Pay attention to the color of the Dupont wire for the Fan:**

========== ========== ================
Module Pin Wire Color ESP32 Board Pins
========== ========== ================
IN-        GREEN      io18
IN+        BLUE       io19
V          RED        V
G          BLACK      G
========== ========== ================

**For Steam Sensor and Photoresistor: Connect yellow to S, red to V,
black to G.**

|image68|

Step 9 Install the Roof of the house
------------------------------------

.. _91-required-components:

9.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~

|image69|

.. _92:

9.2
~~~

|image70|

.. _93:

9.3
~~~

|image71|

.. _94-keep-the-wires-organized:

9.4 Keep the wires organized
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

|image72|

Step 10 Install the House and Ground
------------------------------------

.. _101-required-components:

10.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image73|

.. _102:

10.2
~~~~

|image74|

.. _103:

10.3
~~~~

|image75|

.. _104-bottom-view:

10.4 Bottom View
~~~~~~~~~~~~~~~~

|image76|

.. _105:

10.5
~~~~

|image77|

.. _106-arrange-the-wires:

10.6 Arrange the wires
~~~~~~~~~~~~~~~~~~~~~~

|image78|

.. _107:

10.7
~~~~

|image79|

Step 11 Wiring the House
------------------------

.. _111:

11.1
~~~~

**Pay attention to the color of the Dupont wire: Connect yellow to S,
red to V, black to G.**

+-----+--------------------+--------------------+--------------------+
| NO. | Components         | Wires              | ESP32 Board Pins   |
+=====+====================+====================+====================+
| 1   | Fan                | 4pin, Divided Bla  | io18(IN-) \\       |
|     |                    | ck-Red-Blue-Green  | io19(IN+)          |
+-----+--------------------+--------------------+--------------------+
| 2   | PIR Motion Sensor  | 3pin 15cm          | io23               |
+-----+--------------------+--------------------+--------------------+
| 3   | Button             | 3pin 15cm          | io5                |
+-----+--------------------+--------------------+--------------------+
| 4   | Ultrasonic Module  | 4pin,Divided Bla   | D12(TRIG)          |
|     |                    | ck-Green-Blue-Red  | D13(ECHO)          |
+-----+--------------------+--------------------+--------------------+
| 5   | LCD 1602           | 4pin, Connected    | I2C                |
+-----+--------------------+--------------------+--------------------+
| 6   | Temperature and    | 3pin 20cm          | io17               |
|     | Humidity Sensor    |                    |                    |
+-----+--------------------+--------------------+--------------------+
| 7   | Steam Sensor       | 3pin 15cm          | io35               |
+-----+--------------------+--------------------+--------------------+
| 8   | Photoresistor      | 3pin 15cm          | io34               |
+-----+--------------------+--------------------+--------------------+
| 9   | Servo              | --                 | io26               |
+-----+--------------------+--------------------+--------------------+
| 10  | Buzzer             | 3pin 20cm          | io16               |
+-----+--------------------+--------------------+--------------------+
| 11  | LED                | 3pin 20cm          | io27               |
+-----+--------------------+--------------------+--------------------+
| 12  | Water Level Sensor | 3pin 25cm          | io33               |
+-----+--------------------+--------------------+--------------------+
| 13  | Soil Humidity      | 3pin 20cm          | io32               |
|     | Sensor             |                    |                    |
+-----+--------------------+--------------------+--------------------+
| 14  | Water Pump         | 3pin 20cm          | io25               |
+-----+--------------------+--------------------+--------------------+

.. _112-fan:

11.2 Fan
~~~~~~~~

| Pass the Dupont wire connected to the fan through the hole **marked
  30**
| on the wooden board.

========== =================================== ====================
Components Wire                                ESP32 Board Pins
========== =================================== ====================
Fan        4PIN Divided (Black-Red-Blue-Green) io18(IN-), io19(IN+)
========== =================================== ====================

========== ========== ================
Module Pin Wire Color ESP32 Board Pins
========== ========== ================
IN-        GREEN      io18
IN+        BLUE       io19
V          RED        V
G          BLACK      G
========== ========== ================

|image80|

.. _113-pir-motion-sensor:

11.3 PIR Motion Sensor
~~~~~~~~~~~~~~~~~~~~~~

| Pass the Dupont wire connected to the PIR motion sensor through the
  hole
| marked 24 on the wooden board.

================= ========= ===============
Component         Wire      ESP32 Board Pin
================= ========= ===============
PIR Motion Sensor 3PIN 15cm io23
================= ========= ===============

**Connect red to V, black to G, yellow to S.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io23
========== ========== ===============

|image81|

.. _114-button-module:

11.4 Button Module
~~~~~~~~~~~~~~~~~~

| Pass the Dupont wire connected to the button module through the hole
| marked 25 on the wooden board.

========= ========= ===============
Component Wire      ESP32 Board Pin
========= ========= ===============
Button    3PIN 15cm io5
========= ========= ===============

**Connect red to V, black to G, yellow to S.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io5
========== ========== ===============

|image82|

.. _115-ultrasonic-module:

11.5 Ultrasonic Module
~~~~~~~~~~~~~~~~~~~~~~

+-------------------+------------------------+------------------------+
| Component         | Wire                   | ESP32 Board Pins       |
+===================+========================+========================+
| Ultrasonic Module | 4PIN **Divided** (     | io13(ECHO), io12(TRIG) |
|                   | Black-Green-Blue-Red)  |                        |
+-------------------+------------------------+------------------------+

**Connect red to V, black to G, blue to io12, green to io13.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V (io12)
G          BLACK      G (io12)
ECHO       GREEN      io13
TRIG       BLUE       io12
========== ========== ===============

|image83|

.. _116-lcd-1602:

11.6 LCD 1602
~~~~~~~~~~~~~

========= ===================================== ================
Component Wire                                  ESP32 Board Pins
========= ===================================== ================
LCD1602   4PIN Connected (Black-Red-Blue-Green) I2C
========= ===================================== ================

**Connect red to V, black to G, blue to SDA, green to SCL.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
SCL        GREEN      SCL
SDA        BLUE       SDA
========== ========== ===============

|image84|

.. _117-temperature-and-humidity-sensor:

11.7 Temperature and Humidity Sensor
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Pass the Dupont wire connected to the button module through the hole
marked 20 on the wooden board.

=============================== ========= ================
Component                       Wire      ESP32 Board Pins
=============================== ========= ================
Temperature and Humidity Sensor 3PIN 20cm io17
=============================== ========= ================

**Connect red to V, black to G, yellow to io17.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io17
========== ========== ===============

|image85|

.. _118-steam-sensor:

11.8 Steam Sensor
~~~~~~~~~~~~~~~~~

============ ========= ===============
Component    Wire      ESP32 Board Pin
============ ========= ===============
Steam Sensor 3PIN 15cm io35
============ ========= ===============

**Connect red to V, black to G, yellow to io35.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io35
========== ========== ===============

|image86|

.. _119-photoresistor:

11.9 Photoresistor
~~~~~~~~~~~~~~~~~~

============= ========= ===============
Component     Wire      ESP32 Board Pin
============= ========= ===============
Photoresistor 3PIN 15cm io34
============= ========= ===============

**Connect red to V, black to G, yellow to io34.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io34
========== ========== ===============

|image87|

.. _1110-servo:

11.10 Servo
~~~~~~~~~~~

| Pass the wire of Servo through the Hole 15, and then connect it to
  ESP32
| board.

========= ==== ===============
Component Wire ESP32 Board Pin
========= ==== ===============
Servo     3PIN io26
========= ==== ===============

**Connect red to V, black to G, yellow to io26.**

=============== ==========
ESP32 Board Pin Wire Color
=============== ==========
V               RED
G               BLACK
IO26            YELLOW
=============== ==========

|image88|

.. _1111-buzzer:

11.11 Buzzer
~~~~~~~~~~~~

| Pass the wire of Buzzer through the Hole 17, and then connect it to
| ESP32 board.

========= ========= ===============
Component Wire      ESP32 Board Pin
========= ========= ===============
Buzzer    3PIN 20cm io16
========= ========= ===============

**Connect red to V, black to G, yellow to io16.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io16
========== ========== ===============

|image89|

|image90|

.. _1112-led:

11.12 LED
~~~~~~~~~

| Pass the wire of LED through the Hole 7, and then connect it to ESP32
| board.

========= ========= ===============
Component Wire      ESP32 Board Pin
========= ========= ===============
LED       3PIN 20cm io27
========= ========= ===============

**Connect red to V, black to G, yellow to io27.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io27
========== ========== ===============

|image91|

.. _1113-water-lever-sensor:

11.13 Water Lever Sensor
~~~~~~~~~~~~~~~~~~~~~~~~

| Pass the wire of water level sensor through the Hole 13, and then
| connect it to ESP32 board.

================== ========= ===============
Component          Wire      ESP32 Board Pin
================== ========= ===============
Water Lever Sensor 3PIN 25cm io33
================== ========= ===============

**Connect red to V, black to G, yellow to io33.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io33
========== ========== ===============

|image92|

.. _1114-soil-humidity-sensor:

11.14 Soil Humidity Sensor
~~~~~~~~~~~~~~~~~~~~~~~~~~

| Pass the wire of soil humidity sensor through the Hole 11, and then
| connect it to ESP32 board.

==================== ========= ===============
Component            Wire      ESP32 Board Pin
==================== ========= ===============
Soil Humidity Sensor 3PIN 20cm io32
==================== ========= ===============

**Connect red to V, black to G, yellow to io32.**

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io32
========== ========== ===============

|image93|

.. _1115-relay-module:

11.15 Relay Module
~~~~~~~~~~~~~~~~~~

============ ==== ===============
Component    Wire ESP32 Board Pin
============ ==== ===============
Relay Module 3PIN io25
============ ==== ===============

========== ========== ===============
Module Pin Wire Color ESP32 Board Pin
========== ========== ===============
V          RED        V
G          BLACK      G
S          YELLOW     io25
========== ========== ===============

| Pass the wire of Water Pump through the Hole 11 in the way as shown
| below:

|image94|

| The red wire of the water pump is connected to the middle terminal of
| the relay module, and the black wire is connected to the GND of the
| ESP32 board.

| In addition, you need to use a Dupont wire to connect the left
  terminal
| of the relay module to the 3.3V of the ESP32.

|image95|

|image96|

Insert the male terminal of the Dupont wire into the female terminal of
the relay module and tighten it with a screwdriver.

|image97|

After the above steps, note that all the wiring has been finished. And
wires of the LED, water level sensor, soil humidity sensor, buzzer and
relay water pump have respectively passed through the holes of 7, 11,
13, 17 and 40 carved on the basswood board, preparing for the subsequent
installation.

|image98|

Step 12 Install the house and foundation
----------------------------------------

.. _121-required-components:

12.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image99|

.. _122:

12.2
~~~~

|image100|

.. _123:

12.3
~~~~

|image101|

.. _124:

12.4
~~~~

|image102|

.. _125:

12.5
~~~~

|image103|

Step 13 Install the Plastic Sinks
---------------------------------

.. _131-required-components:

13.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image104|

.. _132:

13.2
~~~~

|image105|

.. _133:

13.3
~~~~

|image106|

Step 14 Install the soil module and water level module
------------------------------------------------------

.. _141-required-components:

14.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image107|

.. _142:

14.2
~~~~

|image108|

.. _143:

14.3
~~~~

|image109|

.. _144:

14.4
~~~~

|image110|

.. _145:

14.5
~~~~

|image111|

.. _146:

14.6
~~~~

|image112|

.. _147:

14.7
~~~~

|image113|

Step 15 Install fence
---------------------

.. _151-required-components:

15.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image114|

.. _152:

15.2
~~~~

|image115|

.. _153:

15.3
~~~~

|image116|

.. _154:

15.4
~~~~

|image117|

Step 16 Install the Buzzer and the Led Module
---------------------------------------------

.. _161-required-components:

16.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image118|

.. _162:

16.2
~~~~

|image119|

.. _163:

16.3
~~~~

|image120|

.. _164:

16.4
~~~~

|image121|

Step 17 Decorate the House
--------------------------

.. _171-required-components:

17.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image122|

.. _172:

17.2
~~~~

|image123|

.. _173:

17.3
~~~~

|image124|

Step 18 Install Solar Panel
---------------------------

.. _181-required-components:

18.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image125|

.. _182:

18.2
~~~~

|image126|

.. _183:

18.3
~~~~

|image127|

.. _184:

18.4
~~~~

|image128|

.. _185:

18.5
~~~~

Install the LED light of the solar panel into this hole.

|image129|

.. _186:

18.6
~~~~

Use a sticker to secure its wires to the wall

|image130|

.. _187:

18.7
~~~~

|image131|

.. _188:

18.8
~~~~

|image132|

.. _189:

18.9
~~~~

|image133|

.. _1810:

18.10
~~~~~

|image134|

Step 19 Install Battery Case
----------------------------

.. _191-required-components:

19.1 Required components
~~~~~~~~~~~~~~~~~~~~~~~~

|image135|

.. _192:

19.2
~~~~

Install 6 AA batteries（Not included in the kit）

|image136|

.. _193:

19.3
~~~~

|image137|

.. _194:

19.4
~~~~

|image138|

.. _5-projects:

5. Projects
===========

**Things to note before starting the projects**

   **Note on Software Environment:** If you have not yet configured the
   Arduino IDE for the ESP32 board (driver installation, library import,
   and board type selection), please refer back to the **[2. Configure
   the Arduino]** chapter before proceeding to upload any project code.

Arduino's memory can store a project at a time; updating the code erases
the previous code.

Let's learn how this smart farm works step by step through projects of
different difficulty levels.

.. |image1| image:: ./media/image001.png
.. |image2| image:: ./media/image002.png
.. |image3| image:: ./media/image003.png
.. |image4| image:: ./media/image004.png
.. |image5| image:: ./media/image006.png
.. |image6| image:: ./media/image007.png
.. |image7| image:: ./media/image008.png
.. |image8| image:: ./media/image010.png
.. |image9| image:: ./media/image011.png
.. |image10| image:: ./media/image012.png
.. |image11| image:: ./media/image013.png
.. |image12| image:: ./media/image014.png
.. |image13| image:: ./media/image015.png
.. |image14| image:: ./media/image015-1.png
.. |image15| image:: ./media/image016.png
.. |image16| image:: ./media/image017.png
.. |image17| image:: ./media/image018.png
.. |image18| image:: ./media/image019.png
.. |image19| image:: ./media/image020.png
.. |image20| image:: ./media/image021.png
.. |image21| image:: ./media/image022.png
.. |image22| image:: ./media/image023.png
.. |image23| image:: ./media/image024.png
.. |image24| image:: ./media/image025.png
.. |image25| image:: ./media/image026.png
.. |image26| image:: ./media/image027.png
.. |image27| image:: ./media/image-20250416162128859.png
.. |image28| image:: ./media/image029.png
.. |image29| image:: ./media/image030.png
.. |image30| image:: ./media/image-20250416162337896.png
.. |image31| image:: ./media/6e1caadec8b1ec99b0093200763607b6.jpg
.. |image32| image:: ./media/image-20250416162754513.png
.. |image33| image:: ./media/image033.png
.. |image34| image:: ./media/image034.png
.. |image35| image:: ./media/image035.png
.. |image36| image:: ./media/image036.png
.. |image37| image:: ./media/image037.png
.. |image38| image:: ./media/image037-1.png
.. |image39| image:: ./media/image028-1-1744850789118-1.png
.. |image40| image:: ./media/image-20250417084747308.png
.. |image41| image:: ./media/image-20250418081022882.png
.. |image42| image:: ./media/image-20250418081231084.png
.. |image43| image:: ./media/image-20250417085407205.png
.. |image44| image:: ./media/image-20250417085630662.png
.. |image45| image:: ./media/image038.png
.. |image46| image:: ./media/image039.png
.. |image47| image:: ./media/image040.png
.. |image48| image:: ./media/image041.png
.. |image49| image:: ./media/image042.png
.. |image50| image:: ./media/image043.png
.. |image51| image:: ./media/image044.png
.. |image52| image:: ./media/image045.png
.. |image53| image:: ./media/image046.png
.. |image54| image:: ./media/image047.png
.. |image55| image:: ./media/image048.png
.. |image56| image:: ./media/image049.png
.. |image57| image:: ./media/image050.png
.. |image58| image:: ./media/image051.png
.. |image59| image:: ./media/image052.png
.. |image60| image:: ./media/image053.png
.. |image61| image:: ./media/image054.png
.. |image62| image:: ./media/image055.png
.. |image63| image:: ./media/image056.png
.. |image64| image:: ./media/image057.png
.. |image65| image:: ./media/image058.png
.. |image66| image:: ./media/image059.png
.. |image67| image:: ./media/image060.png
.. |image68| image:: ./media/image061.png
.. |image69| image:: ./media/image062.png
.. |image70| image:: ./media/image063.png
.. |image71| image:: ./media/image064.png
.. |image72| image:: ./media/image065.png
.. |image73| image:: ./media/image066.png
.. |image74| image:: ./media/image067.png
.. |image75| image:: ./media/image068.png
.. |image76| image:: ./media/image069.png
.. |image77| image:: ./media/image070.png
.. |image78| image:: ./media/image071.png
.. |image79| image:: ./media/image072.png
.. |image80| image:: ./media/image073.png
.. |image81| image:: ./media/image074.png
.. |image82| image:: ./media/image075.png
.. |image83| image:: ./media/image076.png
.. |image84| image:: ./media/image077.png
.. |image85| image:: ./media/image078.png
.. |image86| image:: ./media/image079.png
.. |image87| image:: ./media/image080.png
.. |image88| image:: ./media/image081.png
.. |image89| image:: ./media/image-20250417093147856.png
.. |image90| image:: ./media/image082.png
.. |image91| image:: ./media/image083.png
.. |image92| image:: ./media/image084.png
.. |image93| image:: ./media/image085.png
.. |image94| image:: ./media/image086.png
.. |image95| image:: ./media/image087.png
.. |image96| image:: ./media/image088.png
.. |image97| image:: ./media/image-20250417093737686.png
.. |image98| image:: ./media/354e13bf130d878628f1361fdd37b997.png
.. |image99| image:: ./media/image089.png
.. |image100| image:: ./media/image090.png
.. |image101| image:: ./media/image091.png
.. |image102| image:: ./media/image092.png
.. |image103| image:: ./media/image093.png
.. |image104| image:: ./media/image094.png
.. |image105| image:: ./media/image095.png
.. |image106| image:: ./media/image096.png
.. |image107| image:: ./media/image098.png
.. |image108| image:: ./media/image099.png
.. |image109| image:: ./media/image100.png
.. |image110| image:: ./media/image-20230718085623979.png
.. |image111| image:: ./media/image-20230718085641291.png
.. |image112| image:: ./media/image-20230718085722378.png
.. |image113| image:: ./media/image-20230718085743776.png
.. |image114| image:: ./media/image-20230718085854136.png
.. |image115| image:: ./media/image-20230718085921988.png
.. |image116| image:: ./media/image-20230718085936256.png
.. |image117| image:: ./media/image-20230718085954487.png
.. |image118| image:: ./media/image-20230718090031524.png
.. |image119| image:: ./media/image-20230718090057124.png
.. |image120| image:: ./media/image-20230718090110113.png
.. |image121| image:: ./media/image-20230718090127577.png
.. |image122| image:: ./media/image-20230718090150918.png
.. |image123| image:: ./media/image-20230718090215504.png
.. |image124| image:: ./media/image-20230718090227072.png
.. |image125| image:: ./media/image128.png
.. |image126| image:: ./media/image129.png
.. |image127| image:: ./media/image130.png
.. |image128| image:: ./media/image131.png
.. |image129| image:: ./media/image132.png
.. |image130| image:: ./media/image131-1.png
.. |image131| image:: ./media/image132-1.png
.. |image132| image:: ./media/image133.png
.. |image133| image:: ./media/image135.png
.. |image134| image:: ./media/image-20230718091556561.png
.. |image135| image:: ./media/image-20230718091623881.png
.. |image136| image:: ./media/image-20250417095312061.png
.. |image137| image:: ./media/image-20230718091649546.png
.. |image138| image:: ./media/image-20230718091701966.png
