#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // put your setup code here, to run once:
  DDRB |= (1 << DDB7);

  while (1)
  {
    // put your main code here, to run repeatedly:
    PORTB ^= (1 << 7);
    _delay_ms(500);
  }
}