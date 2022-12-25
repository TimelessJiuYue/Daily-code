#include <stdio.h>
int main()
{
	int a[10], i, j, n;
	printf("输入十个数:");
	for (i = 1; i <= 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 1; i <= 10; i++)
		for (j = i; j <= 10; j++)
		{
			if (a[i > a[j])
			{
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	printf("该十个数升序为:");
}