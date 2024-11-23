#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char const *argv[])
{
    char s[] = "hello";
    // 如果有两个 ll 会在查到第一个 l 就输出
    char *p = strchr(s,'l'); // llo
    // printf("%s\n",p); // llo


    /** 如果想输出第二个 l 则 p+1
    *   p = strchr(p+1,'l'); // lo
    *   printf("%s\n",p); 
    */

    /** 
     * 想输出 l 前面的字符，创建 c 指向 p
     *   让 *p 等于 '\0'
     *   char c = *p;
     *   p = '\0';
     *   char *t = (char*)malloc(strlen(p)+1);
     *   strcpy(t,s);
    printf("%s\n",t); // he
    */
    
    char *t = (char*)malloc(strlen(p)+1);
    strcpy(t,p);
    printf("%s\n",p); // llo
    free(t);
    return 0;
}