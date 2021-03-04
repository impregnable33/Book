#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char line[], int len);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s\n", line);
	}

	return 0;
}

int get_line(char line[], int maxline)
{
	int c, len = 0;
	
	for (len = 0; len < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++len)
		line[len] = c;
	line[len] = '\0';

	return len;
}

void reverse(char line[], int len)
{
	int half = len / 2;
	for (int i = 0; i < half; ++i) {
		char temp = line[i];
		line[i] = line[len - 1 - i];
		line[len - 1 - i] = temp;
	}
}
