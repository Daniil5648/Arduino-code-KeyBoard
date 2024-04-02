// Import the necessary library for keypad functionality
// #include <Keypad.h>
// #include <Keyboard.h>

// Define the number of rows and columns in the keypad matrix
const byte ROWS = 4;
const byte COLS = 4;

// Define the layout of the keypad matrix
char MatrixKeyPad[ROWS][COLS] = {
  {'1', '4', '7', '='},
  {'2', '5', '8', '0'},
  {'3', '6', '9', '.'},
  {'-', '+', '/', '*'}
};

// Define the pin configurations for the rows and columns of the keypad
byte rowPins[ROWS] = {6, 7, 8, 9};
byte colPins[COLS] = {5, 4, 3, 2};

// Initialize the Keypad object with the defined matrix and pin configurations
Keypad customKeypad = Keypad(makeKeymap(MatrixKeyPad), rowPins, colPins, ROWS, COLS);

// Setup function runs once when the Arduino is powered on or reset
void setup() {
  // Initialize serial communication at a baud rate of 9600 bits per second
  Serial.begin(9600);
}

// Loop function runs continuously as long as the Arduino is powered on
void loop() {
  // Read a key press from the keypad
  char customKey = customKeypad.getKey();

  // If a key is pressed, print it to the serial monitor
  if (customKey){
    Serial.println(customKey);
  }
}
