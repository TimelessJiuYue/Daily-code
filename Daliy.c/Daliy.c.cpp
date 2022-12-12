#include <stdio.h>
void menu()
{
	printf("********************************************\n");
	printf("****          请输入选项编号(0-5)       ****\n");
	printf("********************************************\n");
	printf("****        1——创建商品档案           ****\n");
	printf("****        2——编辑商品信息           ****\n");
	printf("****        3——统计销售情况           ****\n");
	printf("****        4——查询商品信息           ****\n");
	printf("****        5——显示商品信息           ****\n");
	printf("****        0——退出系统               ****\n");
	printf("********************************************\n");
}
void 创建商品档案()
{

}
void 编辑商品信息()
{
	printf("********************************************\n");
	printf("****         请输入选项编号(0-4)        ****\n");
	printf("********************************************\n");
	printf("****         1——添加新商品            ****\n");
	printf("****         2——删除原有商品          ****\n");
	printf("****         3——修改原有商品信息      ****\n");
	printf("****         4——返回                 ****\n");
	printf("****         0——退出                 ****\n");
	printf("********************************************\n");

}
void 添加新商品()
{

}
void 统计销售情况()
{

}
void 查询商品信息()
{
	printf("********************************************\n");
	printf("****         请输入选项编号(0-3)         ****\n");
	printf("********************************************\n");
	printf("****         1——按品名查询             ****\n");
	printf("****         2——按剩余数查询           ****\n");
	printf("****         3——返回                   ****\n");
	printf("****         0——退出                   ****\n");
	printf("********************************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入选项编号(0-5):");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出程序");
			return 0;
			break;
		case 1:创建商品档案();
				break;
		case 2:编辑商品信息();
			printf("是否继续进行当前进程[1是/2否]\n");
			scanf_s("%d", &input);
			switch (input)
			{
			case 1://进入编辑商品信息
				printf("继续进行\n");
				编辑商品信息();
				scanf_s("%d", &input);
				switch (input)//开始选择
				{
				case 4:
					menu();
					break;
				case 0:
					printf("退出程序\n");
					return 0;
				//case 1://添加新商品
				//	添加新商品();
				//	printf("是否继续进行当前进程[1是/2否]");
				//	scanf_s("%d", &input);
				//	switch (input)
				//	{
				//	case 1:
				//		printf("继续进行\n");
				//		添加新商品();
				//		break;
				//	case 2:
				//		printf("取消进行\n");
				//		break;
				//	default:
				//		printf("输入错误\n");
				//		break;
				//	break;
				//	}

				default:
					printf("输入错误\n");
					break;
				}
				break;
			case 2:
				printf("取消进行\n");
				
				break;
			default:
				printf("输入错误\n");
				break;
			}
			break;
		case 3:统计销售情况();
				break;
		case 4:查询商品信息();
			printf("是否继续进行当前进程[1是/2否]");
			scanf_s("%d", &input);
			switch (input)
			{
			case 1:
				printf("继续进行\n");
				查询商品信息();
			default:
				break;
			}
				break;
		case 5:
				break;
		default:
			printf("输入错误");
			break;
		}
		
	} 
	while (input);
	
}