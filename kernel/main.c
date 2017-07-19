#include <hal.h>
#include <keyboard.h>
#include <stdio.h>

void kmain()
{
	// screen
	terminal_install(1, WHITE, BLACK);
	hal_install();
	printf("\f");
	
	// interrupts
	outb(0x21, 0xfd);
	outb(0xa1, 0xff);
	enable();
	keyboard_install();
}
