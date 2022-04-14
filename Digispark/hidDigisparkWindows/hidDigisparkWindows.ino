// You may notice that using an attiny85 (I prefer to just call it Digispark) is way faster and easier. That is because it is (or that I am stupid and have not configured the Arduino equivallent properly. Probably the second, but still...)
// You do need however to import the DigiKeyboard library. Go to: File -> Preferences -> Additional Boards Manager URLs and paste this: https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
// After that is done, the board will appear as an option at the Tools -> Board -> Digistump AVR menu.
// It works with this device, though you should NOT buy it from Amazon: https://www.amazon.com/Attiny85-Digispark-kickstarter-Development-Module/dp/B07V6X3NBP/ (NOT an affiliate link. Also, if you are funding Bezos' anti-worker policies, you should be ashamed of yourself.)

#include "DigiKeyboard.h"

char payload[] = ""; // This is where the payload goes. It needs to be in powershell script format. It is obvious that this only works on Windows targets.

void setup() {
    DigiKeyboard.sendKeyStroke(0,128);
    DigiKeyboard.println("powershell"); // If you want to use Command Prompt instead of powershell, change this to cmd. Care: Powershell scripts are NOT always the same as Command Prompt scripts.
    DigiKeyboard.delay(1000);
    DigiKeyboard.println(payload);
    // Depending on the size of your payload, you may have to wait. Change this part below accordingly.
    DigiKeyboard.delay(10000);

    // If you want to close the entire window after the script is done, uncomment this part
//    DigiKeyboard.println("exit");
}

// Not used in this project
void loop() {}
