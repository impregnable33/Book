#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > 80)
			printf("%s\n", line);

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
