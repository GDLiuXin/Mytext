/*
    前 n 项的和
    f = 1 + 1/2 + 1/3 + .....
*/
#include<stdio.h>
int main()
{
    int n ;
    int i ;
    double sum = 0.0;
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++)
    {
       sum += 1.0/i;
    }
    printf("f(%d)=%f\n",n ,sum);
    return 0;
    
}