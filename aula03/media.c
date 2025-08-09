#include <stdio.h>

int main(){
    double a,b,c,d,m;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    if (a<=b && a<=c && a<=d) m=b+c+d;
    else if (b<=a && b<=c && b<=d) m=a+c+d;
    else if (c<=d && c<=b && c<=a) m=a+b+d;
    else m=a+b+c;
    m=m/3;
    printf("%.4lf", m);
    return 0;
}