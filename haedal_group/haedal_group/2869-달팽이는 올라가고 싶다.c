#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, v, d;
	scanf("%d %d %d", &a, &b, &v);

	d = (v - b - 1) / (a - b) + 1;
	printf("%d", d);


	return 0;
}