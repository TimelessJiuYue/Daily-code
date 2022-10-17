//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("周末\n");
//	default:
//		break;
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int x, z;
//	int y = 10;
//	scanf_s("%d", &x);
//	z = x / y;
//	printf("%d\n", z);
//
//}
//{
//	scanf_s("%d", &z);
//	int z;
//	if (z > 10 && z < 0);
//	printf("无效输入\n");
//	else if (z >= 0 && z <= 10);
//	{
//		switch (z)
//		{
//		case 10:A
//		case 9:B
//		case 8:C
//		case 7:D
//		case 6:E
//			break
//		case 5:不及格
//
//
//
//		default:
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 2000)
//	{
//		printf("敲一行代码: %d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//	printf("好offer\n");
//}
#include <stdio.h>
//int main()
//{
//	int C;
//	scanf_s("%d", &C);
//	if (C > 100 && C < 0)
//	{
//		printf("无效输入\n");
//	}
//	else
//	{
//		C = C / 10;
//	}
//	switch (C)
//	{
//	case 10:
//	case 9:
//	case 8:
//	case 7:
//	case 6:
//		printf("还行\n");
//		break;
//	case 5:
//		printf("不行\n");
//
//
//	default:
//		break;
//	}
//}
//int main()
//{
//	char 字符;
//	字符 = getchar();
//	if (字符>='a' && 字符<='z')
//	{
//		字符 -= 32;
//		printf("%c\n", 字符);
//			return 0;
//	}
//
//}
/*int main()
{
	int line = 0;
	for ( line = 0; line < 1000; line++)
	{
		printf("好offer\n");
	}
}*/
//int main()
//{
//	int i = 0;
//	while (i<=100)
//	{
//		i = i + 1;
//		printf("%d", i);
//	}
//#include <math.h>

//int main()

/* {
	int i, sum=0;
	for ( i = 0; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;

}*/
//{
	//double d = 300000, p = 6000, r = 0.01, m;
	//m = log10(p / (p - d * r)) / log10(1 + r);
	//printf("m=%5.2\n",m);
	//
//int main()
//{
	//char c1, c2;
	//c1 = 197;
	//c2 = 198;
	//printf("c1=%c,c2=%c\n", c1, c2);
	//printf("c1=%d,c2=%d\n", c1, c2);
	//return 0;
int main()
{
	char c1,c2;
	printf("请输入两个字符c1,c2;\n");
	c1 = getchar();
	c2 = getchar();
	printf("putchar输出结果:");
	putchar(c2);
	return 0;
}

