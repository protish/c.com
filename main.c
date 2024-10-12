#include <stdio.h>
#include <stdlib.h>
int lp(int a , int b)
{
    while(b != 0)
    {
        int c;
        c = b;
        b = a % b;
        a = c;
    }
    return a;

}
int main()
{
    int d , e , f , g , G1 , h , i , j , k , G2 , G3 ,G4;
    scanf("%d/%d",&d,&e);
    scanf("%d/%d",&f,&g);
    G1 = e * g;
    G3 = e * g;
    G4 = e * g;
    h = d * g + f *e;
    if(lp(h,G1) != 0)
    {
        int n;
        n = lp(h,G1);
        G1 = G1 / n;
        h = h / n;
        printf("(%d/%d)+(%d/%d)=%d/%d\n",d,e,f,g,h,G1);
    }
    else
    {
        printf("(%d/%d)+(%d/%d)=%d/%d\n",d,e,f,g,h,G1);
    }
    i = d * g - f * e;
    if(lp(i,G3) != 0)
    {
        int m;
        m = lp(i,G3);
        G3 = G3 / m;
        i = i / m;
       printf("(%d/%d)-(%d/%d)=%d/%d\n",d,e,f,g,i,G3);
    }
    else
    {
        printf("(%d/%d)-(%d/%d)=%d/%d\n",d,e,f,g,i,G3);
    }
    j = d * f;
    if(lp(j,G4) != 0)
    {
        int v;
        v = lp(j,G4);
        G4 = G4 / v;
        j = j / v;
        printf("(%d/%d)*(%d/%d)=%d/%d\n",d,e,f,g,j,G4);
    }
    else
    {
       printf("(%d/%d)*(%d/%d)=%d/%d\n",d,e,f,g,j,G4);
    }
    G2 = e * f;
    k = d * g;
    if(lp(k,G2) != 0)
    {
        int x;
        x = lp(k,G2);
        G2 = G2 / x;
        k = k / x;
       printf("(%d/%d)/(%d/%d)=%d/%d\n",d,e,f,g,k,G2);
    }
    else
    {
        printf("(%d/%d)/(%d/%d)=%d/%d\n",d,e,f,g,k,G1);
    }
    return 0;
}
