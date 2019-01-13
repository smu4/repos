#include <stdio.h>
int main(void) {
	char str[50];
	int len = 0;
	scanf("%s", str);

	while (str[len] != '\0')
		len++;

	printf("%d", len);

	return 0;
}