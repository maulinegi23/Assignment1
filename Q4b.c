//Find the matrix multiplication
#include<stdio.h>
#include<math.h>
int i,j,k,m1,n1,m2,n2,mat1[10][10],mat2[10][10],result[10][10];
void create()
{
    printf("Enter the number of rows and columns for first matrix:");
    scanf("%d%d",&m1,&n1);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the number of rows and columns for second matrix:");
    scanf("%d%d",&m2,&n2);
    if(n1!=m2)
    {
        printf("Matrix multiplication not possible.\n");
        return;
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Matrices created successfully.\n");
}
void multiply()
{
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            result[i][j]=0;
            for(k=0;k<n1;k++)
            {
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Matrix multiplication done successfully.\n");
    printf("Resultant matrix is:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    create();
    multiply();
    return 0;
}