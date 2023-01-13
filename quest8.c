#include<stdio.h>
int main()
{
    int i,j;
    int a[5]={1,2,3,5,2};
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]==a[j])
            break;  
        }

        printf("%d ",a[i]);
    }
    return 0;
} 