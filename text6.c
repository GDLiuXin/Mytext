#include <stdio.h>

/**
 * 序列前n项的求和
 * 
 *  计算序列 2/1+3/2+5/3+8/5,该序列从第二项起，每一项的分子是前一项分子分母的和分母是前一项的分子
 */

int main()
{
    int n;
    double dividend,divisor;
    double sum = 0.0;
    int i ;
    double t;

    //scanf_s("%d",&n);
    n = 200;
    dividend = 2;
    divisor = 1;
    for (i  = 1; i <= n; i++)
    {
       sum += dividend / divisor;
       t = dividend;
       dividend = dividend + divisor;
       divisor = t;

    }
     printf("%f %f\n",dividend,divisor);
     printf("%.2f\n",sum);


    return 0;
}