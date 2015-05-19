#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int c;   //is the counter variable

int Nezz;  //These 3 variables are the user entered ints
int Fizz;
int Buzz;

int fizzMult;  //these 2 variables are the result of the remainder of Fizz and Buzz
int buzzMult;


int main()
{

    printf("Hello! \n");
    printf("The first variable is Nezz. Please enter a whole number.\n");
    scanf("%d",&Nezz);
    printf("The next variable is Fizz. Please enter a whole number.\n");
    scanf("%d", &Fizz);
    printf("The next variable is Buzz. Please enter a whole number.\n");
    scanf("%d", &Buzz);




    for( c = 1; c <= Nezz; c++ ){  //this is the counter loop

        fizzMult = c % Fizz;  //makes the remainder a value to check if it is a multiple
        buzzMult = c % Buzz;



    if(fizzMult == 0  && buzzMult == 0){   // this first statement checks for both the remainders to be 0

        printf("COUNT: FizzBuzz \n");   //if true it displays FizzBuzz

    } else{

           if ( fizzMult == 0) { //checks to see if it is a multiple of 3

            printf("COUNT: Fizz \n");  //if true it displays Fizz

           } else {

                if ( buzzMult == 0){ //checks to see if it is a multiple of 5

                    printf("COUNT: Buzz \n");  //if true it displays Buzz

                } else{

                    printf("COUNT: %d \n" , c);  //if none of the above cases are true it will just display the normal number

                }

           }

}
    }

return 0;

}

