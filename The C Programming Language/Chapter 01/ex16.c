#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len, max = 0;
	char line[MAXLINE], longest[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}

	if (max > 0)
		printf("string: %s, length: %d\n", longest, max);

	return 0;
}

int get_line(char line[], int maxline)
{
	int c, len = 0;
	
	for (len = 0; len < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++len)
		line[len] = c;
	line[len] = '\0';
	
	if (len == maxline - 1 && c != '\n')
		while ((c = getchar()) != EOF && c != '\n')
			++len;

	return len;
}

void copy(char to[], char from[])
{
	for (int i = 0; (to[i] = from[i]) != '\0'; ++i)
		;
}
