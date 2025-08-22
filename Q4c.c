//Find the Transpose of a Matrix
#include<stdio.h>
#include<math.h>
int i,j,m,n,mat[10][10],transpose[10][10];
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
void transposeMatrix()
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[j][i]=mat[i][j];
        }
    }
    printf("Matrix transposed successfully.\n");
    printf("Transposed matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    create();
    transposeMatrix();
    return 0;
}   