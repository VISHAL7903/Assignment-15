#include<stdio.h>
int smallest(int a[], int n)
{
    int smallest=a[0],i;
    for(i=1;i<n;i++)
    {
        if(smallest>a[i])
        smallest=a[i];
    }
    return smallest ;
}
    int smallest(int [], int);
    int main()
{
    int a[5],i;
    printf("Enter the 5 number\n");
    for (i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("smallest number =%d",smallest(a,4));
    return 0;
}  