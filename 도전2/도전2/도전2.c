#include <stdio.h>
void main() {
	int dec;
	int bin[10];
	int i = 0;
	int temp;

	scanf("%d", &dec);
	
	while (dec>=1) {            //2���� ��ȯ
		bin[i] = dec % 2;
		dec = dec / 2;
		i++;
	}

	while (i != 0) {
		printf("%d", bin[i - 1]);
		i--;
	}

	/*
	//printf("%d\n", i);       2������ ����

	int *fptr = &bin[0];
	int *bptr = &bin[i-1];

	for (int a = 0; a < i / 2; a++) {                //�迭 ������
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;

		*fptr++;
		*bptr--;
	}

	for (int a = 0; a<i; a++)
		printf("%d", bin[a]);
		*/
}