.. _3-set-the-angle-of-the-servo:

3. Set the Angle of the Servo
=============================

In the next lesson, we will assemble this smart farm kit. Before
assembling the servo to the kit, we need to **set its angle to 165°**
(with a 15° buffer reserved at each end) so that it will work as
expected and avoid mechanical damage.

   **⚠ WARNING — Read Before Proceeding:**

   1. **Do NOT set the servo to 180°.** The door mechanism does not
      require the full 0°–180° range. Setting it to the extreme end will
      cause the servo to press against the mechanical stop, which may
      overheat and permanently damage the servo motor.

   2. **Keep the board powered during installation.** When the servo is
      powered and holding its angle, do NOT force the gear or door by
      hand. If the board is unpowered, the servo has no holding torque,
      and manually rotating the gear will shift the calibrated angle,
      causing misalignment after power-on.

   3. **Do NOT use brute force.** If the door does not move smoothly,
      stop immediately and check the assembly. Forcing it will strip the
      servo gears.

|image1|

1. Connect the servo to the **pin io26** of the ESP32 PLUS board. Note:
   The brown, red and orange wire of the servo are respectively attached
   to GND(G), 5V(V) and **Pin io26.**

|image2|

1. Connect the ESP32 PLUS board to the computer.

|image3|

1. Make sure you have installed the **ESP32Servo.h** library for the
   Arduino IDE. If not, please refer to the previous section to install
   it.

|image4|

1. Open the **window_servo** code provided in our tutorial package with
   Arduino IDE.

..

   **Note:** The provided ``window_servo`` code sets the servo to
   **165°** (not 180°). This reserves a 15° mechanical buffer to prevent
   collision at the end stop. The working range of the door is 15°–165°.

|image5|

1. Click on **Tools**, select "**ESP32 Dev Module**" for the board type,
   and select **COM-XX** for Port as shown in the Device Manager.

|image6|

1. Click |image7| to upload. After uploading is complete, the servo will
   move to **165°** and hold that position.

..

   **Important:** Keep the board powered and the servo holding at 165°
   while you proceed to the assembly step. Do **not** disconnect power
   or manually move the gear until the door panel is fully installed.

|image8|

.. |image1| image:: ./media/image-20250416152950497.png
.. |image2| image:: ./media/image028-1.png
.. |image3| image:: ./media/image-20250416153731709.png
.. |image4| image:: ./media/3bd9304d-73d9-4fc3-9e59-50c55f947960.png
.. |image5| image:: ./media/image-20250416154133013.png
.. |image6| image:: ./media/51454125.png
.. |image7| image:: ./media/image-20250416154532804.png
.. |image8| image:: ./media/image-20250416155301751.png
