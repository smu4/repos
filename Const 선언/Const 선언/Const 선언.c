#include <stdio.h>
void main() {
	const double PI = 3.1415; //���α׷� �� ����� �ٲ� �� ���� ��� ����.
	double r;
	PI = 33.3; //���������� �� ��. ���� ����.
	scanf("%lf", &r);
	printf("circle area %f \n", r*r*PI);
	return 0;
}