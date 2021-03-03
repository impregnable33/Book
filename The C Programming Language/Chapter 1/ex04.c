#include <stdio.h>

int main()
{
	for (int celsius = 0; celsius <= 300; celsius += 20)
		printf("%3d %6d\n", celsius, 9 * celsius / 5 + 32);
}
