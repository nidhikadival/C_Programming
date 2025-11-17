/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Frequency
//  Description :   It returns the frequency user defined number in the array 
//  Input :         int * , int
//  Output :        int
//  Author :        Nidhi Girish Kadival
//  Date :          16/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int Frequency(int Arr[], int iLength, int iNo)
 {
    int iCnt = 0, iCount = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
 }  //End of Frequency

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0 ;
    int * p = NULL;

    printf("Enter no of elements:\n");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter number whose frequency to find: \n");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize,iValue);

    printf("Frequency of %d is %d\n",iValue,iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter no of elements:
//  5
//  Enter the elements:
//  22  33  22  67  45
//  Enter number whose frequency to find: 
//  22
//  Output :   Frequency of 22 is 2
// 
//  Input : 
//  Enter no of elements:
//  4
//  Enter the elements:
//  1   2   3   4   
//  Enter number whose frequency to find: 
//  6
//  Output :   Frequency of 6 is 0
//
//  Input : 
//  Enter no of elements:
//  3
//  Enter the elements:
//  55  55  55 
//  Enter number whose frequency to find: 
//  55
//  Output :   Frequency of 55 is 3
/////////////////////////////////////////////////////////////////////////////////////////////////
