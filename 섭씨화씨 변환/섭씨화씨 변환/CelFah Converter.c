#include <stdio.h>
double celtofah(double tem) {
	return tem * 1.8 + 32;
}

double fahtocel(double tem) {
	return (tem - 32)/1.8;
}

int main(void) {
	int answer;
	double tem;
	printf("������ 1, ȭ���� 2 : ");
	scanf("%d", &answer);

	if (answer == 1)
	{
		scanf("%lf", &tem);
		printf("%f", celtofah(tem));
	}
	else
	{
		scanf("%lf", &tem);
		printf("%f", fahtocel(tem));
	}

	return 0;
}