// https://www.youtube.com/watch?v=1_LMAgO14z0&ab_channel=ProgrammingElectronicsAcademy
// Center plate is positive and outer plate is ground
// Specify digital pin on the Arduino that the positive lead of the peizo speaker is attached

int piezoPin = 8;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // create a tone
tone(piezoPin,1000,500);
delay(1500);
}
