void setup() 
{
    Serial.begin(9600); // Initialize serial communication at baud rate 9600
    // Serial.println("Hello Arduino");
}

void loop() 
{
    char read_data;

    if (Serial.available()) // Check if there is incoming serial data
    {
        read_data = Serial.read(); // Read one character from serial and store it in read_data
        Serial.print(read_data); // Print read_data to serial
    }

    delay(10); // Delay for 10ms
}
