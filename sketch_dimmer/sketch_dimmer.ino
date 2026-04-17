// Change voltage per LED using potentiometr
#define pot_pin A0 // Potentiometr pin
#define led_pin 3  // Light pin

int pot_val = 0;

void setup() 
{
  pinMode(led_pin, OUTPUT); // Initialize LED pin
}

void loop()
{
  pot_val = analogRead(pot_pin);     // Read analog data

  analogWrite(led_pin, pot_val / 4); // Write analog data

  delay(10);                         // Timeout 10 milisec
}