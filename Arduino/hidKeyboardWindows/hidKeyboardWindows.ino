#include <Keyboard.h>
#include ".\\keyboardCommands.h"

char payload[] = ""; // This is where the payload goes. It needs to be in powershell script format. It is obvious that this only works on Windows targets.

void setup() {
  // Initialization
  Keyboard.begin();
  delay(500);

  windowsKey();
  delay(100);

  Keyboard.print("powershell"); // If you want to use Command Prompt instead of powershell, change this to cmd. Care: Powershell scripts are NOT always the same as Command Prompt scripts.
  delay(1000);

  typeKey(KEY_RETURN);
  delay(1500);
  
  Keyboard.print(payload);
  delay(2000);
  
  // According to your payload, you may want to confirm or press additional keys. These go here.
  // Check the keyboardCommands.h to see what already exists



  

  // If you want to close the entire window after the script is done, uncomment this part
//  Keyboard.print("exit");
//  delay(100);
//  typeKey(KEY_RETURN);

  // Closing the hid keyboard
  Keyboard.end();
}

// Not used in this project
void loop() {}
