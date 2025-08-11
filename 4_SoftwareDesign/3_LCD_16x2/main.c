#include <reg51.h>
#include "main.h"
#include "timer.h"
#include "lcd.h"

void main(void)
{
	lcd_init();
	
			delay_ms(1000);
			lcd_print_string("Hello world!");
	
	while(1)
	{
		// running;
			delay_ms(1000);
			scroll_string("This is a 16x2 LCD driver for AT89S52 controller",200);
			delay_ms(1000);
			lcd_print_string("Thank you!");
	}

}