#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	while (num <= 1000)
	{
		if (num % 2 != 0)
			printf("%d ", num);
		num++;
	}
		return 0;
}

