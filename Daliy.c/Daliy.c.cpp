#include <stdio.h>
#define N 5
void main()
{
	int i, x, top, bott, mid, loca, a[N], flag = 1, sign;
	char c;
	printf("enter data:\n");
	scanf_s("%d", &a[0]);//输入第一个数
	i = 1;
	while (i < N)//检查数是否输入完毕
	{
		scanf_s("%d", &a[i]); //输入下一个数
		if (a[i] >= a[i - 1])
			i++;//如果输入的数不小于前一个数，数的序号加一
		else
			printf("enter this number agin:\n");
	}
	printf("\n");
	for (i = 0; i < N; i++)
		printf("\n");//输出全部15个数
	printf("\n");
	while (flag)
	{
		printf("input the number to look for:");
		scanf_s("%d", &x);//输入要查找的数
		sign = 0;
		loca = 0;
		top = 0;
		bott = N - 1;
		if ((x < a[0]) || (x > a[N - 1]))
			loca = -1;//要查找的数不在正常范围内
		while ((!sign) && (top <= bott))
		{
			mid = (bott + top) / 2;//找到中间元素的下标
			if (x == a[mid])
			{
				loca = mid;
				printf("number=%d,loca=%d\n", x, loca + 1);
				sign = 1;//找到该数

			}
			else
				if (x < a[mid])
					bott = mid - 1;
				else top = mid + 1;
		}
		if (!sign || loca == -1)//意味没找到
			printf("%d not in table.\n", x);
		printf("continue(Y/N or y/n)");
		scanf_s("%c", &c);
		if (c == 'N' || c == 'n')
			flag = 0;
	}
}