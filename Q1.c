/*1) Develop a Menu driven program to demonstrate the following operations of Arrays
——MENU——- 1.CREATE
2. DISPLAY
3. INSERT
4. DELETE
5. LINEAR SEARCH
6. EXIT*/
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
    if(n==0)
    {
        printf("Array is empty.\n");
        return;
    }
    printf("The elements in the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insert()
{
    int pos,val;
    if(n==100)
    {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }
    printf("Enter the position where you want to insert the element (0 to %d): ",n);
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter the value to insert: ");
    scanf("%d",&val);
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n++;
    printf("Element inserted successfully.\n");
}
void delete()
{
    int pos;
    if(n==0)
    {
        printf("Array is empty. Cannot delete elements.\n");
        return;
    }
    printf("Enter the position of the element you want to delete (0 to %d): ",n-1);
    scanf("%d",&pos);
    if(pos<0||pos>=n)
    {
        printf("Invalid position.\n");
        return;
    }
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("Element deleted successfully.\n");
}
void search(){
    int s;
    int i=0;
    printf("enter the value to be searched: ");
    scanf("%d",&s);
    while(i<n){
    if(arr[i]==s){
            printf("Element found at index %d\n",i);
            return;
        }
    else
    i++;
    printf("Element not found\n");   
    }
}
int main(){
    int choice;
    n=0;
    while(1)
    {
    printf("-----MENU-----\n");
    printf("1. CREATE\n");
    printf("2. DISPLAY\n");
    printf("3. INSERT\n");
    printf("4. DELETE\n");
    printf("5. LINEAR SEARCH\n");
    printf("6. EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete();
            break;
        case 5:
            search();
            break;
        case 6:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        
    }
}}
