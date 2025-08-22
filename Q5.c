//Write a program to find sum of every row and every column in a two-dimensional array.
#include<stdio.h>
#include<math.h>

int i,j,m,n,mat[10][10],rowSum[10],colSum[10];
void create()
{
    printf("Enter the number of rows and columns for the matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix created successfully.\n");
}
void sumRowsAndColumns()
{
    for(i=0;i<m;i++)
    {
        rowSum[i]=0;
        for(j=0;j<n;j++)
        {
            rowSum[i]+=mat[i][j];
        }
    }
    for(j=0;j<n;j++)
    {
        colSum[j]=0;
        for(i=0;i<m;i++)
        {
            colSum[j]+=mat[i][j];
        }
    }
    printf("Sum of each row:\n");
    for(i=0;i<m;i++)
    {
        printf("Row %d: %d\n",i+1,rowSum[i]);
    }
    printf("Sum of each column:\n");
    for(j=0;j<n;j++)
    {
        printf("Column %d: %d\n",j+1,colSum[j]);
    }
}
void display(){
    printf("Matrix elements are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    create();
    display();
    sumRowsAndColumns();
    return 0;
}