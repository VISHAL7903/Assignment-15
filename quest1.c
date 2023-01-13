 #include<stdio.h>
int greatest(int a[], int n)
{
    int greatest=a[0],i;
    for(i=1;i<n;i++)
    {
        if(greatest<a[i])
        greatest=a[i];
    }
    return greatest;
}
    int greatest(int [], int);
    int main()
{
    int a[5],i;
    printf("Enter the 5 number\n");
    for (i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("Greatest number =%d",greatest(a,4));
    return 0;
}  
