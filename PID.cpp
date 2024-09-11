int motorPin = 10;

float setpoint = 100;
float input = 0;
float output = 0;

float error = 0;
float previousError = 0;
float integral = 0;
float derivative = 0;
float dt = 0.05;

float prop_gain = 1.5;
float int_gain = 0.2;
float der_gain = 0.07;

float alpha = 0.15;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  input = analogRead(A2);

  error = setpoint - input;

  integral += error * dt;
  integral = constrain(integral, -100, 100);

  derivative = (error - previousError) / dt;

  output = (prop_gain * error) + (int_gain * integral) + (der_gain * derivative);

  output = exponentialSmoothing(output, previousError, alpha);

  output = constrain(output, 0, 255);

  analogWrite(motorPin, output);

  previousError = error;

  Serial.print("input: "); Serial.print(input);
  Serial.print(" output: "); Serial.println(output);

  delay(dt * 1000);
}

float exponentialSmoothing(float currentOutput, float prevOutput, float alpha) {
  return alpha * currentOutput + (1 - alpha) * prevOutput;
}
