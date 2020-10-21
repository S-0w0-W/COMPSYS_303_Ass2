# COMPSYS 303 ASSIGNMENT 2


DDD Pacemaker  -  Created by Shiyao Wang and David Wong

# Description
A pacemaker simulated on a DE2-115 Board with sensing and pacing capabilities of both the atrium and ventricle. 

The DDD pacemaker has 2 modes of functionality. More information on the 2 modes can be found [Modes](#Modes).

# Set Up

## Board Set Up
1. Connect the 12V adapter to the DE2-115 Board.
2. Connect the USB Blaster to the DE2-115 Board and the USB to a computer.
3. Connect the RS-323 to the DE2-115 Board and the USB to a computer.
4. Ensure that the RUN/PROG switch is in the RUN position.
5. Power on the DE2-115 Board by pressing the red ON/OFF button.
6. Open Quartus and program the DE2-115 board with the .sof file available on Canvas
7. Open Nios II for Eclipse and program the DE2-115 board with the DDD Pacemaker program. This can be done by right clicking the project file named **_Assignment2_** and selecting **_Run As ->  Nios II Hardware_**

## COMPSYS_303 Heart Program Set Up

Open the COMPSYS_303 Heart Program with the following settings:

+ **Baud Rate**: 115200 
+ **COM PORT**: Whichever COM PORT that is associated with the RS-323 serial port 

## Files Used
The following files are from the **_Prebuilt Nios_** folder found on Canvas

+ cs303.sof
+ nios2_system.sopcinfo


# Modes

The DDD Pacemaker can operate in 2 different modes. By default, DDD Pacemaker will be in Mode 2. The active mode will be displayed through a Red LED (LEDR[0]). When the LED is on, the pacemaker is in Mode 1 and when the LED is off, the pacemaker is in Mode 2.

Changing the mode of the pacemaker is done through the use of a switch(SW[0]). To access Mode 1, put SW[0] in the UP position and to access Mode 2, put SW[0] in the DOWN position

  
# Mode 1
In Mode 1, the user is able to simulate the natural beating of the heart through pressing either Key[1] or Key[0]. Key[1] simulates the natural beating of the atrium and Key[0] simulates the natural beating of the ventricle. 

Whenever there is an atrial or ventricular event occuring, a corresponding LED will light up indicating that the event has occured as shown in the table below:

| Event          | LED     |
| -----------   | -----------   |
| Pace of Atrium             | LEDG[7]|
| Pacing of the Ventricle             |  LEDG[6]      |
| Natural beating of the Atrium             |  LEDG[1]      |
| Natural beating of the Ventricle            |  LEDG[0]      |

# Mode 2
Mode 2 introduces a virtual heart that communicates with the DE2-115 board over non-blocking UART. In this mode, the natural beats of the heart is sent from the virtual heart to the pacemaker and the pacing of the pacemaker would be sent back to the virtual heart. -+
