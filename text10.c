#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int number;
    int *a;
    int i;
    printf("输入数量:");
    scanf_s("%d",number);
    // int a[number] //C99写法

    // C99之前写法
    // malloc的参数不是要多少个 int 不是数组要多少单元，而是这个数组占据多少空间以字节为单位
    // 前面的（int*） 是类型转换
    a = (int *)malloc(number*sizeof(int));
    for (i  = 0; i < number; i++)
    {
       scanf_s("%d",&a[i]);
    }
    for (i = number-1; i >= 0; i--)
    {
       printf("%d",a[i]);
    }
    // 释放空间
    free(a);
    
    return 0;
}
