#include <stdio.h>
int main()
{
	int sum = 1;
	int num = 1;
	printf("你想好好学习吗\n");
	printf("请回答（1/0）");
	scanf_s("%d", &num);
	if (num == 1)
	{
		printf("好样的\n");
	}
	if (num == 0)
	{
		printf("坏孩子\n");
		printf("再给你一次组织语言的机会\n");
		printf("你想好好学习吗(1/0)\n");
		scanf_s("%d", &sum);
		while (sum != 1)
		{
			printf("坏孩子\n");
			printf("再给你一次组织语言的机会\n");
			printf("你想好好学习吗(1/0)\n");
			scanf_s("%d", &sum);
			if (sum == 1)
			{
				printf("好样的\n");
			}
		}
	}
	else
	{
		printf("输入错误\n");
	}
	return 0;
}