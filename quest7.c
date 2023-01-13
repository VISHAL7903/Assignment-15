#include<stdio.h>
int main()
{
    int i,j,count =0;
    int a[5]={1,2,3,4,2};
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]==a[j])
            count++;
        }
    }
    printf("%d",count);
    return 0;
}