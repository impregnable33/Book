#include <stdio.h>

int main()
{
	int blanks = 0, tabs = 0, newlines = 0, c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
		else if (c == '\n')
			++newlines;
	}

	printf("Number of blanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, newlines);
}
