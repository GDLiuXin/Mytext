#include<stdio.h>
int main()
{
    int a,b;
    int min;

    scanf_s("%d %d", &a , &b);

    min = (a < b) ? a : b;
    int ret = 0;
    int i;
    for(i = 1; i < min; ++i){
        if (a % i == 0){
            if(b % i == 0){
                ret = i;
            }
        }
    }
    printf("%d��%d�����Լ����%d.\n", a , b , ret);
    return 0;
}