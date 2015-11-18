//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x;

//    for (; i >=0; ) {
//        scanf("%i",&x);
//        printf("you entered: %i",x);
//
//    }
    
//    while (x >= 0) {
//        printf("Enter a number: \n");
//        scanf("%i",&x);
//        printf("you entered: %i\n",x);
//    }
    
    
    do {
        printf("Enter a number: \n");
        scanf("%i",&x);
        printf("you entered: %i\n",x);
    } while (x >= 0);
    
    
    
    return 0;
}
