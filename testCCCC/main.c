//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x, y; //defined an integer variable
    //int x2;
    //int y,z,m,d, a;
    //float x3; //defined a floating point number variable
    //char x4; //defined a character variable

    //Show some number example
    //printf("Please enter another integer number: ");
    //scanf("%i", &x2);
    //printf("you entered this value: %i and %p.\n\n\n", x1, &x2);
    //printf("you entered this value: %i and %i.\n\n\n", x1, x2);
    
    // Calculations number example
//    printf("Please enter an integer number: ");
//    scanf("%i,%i", &x1,&x2);
//    y = x1 + x2;
//    z = x1 * x2;
//    m = x1 - x2;
//    d = x1 / x2;
//    a = x1 % x2;
//    printf("you entered this value: %i and %i .\n\n\n", y,z);
//    printf("you entered this value: %i and %i and %i.\n\n\n", m,d,a);
    
    //Conditional example
//    printf("Please enter another integer number: ");
//    scanf("%i", &x);
//    if (x1 > 0) {
//        printf("The number is positive.\n");
//    }else if( x1 == 0){
//        printf("The number is ZERO.\n");
//    }else{
//        printf("The number is negative.\n");
//    }
    printf("Please enter another integer number: ");
    scanf("%i", &x);
    
    y = x % 2;
    if (y == 0) {
        printf("The number is even (devisible by 2)\n");
    }else{
        printf("The number is odd (not devisible by 2)\n");
    }
    
    return 0;
}
