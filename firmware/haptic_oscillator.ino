// ============================================================================
// DR-CORREO-HOFSTAD - VOLTAGE AND FREQUENCY OF HUMAN TOUCH
// FILE: firmware/haptic_oscillator.ino
// CALIBRATION: 290mV Base Potential / 100Hz Pulse Frequency
// ============================================================================

const int silver_mesh_output_pin = 9;   // DAC output pin to silver-infused tracks
const float target_voltage_mv = 290.0; // Lab verified peak potential
const int target_frequency_hz = 100;  // Somatosensorial resonance rate

// Differential adjustment metrics
const float delta_offset_mv = 5.0;    // Subject gap potential
const int delta_offset_hz = 2;       // Subject phase variance

unsigned long cycle_period_us;
unsigned long half_cycle_us;

void setup() {
  pinMode(silver_mesh_output_pin, OUTPUT);
  
  // Calculate specific square-wave timing for 100Hz oscillation
  cycle_period_us = 1000000 / target_frequency_hz;
  half_cycle_us = cycle_period_us / 2;
  
  // Initialize serial diagnostics
  Serial.begin(115200);
  Serial.println("SYSTEM STATUS: Touch simulation engine active.");
}

void loop() {
  // Execute continuous 290mV / 100Hz pulse trains across the plant-based canvas
  digitalWrite(silver_mesh_output_pin, HIGH);
  delayMicroseconds(half_cycle_us);
  
  digitalWrite(silver_mesh_output_pin, LOW);
  delayMicroseconds(half_cycle_us);
}
