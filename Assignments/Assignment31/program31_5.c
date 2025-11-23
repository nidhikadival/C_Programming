/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Description :   It displays triangular star pattern with decreasing values of columns
//  Input :         int , int
//  Output :        void
//  Author :        Nidhi Girish Kadival
//  Date :          23/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i=0 , j=0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((i<=j))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}   //End of Pattern

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter number of rows:
//  4
//  Enter number of columns:
//  4
//  Output:
//  1	2	3	4	
//   	2	3	4	
//   	 	3	4	
//   	 	 	4
// 
//  Input : 
//  Enter number of rows:
//  6
//  Enter number of columns:
//  6
//  Output:
//  1	2	3	4	5	6	
//   	2	3	4	5	6	
//   	 	3	4	5	6	
//   	 	 	4	5	6	
//   	 	 	 	5	6	
//   	 	 	 	 	6
//
/////////////////////////////////////////////////////////////////////////////////////////////////