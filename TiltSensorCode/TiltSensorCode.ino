#define TILT_SENSOR_PIN 5 // Pin to which the tilt sensor is connected
#define LED_PIN 6 // Pin to which the LED is connected

void setup() {
  pinMode(TILT_SENSOR_PIN, INPUT); // Set the tilt sensor pin as an input
  pinMode(LED_PIN, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600);
}

void loop() {
  bool state = digitalRead(TILT_SENSOR_PIN); //Write the tilt sensor status to a variable
  Serial.println("State: " + String(state));
  digitalWrite(LED_PIN, !state); //Set the LED status to be inverted to the sensor status using “!”
  delay(100); //Add a small delay for stability
}