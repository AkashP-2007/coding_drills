#include <stdio.h>

int main()
{
    int A[50][50],T[50][50];
    int i,j,row,col;
    printf("Enter the row size and column size \n");
    scanf("%d %d",&row,&col);
    printf("Enter the matrix \n");
    for(i=0;i<row;i++)
    {
        printf("Enter row %d \n",++i);
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    { 
        for(j=0;j<col;j++)
        {
            T[i][j]=A[j][i];
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
