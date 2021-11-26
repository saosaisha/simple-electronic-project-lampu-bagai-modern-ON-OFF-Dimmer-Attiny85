/* Lampu Bagasi modern
 * Rangkaiannya menggunakan attiny85 digspark  
 * Agar mudah led saya gunakan led bawaan 
 * jadi tinggal tambah saklar push button
 * radal05
 * https://www.youtube.com/c/Radal05/videos
 * Jakarta 11 Nopember 2021
 */

int led = 1;
int brightness = 0;
int delayTime = 40;
int buttonState = 0;

void setup()
{
  pinMode(0, INPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(0);
    if (buttonState == HIGH) {
       analogWrite(led, 0);
       brightness = 0;
       
  } else {
    analogWrite(led, brightness);
    delay(delayTime);
    brightness++;
        
  }
  
}
