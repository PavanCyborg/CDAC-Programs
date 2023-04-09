#include<stdio.h>
int main()
{
    int ch,i,j,k;
    printf("Enter your choice:\n 1.Addition \n 2.Subtraction \n 3.Multiplication\n");
    scanf("%d",&ch);
    int row1,col1,row2,col2;
    printf("Enter the no of rows and columns for matrix A:\n");
    scanf("%d %d",&row1,&col1);
    printf("The size of matrix A is %d rows and %d colums\n",row1,col1);
    int A[row1][col1];
    printf("Enter the no of roes and columns for matrix B:\n");
    scanf("%d %d",&row2,&col2);
    printf("The size of matrix B is %d rows and %d colums\n",row2,col2);
    int B[row2][col2];
    //Enter elements into A:
    printf("Enter elements of A:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //Printing Matrix A
    printf("Entered elements of A are :\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("A%d%d : %d \t",i,j,A[i][j]);
        }
        printf("\n");
    }
    //Enter elements into B:
    printf("Enter elements of B:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    //Printing matrix B
    printf("Entered elements of B are :\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("B%d%d : %d \t",i,j,B[i][j]);
        }
        printf("\n");
    }
    switch(ch)
    {
        case 1: if(row1==row2 && col1==col2)
                {
                    int C[row1][col1];
                    printf("Matrix Addition is applicable....\n");
                    for(i=0;i<row1;i++)
                    {
                        for(j=0;j<col1;j++)
                        {
                            C[i][j]=A[i][j]+B[i][j];
                            printf("C%d%d : %d \t",i,j,C[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Addition not Possible....\n");
                }
        break;
        
        case 2: if(row1==row2 && col1==col2)
                {
                    int D[row1][col1];
                    printf("Matrix Subtraction is applicable....\n");
                    for(i=0;i<row1;i++)
                    {
                        for(j=0;j<col1;j++)
                        {
                            D[i][j]=A[i][j]-B[i][j];
                            printf("D%d%d : %d \t",i,j,D[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Subtraction not Possible....\n");
                }
        break;
        case 3: if(col1 == row2)
                {
                    printf("Matrix Multiplication A*B is Possible...\n");
                    int E[row1][col2],k;
                    for(i=0;i<row1;i++)
                    {
                        for(j=0;j<col2;j++)
                        {
                            E[i][j]=0;
                            for(k=0;k<col1;k++)
                                E[i][j]+=A[i][k]*B[k][j];
                        }
                    }
                    for(i=0;i<row1;i++)
                    {
                        for(j=0;j<col2;j++)
                        {
                            printf("E%d%d : %d \t",i,j,E[i][j]);
                        }
                        printf("\n");
                    }
                }
                else if(col2 == row1)
                {
                    printf("Matrix Multiplication B*A is Possible...\n");
                    
                    int F[row2][col1],k;
                    for(i=0;i<row2;i++)
                    {
                        for(j=0;j<col1;j++)
                        {
                            F[i][j]=0;
                            for(k=0;k<col2;k++)
                                F[i][j]+=A[i][k]*B[k][j];
                        }
                    }
                    for(i=0;i<row2;i++)
                    {
                        for(j=0;j<col1;j++)
                        {
                            printf("F%d%d : %d \t",i,j,F[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("Matrix multiplication is impossible....");
                }
        break;
        default: printf("Invalid Choice... Please Try Again.\n");
    }
    return 0;
}
