#include <stdbool.h>
#include <stdio.h>

int main()
{
	bool in_word = false;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (in_word)
				printf("\n");
			in_word = false;
		}
		else {
			in_word = true;
			printf("*");
		}
	}
}
