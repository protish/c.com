#include <stdio.h>
int main()
{
	int sum = 1;
	int num = 1;
	printf("����ú�ѧϰ��\n");
	printf("��ش�1/0��");
	scanf_s("%d", &num);
	if (num == 1)
	{
		printf("������\n");
	}
	if (num == 0)
	{
		printf("������\n");
		printf("�ٸ���һ����֯���ԵĻ���\n");
		printf("����ú�ѧϰ��(1/0)\n");
		scanf_s("%d", &sum);
		while (sum != 1)
		{
			printf("������\n");
			printf("�ٸ���һ����֯���ԵĻ���\n");
			printf("����ú�ѧϰ��(1/0)\n");
			scanf_s("%d", &sum);
			if (sum == 1)
			{
				printf("������\n");
			}
		}
	}
	else
	{
		printf("�������\n");
	}
	return 0;
}