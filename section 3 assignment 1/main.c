#include <stdio.h>
#include <stdlib.h>



int c;

int threeMult;
int fiveMult;

int main()
{

    for( c = 1; c <= 100; c++ ){  //this is the counter loop

        threeMult = c % 3;  //makes the remainder a value to check if it is a multiple
        fiveMult = c % 5;



    if(threeMult == 0  && fiveMult == 0){   // this first statement checks for both the remainders to be 0

        printf("COUNT: FizzBuzz \n");   //if true it displays FizzBuzz

    } else{

           if ( threeMult == 0) { //checks to see if it is a multiple of 3

            printf("COUNT: Fizz \n");  //if true it displays Fizz

           } else {

                if ( fiveMult == 0){ //checks to see if it is a multiple of 5

                    printf("COUNT: Buzz \n");  //if true it displays Buzz

                } else{

                    printf("COUNT: %d \n" , c);  //if none of the above cases are true it will just display the normal number

                }

           }


    }







    }






    return 0;


}
