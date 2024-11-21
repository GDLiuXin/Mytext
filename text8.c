 #include<stdio.h>
 int main(void)
 {
    char ac[] = {0,1,2,3,4,5,6,7,8,9,};
    char *p = &ac[0];
    char *p1 = &ac[5];
    printf("p = %p\n",p);   // p = 000000000061FE0E
    printf("p+1=%p\n",p+1);     // p+1=000000000061FE0F 16进制 +1 就是 F
    
    printf("p1-p=%d\n",p1-p);   // p1-p=5

    int ai[] = {0,1,2,3,4,5,6,7,8,9,};
    int *q = &ai[0];
    int *q1 = &ai[5];
    printf("q = %p\n",q);   // 000000000061FE06
    printf("q+1=%p\n",q+1);    // 000000000061FE0A 16进制 +4 6+1应该等于7结果却是A(10)

    printf("q1-q=%d\n",q1-q);   // q1-q=1

    /**
     * 指针加法
     * p运算加一并不是在地址值上面+1，而是 sizeof + 1
     * sizeof给出单前类型的字节数
     * 
     */

    /**
     * 指针减法
     * 减两个指针的时候，得出结果不是两个指针地址的差，而是两个地址差除以 sizeof 类型 得出的是在这两个地址中有几个这种类型的，或者能放几个这种类型
     * 
     */

    return 0; 
    
 }