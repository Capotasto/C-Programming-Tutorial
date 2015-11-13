//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x1; //defined an integer variable
    int x2;
    //float x3; //defined a floating point number variable
    //char x4; //defined a character variable
    
    printf("Please enter an integer number: ");
    scanf("%i", &x1);
    
    printf("Please enter another integer number: ");
    scanf("%i", &x2);
    printf("you entered this value: %i and %i.\n\n\n", x1, x2);
    return 0;
}
