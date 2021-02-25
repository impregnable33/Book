#include <stdio.h>

int main()
{
	printf("Fahrenheit Celsius\n");
	for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20)
		printf("%6d     %5.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));
}
