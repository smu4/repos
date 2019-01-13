#include <stdio.h>
int main(void) {

	int max;
	int len = 0;
	char voca[50];
	scanf("%s", voca);

	while (voca[len] != '\0')
		len++;


	max = voca[0];
	for (int i = 1; i < len; i++)
		if (max < voca[i])
			max = voca[i];

	printf("%c", max);

}