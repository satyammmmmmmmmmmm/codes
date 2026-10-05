/*
    Step1: Understand the problem statement
    Step2: Write the algorithm
    tep2: Write the algorithm
    Step4: Write the program
    Step5: Test the program
*/

/////////////////////////////////////////////////////////////////
//
// Step 1: Understand the problem statement
//         User is going to enter any 2 integers 
//         And we have to perform addition 
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
// Step2: Write the algorithm
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create the variable as Ans to store the result
        Perfrom the addition and store into Ans
        Display the result from Ans  
    END
*/
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// 
// Step2: Decide the programming language
//          We select C programming
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
// 
// Step4: Write the program
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 = 10, iValue2 = 11, iResult = 0;

    iResult = iValue1 + iValue2;      //Business Logic

    printf("%d\n",iResult);


    return 0; //indicates success
}