#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	if (num < 18)
	{
		if (num >= 0 && num < 10)
			printf("小学生\n");
		else
			printf("不能谈恋爱\n");
	}
	if (num >= 18)
	{
		printf("成年人\n");
		printf("可以谈恋爱\n");
	}
		
	return 0;
}