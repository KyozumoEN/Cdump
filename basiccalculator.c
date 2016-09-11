//IMPORTS & DEFINES
#include <stdio.h>                  //imports standard io, this is the most used c library so always import it
#define projectName "Calculator with comments"
#define author "lsaadev"
/*

MAIN

 */
int main(void)                      //declares the main function, its the thing that will run once the program is opened. void means it wont have to return anything
{
    //START
    printf("Project: ");
    printf(projectName);
    printf("\nAuthor: ");
    printf(author);
    printf("\n\nInitialized...\n\n"); // \n means new line
    //DECLARE VARIABLES
    /* DATA TYPES:
     * int -> stores a whole number, positive or negative
     * char -> store a single character
     * float -> can hold decimal numbers with extreme precision
     * double -> can hold twice as much as a float
     * If you need more help check this out:
     * http://www.programiz.com/c-programming/c-data-types
     */
    int run = 1;                   //EXIT VARIABLE
    int a;                         //1ST NUMBER IMPUT
    char opr;                      //OPERATOR VARIABLE
    int b;                         //2ND NUM INPUT
    float awnser;                  //AWNSER, declared as float for decimal places.
    //LOOP UNTIL EXIT
    while (run != 1) {              //will loop until the run variable is 0 ps. != means not equal
        //USER INPUT
        printf("Operation: ");
        scanf("%i", &a);            // %i looks for an integer, &a writes that integer in a
        scanf("%c", &opr);          // %c looks for a character, &opr writes that character in opr
        scanf("%i", &b);            // %i looks for an integer, &b writes that integer in b
        //AWNSERING
        printf("...............\n\n");
        //OPERATION DETECTOR & CALCULATOR
        switch (opr) {
            //ADDITION
            case'+':
                awnser = a + b;     //sets awnser to whatever
                break;              //break ends the switch so it dosn't go ond and do all calculations
            //SUBTRACTION
            case'-':
                awnser = a - b; 
                break;
            //MULTIPLICATION
            case'*':
                awnser = a * b;
                break;
            //DIVISON
            case'/':
                awnser = a / b; 
                break;
            //EXIT
            case'e':
                run = 0;            //sets the run variable to the end value
                break;
        }
        //PRINT AWNSER
        printf("%i%c%i=%.0f\n\n", a,opr,b,awnser); 
    }
    //END
}
