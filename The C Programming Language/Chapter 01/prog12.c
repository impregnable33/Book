#include <stdbool.h>
#include <stdio.h>

// count lines, words, and characters in input
int main()
{
	bool in_word = false;
	int c, nl = 0, nw = 0, nc = 0;

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			in_word = false;
		else if (!in_word) {
			in_word = true;
			++nw;
		}
	}

	printf("%d %d %d\n", nl, nw, nc);
}
