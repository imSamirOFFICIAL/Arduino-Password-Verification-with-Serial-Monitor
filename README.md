# Password Verification with Serial Monitor (Virtual Terminal) using Arduino Uno in Proteus
This experiment demonstrates how to implement a password check functionality using an Arduino board and simulate it in Proteus using the Virtual Terminal component. The experiment showcases the process of inputting a password through the Virtual Terminal and verifying it against a predefined password in the Arduino code.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/243909805-7dfb607f-f92c-40a1-89bb-071e7c3796dd.png"width=40% height=40%></p>

When the predefined password is written in serial monitor, it will print "Thank you for logging in". Otherwise, it will print "No access".

# How to run this?
Now, first clone the repository. Then, inside the `Experiment` folder, open the `Experiment.ino` file in the Arduino IDE. If the `Arduino IDE` is opening for the first time on your operating system, after opening the Experiment.ino file, go to `File` > `Preferences` > tick the `Compile` option beside `Show verbose output during`. Then, click `OK`. (No need to repeat this task from the second time onwards.)

Now, click the `Verify` button located in the upper left corner, and from the output, copy the following path: `C:\Users\Username\AppData\Local\Temp\arduino\sketches\XXXXXXXXXX/Experiment.ino.elf`.

![Screenshot](https://github.com/imSamirOFFICIAL/ArduinoPasswordVerificationWithSerialMonitor/assets/52858312/88c6f022-fea0-44ff-9d89-81cbed3d878e)

Next, open the `Experiment.pdsprj` file in Proteus. Double-click on `Arduino Uno` and paste the `...ino.elf` link into the `Program File` field. Then, click `OK`.

![Screenshot](https://github.com/imSamirOFFICIAL/ArduinoPasswordVerificationWithSerialMonitor/assets/52858312/2268bb67-685c-4327-abb8-0d8ec438eb5c)


Boom! Everything is set up properly. Now, just click the `Run` button located in the bottom left corner and simulate the experiment.

After running the simulation, a Virtual Monitor will be popup. Click on it and type the password. If you type wrong password then it will show "No access" and if you type right password then it will show "Thank you for logging in". Remember if the "Echo Typed Characters" is turned off, then what you are typing on Virtual Monitor will not show on the display. So, don't panic, just type.

# Note
After running the simulation, a `Virtual Monitor` will pop up. Click on it and type the password. There is no need to press the `Enter` button on the keyboard after typing the password. If you type the wrong password, it will display `No access`, and if you type the correct password, it will show `Thank you for logging in`. Remember, if the `Echo Typed Characters` option is turned off, what you type on the Virtual Monitor will not be shown on the display. So, don't panic, just type.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/244093001-c516939b-ffa4-4a50-8755-c3ae91fe81f8.png"></p>
