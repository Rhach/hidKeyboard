void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void twoKeys(int key1, int key2){
  Keyboard.press(key1);
  delay(50);
  Keyboard.press(key2);
  delay(50);
  Keyboard.release(key2);
  delay(50);
  Keyboard.releaseAll();
}

void threeKeys(int key1, int key2, int key3){
  Keyboard.press(key1);
  delay(10);
  Keyboard.press(key2);
  delay(50);
  Keyboard.press(key3);
  delay(50);
  Keyboard.release(key3);
  delay(50);
  Keyboard.releaseAll();
}

void windowsKey(){
  twoKeys(KEY_LEFT_CTRL, KEY_ESC);
}

// From here on, these are "special" commands, used according to the payload.
// Keep in mind that there are NO SANITY CHECKS. You are expected to know wtf you are doing at this point.

// Pressing enter and waiting for the duration
void pressConfirm(int duration){
  typeKey(KEY_RETURN);
  delay(duration);
}

// Pressing a specific character (i.e.: 'y'), then enter and finally waiting for the duration.
void pressConfirm(char charUsed, int duration){
  Keyboard.press(charUsed);
  delay(50);
  Keyboard.release(charUsed);
  delay(50);
  typeKey(KEY_RETURN);
  delay(duration);
}

// Alt-Tabbing, to... you know, change tabs. Once.
void altTab(){
  Keyboard.press(KEY_LEFT_ALT);
  delay(50);
  Keyboard.press(KEY_TAB);
  Keyboard.release(KEY_TAB);
  delay(10);
  Keyboard.releaseAll();
}
