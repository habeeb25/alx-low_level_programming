#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 * @void: returns nothing
*/

void jack_bauer(void)
{
	int ht, ho, mt, mo;

	for (ht = 0; ht <= 2; ht++)
	{
		for (ho = 0; ho <= 9; ho++)
		{
			if ((ht <= 1 && ho <= 9) || (ht == 2 && ho <= 3))
				for (mt = 0; mt <= 5; mt++)
				{
					for (mo = 0; mo <= 9; mo++)
					{
						_putchar('0' + ht);
						_putchar('0' + ho);
						_putchar(':');
						_putchar('0' + mt);
						_putchar('0' + mo);
						_putchar('\n');

				}
			}
		}
	}
}
