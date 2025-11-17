/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : Frequency
//  Description :   It returns the difference between the frequency of even and odd numbers.
//  Input :         int * , int
//  Output :        int
//  Author :        Nidhi Girish Kadival
//  Date :          16/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

 int Frequency(int Arr[], int iLength)
 {
    int iCnt = 0, iEvenCount = 0, iOddCount = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }

    return (iEvenCount - iOddCount);
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

    printf("Difference between the frequency of even and odd numbers is %d\n",iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 
//  Enter no of elements:
//  4
//  Enter the elements:
//  11  11  22  22  
//
//  Output :   Difference between the frequency of even and odd numbers is 0
// 
//  Input : 
//  Enter no of elements:
//  7
//  Enter the elements:
//  85 66 3 80 93 88 90
//
//  Output :   Difference between the frequency of even and odd numbers is 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////
