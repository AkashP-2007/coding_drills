#include <stdio.h>
int main()
{
    int A[50][50],B[50][50],R[50][50];
    int i,j,k,row1,col1,row2,col2;
    printf("Enter the row size and column size of 1st matrix  \n");
    scanf("%d %d",&row1,&col1);
    printf("Enter the row size and column size of 2nd matrix  \n");
    scanf("%d %d",&row2,&col2);

    if(row2==col1)
    {
    // Read 1st matrix
    printf("Enter the 1st matrix \n");
    for(i=0;i<row1;i++)
    {
        printf("Enter row %d \n",i+1);
        for(j=0;j<col1;j++)
        {
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    
    // Read 2nd matrix
    printf("Enter the 2nd matrix \n");
    for(i=0;i<row2;i++)
    {
        printf("Enter row %d \n",i+1);
        for(j=0;j<col2;j++)
        {
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    
    printf("Resultant matrix:- \n");
    //multiply the matrices
    for(i=0;i<row1;i++)
    { 
        for(j=0;j<col2;j++)
        {
            R[i][j] = 0;
			for(k=0;k<col1;k++)
			{
				R[i][j]+=A[i][k]*B[k][j];
			}
            printf("%d  ",R[i][j]);
        }
        printf("\n");
    }
	}
    return 0;
}
