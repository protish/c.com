#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = {0};
	printf("请输入密码：\n")；
	scanf_s("%c",password,20);
	while(ch = getchar()) != "\n")
	{
			;
	}
	ret = getchar();
	printf("是否确认（Y\N）:")；
	if ( ret == "Y")
	{
		printf("确认成功\n");
	}
	else
	{ 
		printf("确认失败\n");
	}
	return 0;
}