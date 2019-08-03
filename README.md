# ESP32 VSCode Template with C++
ESP-IDF V4.0 is required.
Brefore using template follow this:
* [Getting Started Guide for the ESP-IDF](https://github.com/espressif/esp-idf/)
# How to use it <br />
Go to your folder, name of the direcory will be name of your project. <br />
Open terminal and paste: <br />
 - `git clone https://github.com/witek117/ESP32_VS_Template .` <br />

In Visual Studio Code press Ctrl + Shift + P <br />
Select  **Tasks: Run Task**  and  **prepare**  <br />

![Tasks](https://github.com/witek117/ESP32_VS_Template/blob/master/img/tasks_list.png)

VSCode will create folder **build** in esp and x86 directories. <br />
<br />
Now you can selest **Cmake ESP**, **build ESP** and **flash ESP** from tasks list.<br />
<br />
If you have your libraries in **libs** you can test them on PC. Go to `target/x86/Src` and in `mainer.cpp` include your libraries and write some code.<br />
<br />
Now you can selest **Cmake x86** and **build x86** from tasks list. Your program will automatically  run.
