#include<stdio.h>
int duplicate(int a[],int size)
{
    for(int i=1;i<size;i++)
    {
        if(a[i]==a[i+1])
        return a[i];
    } 
    return 0;
}
int main()
{
    int i,arr[10]={1,2,3,5,5,6,7,8,8,2};
    printf("Duplicate number id %d \n ",duplicate(arr,10));
    return 0;
}