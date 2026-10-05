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

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;              //Business Logic

    return iAns;
}


int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;        //default values int->0, float->0.0f, double->0.0, char->\0, pointer->null

    printf("Enter first number : \n");
    scanf("%d", &iValue1); 

    printf("Enter second number : \n");
    scanf("%d", &iValue2); 

    iResult = Addition(iValue1, iValue2);     

    printf("Addition is : %d\n",iResult);


    return 0; //indicates success
}