#include<stdio.h>
int main()
{
    int a;

    scanf_s("%d",&a); 
    
    int i,j,k;
    
    int cnt = 0;
    i = a;
    for (; i <= a + 3; i++)
    {
        j = a;
        for (; j <= a + 3; j++)
        {
            k = a;  
            for (; k <= a + 3; k++)
            {
                if (i != j && i !=k && j !=k)   
                {
                    cnt++;
                    printf("%d%d%d",i,j,k);
                    if (cnt == 6){
                        printf("\n");
                        cnt = 0;
                    }else{
                        printf(" ");
                    }
                }
            
            }
            
        }
         
    }
    return 0;
}