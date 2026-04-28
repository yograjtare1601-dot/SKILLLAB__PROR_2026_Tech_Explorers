#define NUM_LEDS 5
int ledPins[NUM_LEDS] = {5, 6, 7, 8, 9};

#define VRX 26
#define SW 17
#define BUZZER 18

#define LEFT_TH 300
#define RIGHT_TH 700
#define CENTER_LOW 400
#define CENTER_HIGH 600

#define PATTERN_LENGTH 4

int pattern[PATTERN_LENGTH];
int stepIndex = 0;
int currentLED = 0;

bool readyMove = true;

int showDelay = 500;
int score = 0;

// 🔹 OFF all LEDs
void allOff() {
  for (int i = 0; i < NUM_LEDS; i++)
    digitalWrite(ledPins[i], LOW);
}

// 🔹 Show pattern
void showPattern() {
  Serial.println("\nShowing Pattern...");

  for (int i = 0; i < PATTERN_LENGTH; i++) {
    digitalWrite(ledPins[pattern[i]], HIGH);
    delay(showDelay);
    digitalWrite(ledPins[pattern[i]], LOW);
    delay(showDelay / 2);
  }

  Serial.println("Repeat the pattern!");
}

// 🔹 Cursor
void showCursor() {
  allOff();
  digitalWrite(ledPins[currentLED], HIGH);
}

// 🔹 Lose effect
void loseEffect() {
  digitalWrite(BUZZER, HIGH);

  for (int k = 0; k < 2; k++) {
    allOff();
    delay(150);
    for (int i = 0; i < NUM_LEDS; i++)
      digitalWrite(ledPins[i], HIGH);
    delay(150);
  }

  digitalWrite(BUZZER, LOW);
}

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < NUM_LEDS; i++)
    pinMode(ledPins[i], OUTPUT);

  pinMode(SW, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);

  randomSeed(analogRead(26));

  Serial.println("Press button to start game...");
}

void loop() {

  // 🔘 WAIT FOR START
  if (digitalRead(SW) == 0) {

    delay(50);
    while (digitalRead(SW) == 0); // wait release

    score = 0;
    showDelay = 500;

    Serial.println("\n🎮 Game Started!");

    while (true) {

      Serial.print("\n--- Round ");
      Serial.print(score + 1);
      Serial.println(" ---");

      // 🎲 Generate pattern
      for (int i = 0; i < PATTERN_LENGTH; i++)
        pattern[i] = random(0, NUM_LEDS);

      showPattern();

      stepIndex = 0;
      currentLED = 0;

      while (stepIndex < PATTERN_LENGTH) {

        int x = analogRead(VRX);

        if (x > CENTER_LOW && x < CENTER_HIGH)
          readyMove = true;

        if (x < LEFT_TH && readyMove) {
          currentLED--;
          if (currentLED < 0) currentLED = 0;
          readyMove = false;
        }

        else if (x > RIGHT_TH && readyMove) {
          currentLED++;
          if (currentLED > NUM_LEDS - 1) currentLED = NUM_LEDS - 1;
          readyMove = false;
        }

        showCursor();

        // 🔘 CONFIRM
        if (digitalRead(SW) == 0) {

          delay(50);
          while (digitalRead(SW) == 0);

          Serial.print("Input: ");
          Serial.print(currentLED);
          Serial.print(" | Expected: ");
          Serial.println(pattern[stepIndex]);

          if (currentLED == pattern[stepIndex]) {
            digitalWrite(ledPins[currentLED], HIGH);
            delay(300);
            stepIndex++;
          } else {
            loseEffect();

            Serial.println("\n❌ WRONG!");
            Serial.print("🏁 Final Score: ");
            Serial.println(score);
            Serial.println("Hold button to restart...\n");

            delay(1000);
            return;
          }
        }

        delay(50);
      }

      // ✅ Correct round
      score++;

      Serial.println("✅ Correct!");
      Serial.print("🏆 Score: ");
      Serial.println(score);

      // 🎉 Increase difficulty
      allOff();
      delay(500);

      showDelay -= 40;
      if (showDelay < 120) showDelay = 120;
    }
  }
}