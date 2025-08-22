/*Implement the logic to
a. Reverse the elements of an array*/

#include<stdio.h>
#include<math.h>
int i,n,arr[100];
void create()
{
    printf("Enter the number of elements you want to enter:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array created successfully.\n");
}
void display()
{
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse()
{
    int start=0,end=n-1,temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Array reversed successfully.\n");
}
int main()
{
    create();
    display();
    reverse();
    display();
    return 0;
}