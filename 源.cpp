#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	if (num < 18)
	{
		if (num >= 0 && num < 10)
			printf("Сѧ��\n");
		else
			printf("����̸����\n");
	}
	if (num >= 18)
	{
		printf("������\n");
		printf("����̸����\n");
	}
		
	return 0;
}