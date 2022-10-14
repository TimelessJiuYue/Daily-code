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
int main()
{
	char 字符;
	字符 = getchar();
	if (字符>='a' && 字符<='z')
	{
		字符 -= 32;
		printf("%c\n", 字符);
			return 0;
	}

}