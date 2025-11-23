/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Description :   It displays pattern with # * $
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
        for(j=iCol; j>=1; j--)
        {
            if((i==j) || (i==iRow) || (i==1) || (j==iCol) || (j==1))
            {
                printf("*\t");
            }
            else if(i<j)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
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
//  *	*	*	*	
//  *	#	*	*	
//  *	*	$	*	
//  *	*	*	*
// 
//  Input : 
//  Enter number of rows:
//  6
//  Enter number of columns:
//  6
//  Output:
//  *	*	*	*	*	*	
//  *	#	#	#	*	*	
//  *	#	#	*	$	*	
//  *	#	*	$	$	*	
//  *	*	$	$	$	*	
//  *	*	*	*	*	*
//
/////////////////////////////////////////////////////////////////////////////////////////////////