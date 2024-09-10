#include <stdio.h>
int main()
{
import random

	int num = 0;
	num = random.randint(1, 100)
		count = 0;
	while (count < 7)
	{
		count += 1;
		guess = int(input("请猜一个数："))
			if (guess > num)
			{
				printf("大了\n");
				countine;
			}
		elif(guess == num)
		{
			printf("对了\n");
			break;
		}
			else:
		printf("小了\n");
	else:
	printf("输入次数过多\n");
	}
	return 0;
}