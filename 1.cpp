#include <iostream>
using namespace std;
int main()
{int age;
cin >> age;
if (age < 18)
	printf("未成年\n");
else if (age >= 18 && age < 35)
	printf("青年\n");
else if (age >= 35 && age < 60)
	printf("壮年\n");
else
printf("老年\n");
return 0;
}
