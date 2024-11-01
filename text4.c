#include <stdio.h>
/* 水仙花数是一个有趣的数学概念，它是指一个 3 位数，
其各位数字的立方和等于这个数本身。
例如，153 就是一个水仙花数，因为 1³ + 5³ + 3³ = 1 + 125 + 27 = 153。
这种数字因其独特的性质而得名，就像水仙花一样美丽而独特。*/

/*步骤
 1.获取这个数的各个位上的数字；
 2.计算每个数字的立方；
 3.将这些立方数相加；
 4.比较和与原数是否相等*/
int main()
{
    // 创建变量接受用户输入的数字

    int g,s,b;
    //1.获取这个数的各个位上的数字；
    int i;
        for (i = 100; i < 1000; i++)
    {
       b = i / 100;
       s = i / 10 % 10;
       g = i % 10;
       if(b*100+s*10+g == b*b*b + s*s*s + g*g*g){
        printf("%-5d",i);
       }
    }
    
    return 0;
}