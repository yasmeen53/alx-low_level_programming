#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - Function that prints time from 00:00 to 24:00.
 *
 * Return: No return.
*/

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
