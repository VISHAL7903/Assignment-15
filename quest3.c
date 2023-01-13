#include<stdio.h>
void sort(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j]) 
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    } 
}  

void sort(int [], int);
int main()
{
    int a[5],i,j,temp;
    printf("Enter the 5 number");
    for (i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,4);
    return 0;
}