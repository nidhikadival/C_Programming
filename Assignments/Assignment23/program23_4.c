/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Range
//  Description :   It returns the last occurance of the user defined number 
//  Input :         int * , int, int, int
//  Output :        void
//  Author :        Nidhi Girish Kadival
//  Date :          16/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart>iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = 0;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

}   //End of Range

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter no of elements:\n");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    Range(p, iSize, iValue1,iValue2);
    
    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter no of elements:
//  6
//  Enter the elements:
//  85 66 3 76 93 88
//  Enter starting point:
//  60
//  Enter ending point:
//  90
//  Output :    85	66	76	88
// 
//  Input : 
//  Enter no of elements:
//  6
//  Enter the elements:
//  85 66 3 76 93 88
//  Enter starting point:
//  30
//  Enter ending point:
//  50
//  Output :    
//
/////////////////////////////////////////////////////////////////////////////////////////////////