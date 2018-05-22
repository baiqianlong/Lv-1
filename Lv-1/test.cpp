#include <stdio.h>
int a;
//	int i = 9 * 16 * 16 * 16 + 9 * 16 * 16 + 9 * 16 + 9;
	//i = i - 0x9999;
int main()
{
	int i;
	scanf_s("%d", &i);
	printf("%d ", i / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10);
	printf("%d ", i / 10 / 10 / 10 / 10 / 10 / 10 % 10);
	printf("%d ", i / 10 / 10 / 10 / 10 / 10 % 10);
	printf("%d ", i / 10 / 10 / 10 / 10 % 10);
	printf("%d ", i / 10 / 10 / 10 % 10);
	printf("%d ", i / 10 / 10 % 10);
	printf("%d ", i/10 % 10);
	printf("%d", i % 10);

}