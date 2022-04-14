#include <Keyboard.h>
#include ".\\keyboardCommands.h"

char payload[] = ""; // This is where the payload goes. It needs to be in bash/zsh/fish(for some reason) script format. Act according to your target. Check the payload.txt to see if something already exists.

void setup() {
  // Initialization
  Keyboard.begin();
  delay(500);

  // This uses the default shortcut to open the terminal (CTRL-ALT-t). If the host has changed the default shortcut, good luck finding it and changing it at the keyboardCommands.h
  openTerminal();
  delay(1500);

  // This is where the payload goes  
  Keyboard.print(payload);
  delay(2000);

  // According to your payload, you may want to confirm or press additional keys. These go here.
  // Check the keyboardCommands.h to see what already exists





  // If you want to close the terminal window uncomment this section.
//  Keyboard.print("exit");
//  delay(100);
//  typeKey(KEY_RETURN);

  // Closing the hid keyboard
  Keyboard.end();
}

// Not used in this project
void loop() {}
