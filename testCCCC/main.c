//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num,rep;
    int sum = 0;

    for (rep = 0; rep <= 0 || 20 <= rep;) {
        printf("How many times do you want to repeat?: ");
        scanf("%i",&rep);
    }
    
    for (int i= 0; i < rep; i++) {
        printf("Enter a number: ");
        scanf("%i",&num);
        sum = sum + num;
    }
    
    printf("Sum: %i\n",sum);
    
    return 0;
}
