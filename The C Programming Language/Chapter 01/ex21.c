// It's a wrong code.

#include <stdio.h>

#define MAXLINE 1000
#define N 8

int get_line(char line[], int maxline);

int main(void)
{
	int len;
	char line[MAXLINE + 1];

	while ((len = get_line(line, MAXLINE)) != 0)
		printf("%s\n", line);

	return 0;
}

int get_line(char line[], int maxline)
{
	int c, len = 0, blank = 0;

	while (len < maxline && (c = getchar()) != EOF && c != '\n') {
		if (c == ' ')
			++blank;
		else if (blank != 0) {
			int tab = N - (len % N);
			if (tab <= blank) {
				line[len++] = '\t';
				blank -= tab;
			}
			while (len < maxline && blank >= N) {
				line[len++] = '\t';
				blank -= N;
			}
			while (len < maxline && blank--)
				line[len++] = ' ';
			blank = 0;
			line[len++] = c;
		}
		else
			line[len++] = c;
	}
	line[len] = '\0';

	return len;
}
