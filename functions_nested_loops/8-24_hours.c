#include "main.h"
/**
 * jack_bauer - this function prints every minute and hour of the day
 *Return: this method returns void Nothing
 */
void jack_bauer(void)
{
	int min = 0;

	int hours = 0;

	for (hours = 0; hours <= 23; hours++)
{
	for (min = 0; min <= 59; min++)
{
	if (hours < 10)
{
	_putchar('0');
	_putchar(hours + '0');
}
	else if (hours >= 10)
{
	_putchar(hours + '0');
}
	_putchar(':');

	if (min < 10)
{
	_putchar('0');
	_putchar(min + '0');
}
	else if (min >= 10)
{
	_putchar(min + '0');
}


}

}

}
