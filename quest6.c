#include<stdio.h>
void reverse(int b[],int n)
{
    for(int j=n-1; j>=0;j--)
    {
        printf("%d ",b[j]);
    }
}
void reverse(int [],int);
int main()
{
    int a[5];
    printf("Enter the 5 number");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse =");
    reverse (a,5);
    return 0;

}