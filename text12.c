#include<stdio.h>
#include<string.h>

int mycmp(const char* s1,const char* s2)
{
    /*  int idx = 0;
    while(s1[idx] == s2[idx] && s1[idx] != '\n'){
        if(s1[idx] != s2[idx]){
            break;
        }else if(s1[idx] == '\0'){
            break;
        }
        idx++;
    } 
    return s1[idx] - s2[idx]; */

    while (*s1 == *s2 && *s1 != '\n')
    {
        s1 ++;
        s2 ++;
    }
    return *s1 - *s2;
    
   
}

int main(int argc,char const *argv[])
{
    char s1[] = "abc";

    char s2[] = "Abc ";

    printf("%d\n",strcmp (s1,s2));

    printf("%d\n",'a'-'A');
    
    return 0;

    // 如果s1和s2内容相同则 输出 0
    // 如果s2多加一个空格则 输出-1
    /** strcmp 给出的是 s1 和 s2 不相等字符的差值比较数组
    *   s1[0] 和 s2[0] 两个是否一样不一样就做个减法取出差值
    */

}