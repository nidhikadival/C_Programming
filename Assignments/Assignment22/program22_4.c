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
//  Description :   It returns  no of times 11 is present in the data
//  Input :         int * , int
//  Output :        int
//  Author :        Nidhi Girish Kadival
//  Date :          16/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int Frequency(int Arr[], int iLength)
 {
    int iCnt = 0, iCount = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Frequency(p, iSize);

    printf("Frequency of 11 is %d\n",iRet);

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
//  11  22  11  67  45
//
//  Output :   Frequency of 11 is 2
// 
//  Input : 
//  Enter no of elements:
//  4
//  Enter the elements:
//  1   2   3   4   
//
//  Output :   Frequency of 11 is 0
//
//  Input : 
//  Enter no of elements:
//  2
//  Enter the elements:
//  11  11 
//
//  Output :   Frequency of 11 is 2
/////////////////////////////////////////////////////////////////////////////////////////////////
