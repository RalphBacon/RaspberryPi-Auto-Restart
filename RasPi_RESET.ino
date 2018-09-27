/*
   Raspberry Pi rebooter. If the RasPi has power but is not running
   (determined by inspecting one of its GPIO pins that should be HIGH)
   then after 30 seconds (in case the Pi is in the process of booting)
   we pull the PEN pin LOW for a second then release it. That should
   reboot the Pi.

   Just to be safe, the PEN to ATtiny85 connection should be via a diode
   (I'm using a 1N14148) to prevent 5v being presented to the PEN pin.
   When the pin goes low (thereby grounding the PEN pin) it will conduct
   but not present any voltage to the PEN pin itself.

   On the Pi, edit the RC.local file and enter the following lines. Note
   you must edit the file in SUDO mode like this:

   Open a Terminal Window on your RasPi and enter:
   cd /etc
   sudo nano RC.local

   Once in the editor add the following lines just before the exit 0
   # We want to use GPIO pin 26 please
   echo 26 > /sys/class/gpio/export

   # The pin mode of this pin is an OUTPUT pin
   echo out > /sys/class/gpio/gpio26/direction

   # Send the pin value to HIGH (=1)
   echo 1 > /sys/class/gpio/gpio26/value

*/
#define PiHi 0
#define PEN 1

// Demo LED to show we're going to reboot the Pi
#define Indicator 2

// ------------------------------------------------------------------
// Simple setup routine to read the PI's GPIO pin, set the output etc
// ------------------------------------------------------------------
void setup() {
  pinMode(PiHi, INPUT);

  // Set the 'reset' pin HIGH before the mode to avoid glitches
  // Remember this pin is connected via a diode to PEN (anode to
  // PEN, cathode to Arduino) GPIO 1 ---|<---- PEN
  digitalWrite(PEN, HIGH);
  pinMode(PEN, OUTPUT);

  // Just for debugging and demo purposes show the LED status
  pinMode(Indicator, OUTPUT);
  digitalWrite(Indicator, LOW);
}

// ------------------------------------------------------------------
// This loop check to make sure Pi is UP
// ------------------------------------------------------------------
void loop() {
  static unsigned int loopDelay = 0;

  // Read the RasPi's output pin - should be HIGH if running
  if (digitalRead(PiHi) == 0) {

    // Only do something if the Pi has not had this pin HIGH for X seconds
    // to allow it time to boot up or we could be constantly resetting it!
    if (loopDelay > 29) {
      digitalWrite(PEN, LOW);
      delay(1000);
      digitalWrite(PEN, HIGH);
      loopDelay = 0;
      digitalWrite(Indicator, LOW);
    }
    else {
      // Start the countdown to a reset
      digitalWrite(Indicator, HIGH);
      loopDelay++;
    }
  }
  else {
    // Reset any part-delay we've counted
    loopDelay = 0;
    digitalWrite(Indicator, LOW);
  }

  // Loops every second, fine for demo
  delay(1000);
}
