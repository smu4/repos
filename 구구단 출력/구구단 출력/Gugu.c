#include <stdio.h>
int Gugu(int num) {
	
	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", num, i, num*i);
	}
}




int main() {
	int fir, sec, seat;
	printf("몇 단 출력? : ");
	scanf("%d %d", &fir, &sec);

	if (fir > sec) {
		seat = sec;
		sec = fir;
		fir = seat;
	}

	Gugu(fir);
	printf("\n");
	Gugu(sec);
	
}