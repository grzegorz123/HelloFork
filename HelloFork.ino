/*
* Przykład szkicu Arduino HelloFork
* Dodaj nazwę swojego konta w GitHub i żądanie zmian do projektu
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Dodaj swoją nazwę GitHub aby sprawdzić żądanie zmian");
  Serial.println("Witaj Github od:");
  Serial.println("@TwojaNazwa1");
  Serial.println("@TwojaNazwa2");
  Serial.println("@TwojaNazwaGitHub");
}
