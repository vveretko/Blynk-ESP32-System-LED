## Introduction
This project is a quick start tutorial on connecting the ESP32 board to the Blynk IoT app and controlling a blinking LED through the app. The ESP32 is a powerful microcontroller with built-in Wi-Fi and Bluetooth capabilities, and Blynk is a popular platform for building Internet of Things (IoT) applications.

The project involves uploading a code to the ESP32 board using the Arduino IDE and connecting it to the Blynk IoT app. The code will blink an LED connected to a GPIO pin on the ESP32 board, and the app will allow the user to control the LED by pressing a button.

This project is a great introduction to the world of IoT and can be easily expanded to include other sensors and actuators. With the ESP32 and Blynk, you can build a wide range of IoT projects, from home automation to remote monitoring and control of devices.
## 1. Components
In this project we used:
1. ESP32 DEVKIT board
2. USB cable

## 2. Prepare your Hardware before flashing
Connect your device to computers` USB port
_Your board needs to be connected with a data USB cable (charge-only cables will not work). Make sure the cable is fully inserted in the port on each end_
## 3. Prepare required software
1. Install  [Arduino IDE]([https://docs.arduino.cc/software/ide-v1/tutorials/Windows](https://www.arduino.cc/en/software#future-version-of-the-arduino-ide)) or [PlatformIO](https://platformio.org/install)
2. Install [Blynk library](https://docs.blynk.io/en/blynk-library-firmware-api/installation) for your IDE
3. Select the correct board and port in your IDE settings
4. Install the [ESP32 board support](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/) if you are using Arduino IDE
5. Create a new sketch
## 5. Prepare the Firmware and upload it to your device
Now you need to include TemplateID, AuthToken (unique identifier of your device) and WiFi credentials to the sketch. Follow next steps to do it.
1. Click on the Activate device action in Template Home tab (this tab should open automatically once you've pressed the Use Blueprint button)
2. Enter the Wi-Fi credentials your device will use
3. Copy the sketch and paste it to the IDE
4. Flash your device
5. The device should open automatically


_Check Troubleshooting section if you can't upload the firmware_
## Next steps after the device is activated
1. Explore the Blynk [Web Console](blynk.cloud) and [Blynk IoT app](https://docs.blynk.io/en/downloads/blynk-apps-for-ios-and-android), try controlling your device from both
2. Explore [Blynk Documentation](https://docs.blynk.io/en/getting-started/using-virtual-pins-to-control-physical-devices) and learn how to work with Virtual Pins
3. Improve the code for your needs
4. Add more devices
## Troubleshooting
1. Make sure you have the latest Blynk Library installed
2. Check that all the dependencies and configurations are correct
3. Check your sketch for errors. Click the Verify button to compile your sketch without uploading it
4. Check your board and port selections
5. Check your connections. Your board needs to be connected with a data USB cable (charge-only cables will not work). Make sure the cable is fully inserted in the port on each end. Try a different USB cable, and avoid hubs and other adapters if possible. Remove connections to the board pins, especially the 0 (RX) and 1 (TX) digital pins.
6. Check that your boards and libraries are up to date

## Help
[Blynk Troubleshooting guide](https://docs.blynk.io/en/troubleshooting/general-issues)

[Documentation](https://docs.blynk.io/en/)

Developer contact: vitaliy@blynk.cc

[Blueprint repository](https://github.com/vveretko/Blynk-ESP32-System-LED)

## Congratulations!
Congratulations! You have successfully connected a Wroom ESP32 to Blynk and controlled the built-in. By following this tutorial, you have gained experience working with the ESP32, Blynk app, and IoT applications. You can now expand on this project to incorporate real sensors or controllers.
