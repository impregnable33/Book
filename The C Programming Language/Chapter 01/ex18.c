#include <stdbool.h>
#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];

	while (true) {
		int len = get_line(line, MAXLINE);

		if (len == 0)
			break;
		
		if (len > 0)
			printf("%s\n", line);
	}

	return 0;
}

int get_line(char line[], int maxline)
{
	bool blank = false, tab = false;
	int c, len = 0;

	while ((c = getchar()) == ' ' || c == '\t')
		;
	if (c == '\n')
		return -1;
	else if (c == EOF)
		return 0;
	else
		line[len++] = c;

	while (len < maxline - 1 && (c = getchar()) != EOF && c != '\n') {
		if (c == ' ') {
			if (!blank) {
				blank = true;
				line[len++] = c;
			}
		}
		else if (c == '\t') {
			if (!tab) {
				tab = true;
				line[len++] = c;
			}
		}
		else {
			blank = tab = false;
			line[len++] = c;
		}
	}
	line[len] = '\0';

	if (len == maxline - 1 && c != '\n')
		while ((c = getchar()) != EOF && c != '\n')
			++len;

	return len;
}
