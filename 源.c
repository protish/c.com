#include <stdio.h>
#include <math.h>
#define r 6371;
#define san 3.1415926;
double hav(double d)
{
	double b;
	b = (1 - cos(d)) / 2;
	return b;
}
double lp(double F, double G, double H, double J)
{
	double i, Q, W, E, R;
	Q = F * san / 180;
	W = G * san / 180;
	E = H * san / 180;
	R = J * san / 180;
	i = hav(E - Q) + cos(E) * cos(Q) * hav(R - W);
	return i;
}
int main()
{
	double f, g, h, j, m, z, x;
	scanf("%lf %lf %lf %lf", &f, &g, &h, &j);
	m = lp(f, g, h, j);
	z = acos(1 - 2 * m);
	x = z * r;
	printf("%.4lfkm\n", x);
	return 0;
}