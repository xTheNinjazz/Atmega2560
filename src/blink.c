#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <util/delay.h>

int main()
{
    /*--------------------------------------
     * Initialisierung der Ports
     * ------------------------------------- */

    /*--------------------------------------
     * Main - Loop
     * ------------------------------------- */

    PORTA = 0xFF;
    DDRA  = 0xFF;
    while(1) {
        for(int i = 0; i < 8; i++){
            PORTA = 0x01<<i;
            _delay_ms(1000);
        }

    }

}
