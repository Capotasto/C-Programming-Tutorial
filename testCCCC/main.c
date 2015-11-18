//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    int choice;
    int x,y;

    for (; i >=0; ) {
        
        printf("Welcome to my program:\n");
        printf("----------------------\n");
        printf("For Addition press 1:\n");
        printf("For Subtraction press 2:\n");
        printf("For Multiplication press 3:\n");
        printf("For Division press 4:\n");
        printf("You choice:\n");
        scanf("%i", &choice);
        
        printf("Enter two nmuber\n");
        scanf("%i %i", &x,&y);
        if (choice == 1) {
            printf("The result: %i\n:",x + y);
        }else if(choice == 2){
            printf("The result: %i\n:",x - y);
        }else if(choice == 3){
            printf("The result: %i\n:",x * y);
        }else if(choice == 4){
            printf("The result: %i\n:",x / y);
        }else{
            printf("Should press between 1 to 4.");
        }

    }
    
    return 0;
}
