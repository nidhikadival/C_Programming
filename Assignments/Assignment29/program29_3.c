/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Description :   It displays matrix with alphabet and number patterns alternating row-wise
//  Input :         int , int
//  Output :        void
//  Author :        Nidhi Girish Kadival
//  Date :          21/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i=0 , j=0;
    char ch = '\0';

    for(i=1; i<=iRow; i++)
    {
        for(ch = 'a',j=1; j<=iCol; j++, ch++)
        {
            if(i%2 == 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
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
//  a	b	c	d	e	
//  1	2	3	4	5	
//  a	b	c	d	e	
//  1	2	3	4	5	
//  a	b	c	d	e
// 
//  Input : 
//  Enter number of rows:
//  3
//  Enter number of columns:
//  3
//  Output:
//  a	b	c	
//  1	2	3	
//  a	b	c
//
/////////////////////////////////////////////////////////////////////////////////////////////////