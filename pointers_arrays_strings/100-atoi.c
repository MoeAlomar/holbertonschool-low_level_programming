#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Description: This function converts a string to an integer,
 * considering all the '-' and '+' signs that precede the number.
 * If no number is found, it returns 0. It also checks for overflow
 * and returns INT_MAX or INT_MIN accordingly.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;

	/* Process the string until a digit is encountered.
	 * Count every '-' and '+' sign before the first digit.
	 */
	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	/* If no digit is found, return 0 */
	if (!(s[i] >= '0' && s[i] <= '9'))
		return (0);

	/* Convert the sequence of digit characters into an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		/* Check for overflow before updating the result */
		if (result > (INT_MAX - digit) / 10)
			return ((sign == 1) ? INT_MAX : INT_MIN);
		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}
