/*
    Project name : ESP8266 Hall magnetic sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-hall-magnetic-sensor
*/

const int hallSensorPin = D1; // GPIO pin connected to Hall sensor OUT

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(hallSensorPin, INPUT_PULLUP); // Set Hall sensor pin as input with internal pull-up resistor
}

void loop() {
  int sensorValue = digitalRead(hallSensorPin); // Read Hall sensor state
  
  // Print the sensor value to Serial Monitor
  if (sensorValue == HIGH) {
    Serial.println("Magnetic field detected!");
  } else {
    Serial.println("No magnetic field detected");
  }

  delay(500); // Delay before the next reading
}
