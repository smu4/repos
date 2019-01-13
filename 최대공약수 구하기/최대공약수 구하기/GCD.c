#include <stdio.h>
int main(void) {
	int fir, sec, max, cd;

	scanf("%d %d", &fir, &sec);

	if (fir > sec)
		max = fir;
	else
		max = sec;

	for (int i = 1; i <= max; i++) {
		if (fir%i == 0 && sec%i == 0)
			cd = i;
	}

	printf("%d", cd);

}