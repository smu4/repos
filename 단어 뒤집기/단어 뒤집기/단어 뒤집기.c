#include <stdio.h> 
int main(void) {
	int len = 0;
	char vocab[50];
	char temp;
	scanf("%s", vocab);

	while (vocab[len] != '\0') 
	len++;


	printf("%d\n", len);


		for (int i = 0; i < len / 2; i++) {
			temp = vocab[i];
			vocab[i] = vocab[len - (i + 1)];
			vocab[len - (i + 1)] = temp;
		}


	printf("%s", vocab);

	return 0;

}