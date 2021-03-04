#include <stdio.h>

double to_celsius(double fahrenheit);

int main()
{
	for (double fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20)
		printf("%3.0f %6.1f\n", fahrenheit, to_celsius(fahrenheit));
}

double to_celsius(double fahrenheit)
{
	return (5.0 / 9.0) * (fahrenheit - 32.0);
}
