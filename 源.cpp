#include <iostream>
using namespace std;
int main()
{int age;
cin >> age;
if (age < 18)
	printf("δ����\n");
else if (age >= 18 && age < 35)
	printf("����\n");
else if (age >= 35 && age < 60)
	printf("׳��\n");
else
printf("����\n");
return 0;
}
