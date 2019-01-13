#include <stdio.h> 
int main(void) {
	int fir, sec, r, seat, a, b;
	scanf("%d %d", &fir, &sec);

	if (sec > fir) {
		seat = sec;
		sec = fir;
		fir = seat;
	}

	r = fir % sec;
	b = sec;
	a = 1;
	while (r) {
		a = b % r;
		b = r;
		r = a;
		
		
	}
	
	printf("%d", b);

}