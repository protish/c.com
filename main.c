#include <stdio.h>
#include <math.h>
double max(double a, double b ,double c)
{
    if( a>b && a>c)
    {
        return a;
    }
    if( b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
double min(double d , double e , double f)
{
    if( d<e && d<f)
    {
        return d;
    }
    if( e<d && e<f)
    {
        return e;
    }
    else
    {
        return f;
    }
}
double lp(double i)
{
    return i / (255);
}
int main()
{
    double j , k , l , S , H , V , Q , san ,J , K , L;
    scanf("%d %d %d",&J , &K , &L);
    j = lp(J);
    k = lp(K);
    l = lp(L);
    V = max(j , k , l);
    Q = min(j , k , l);
    san = V - Q;
    if( V != 0)
    {
        S = san / V;
    }
    if( V == 0)
    {
        S = 0;
    }
    if( V == j)
    {
        H = 60 * ( k - l) / san;
    }
    if( V == k)
    {
        H = 120 + 60 * (l - j) / san;
    }
    if( V == l)
    {
        H = 240 + 60 * ( j - k) / san;
    }
    if( H < 0)
    {
        H += 360;
    }
    S = S * 100;
    V = V * 100;
    printf("%.4lf,%.4lf%%,%.4lf%%",H,S,V);
    return 0;
}

