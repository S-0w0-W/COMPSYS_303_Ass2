/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include <system.h>

#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>
#include "sccharts.h"


int main()
{
	printf("Hello from Nios II!\n");
	int fd = 0;
	int reading = 0;

	char voidBuffer;
	fd = open(UART_NAME, O_NONBLOCK | O_RDWR);

	while(1){

		reading = read(fd, (void*)&voidBuffer,1);
		if( reading != -1){
			printf("\nCharacter ready: ");
			printf("%c", voidBuffer);
			if (voidBuffer == 'A'){
				ASense = voidBuffer;
			} else if (voidBuffer == 'V'){
				VSense = voidBuffer;
			}
		}

		write(fd, "A\n",2);




	}



  return 0;
}
