/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Description :   It displays matrix with even and odd number patterns alternating row-wise
//  Input :         int , int
//  Output :        void
//  Author :        Nidhi Girish Kadival
//  Date :          21/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i=0 , j=0;
    int iNum = 0;

    iNum = 1;
    for(i=1; i<=iRow; i++)
    {
        if(i%2 == 0)
        {
            iNum = 1;
        }
        else
        {
            iNum = 2;
        }

        for(j=1; j<=iCol; j++)
        {
            printf("%d\t",iNum);
            iNum = iNum+2;
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
//  2	4	6	8	
//  1	3	5	7	
//  2	4	6	8	
//  1	3	5	7
// 
//  Input : 
//  Enter number of rows:
//  4
//  Enter number of columns:
//  5
//  Output:
//  2	4	6	8	10	
//  1	3	5	7	9	
//  2	4	6	8	10	
//  1	3	5	7	9
//
/////////////////////////////////////////////////////////////////////////////////////////////////