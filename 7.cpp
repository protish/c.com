#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = {0};
	printf("���������룺\n")��
	scanf_s("%c",password,20);
	while(ch = getchar()) != "\n")
	{
			;
	}
	ret = getchar();
	printf("�Ƿ�ȷ�ϣ�Y\N��:")��
	if ( ret == "Y")
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{ 
		printf("ȷ��ʧ��\n");
	}
	return 0;
}