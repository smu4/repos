#include <stdio.h>
void main() {
	char word[100];
	int len=0;
	scanf("%s", word);
	int cnt=0;

	while (word[len] != 0)
		len++;

	//printf("%d", len);

	char *fbpt = &word[0];
	char *bptr = &word[len - 1];


	for (int i = 0; i < len / 2; i++) {
		if (*(fbpt + i) == *(bptr - i))
			cnt++;
	}

	if (cnt == len / 2)
		printf("회문입니다");
	else
		printf("아닙니다");

}