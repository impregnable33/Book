#include <stdio.h>

#define MAXLINE 1000
#define N 4

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
	int c, len = 0;

	while (len < maxline && (c = getchar()) != EOF && c != '\n') {
		if (c == '\t') {
			int next = N - len % N;
			while (len < maxline && next--)
				line[len++] = ' ';
		}
		else
			line[len++] = c;
	}
	line[len] = '\0';

	return len;
}
