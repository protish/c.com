#include <stdio.h>
int main()
{
	int m = 1;
	int n = 1;
	switch (n)
	{
	case 1:n++, m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:m++;
		case 2:n++, m++;
		case 3:n++;
			break;
		}
	case 4:n++, m++;
	}
	printf("n = %d ,m= %d\n", n, m);
	return 0;
}
