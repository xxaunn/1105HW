#include <stdio.h>
#include <stdlib.h>

double power(double, int);
void main(void) {
	int k;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
	system("Pause");
	return 0;
}

double power(double a, int b) {
	int i;
	double poweran = 1;
	for (i = 1;i <= b;i++) {
		poweran = poweran * a;
	}
	return poweran;
}