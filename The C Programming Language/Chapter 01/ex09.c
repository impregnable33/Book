#include <stdio.h>

int main()
{
	int c, blanks = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks;
		else {
			if (blanks != 0) {
				printf(" ");
				blanks = 0;
			}
			printf("%c", c);
		}
	}
}
