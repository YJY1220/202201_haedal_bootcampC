#include <stdio.h>

int main() {

	int A, B, V;
	int day, almost, answer, howmany;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &V);

	if (A == V) {
		printf("%d", 1); 
		return 0;
	}

	day = A - B; 
	almost = V - A;
	if (almost % day) 
		howmany = (almost / day) + 1;
	else
		howmany = almost / day;

	answer = howmany + 1; 

	printf("%d\n", answer);

	return 0;
}