//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char alphabet;
    printf("Please enter a character between a to z: ");
    scanf("%c", &alphabet);
    
    if ('a' <= alphabet && alphabet <= 'z') {
        if (alphabet  == 'a') {
            printf("A\n");
        }else if(alphabet  == 'b'){
            printf("B\n");
        }else if(alphabet  == 'c'){
            printf("C\n");
        }else if(alphabet  == 'd'){
            printf("D\n");
        }else if(alphabet  == 'e'){
            printf("E\n");
        }else if(alphabet  == 'f'){
            printf("F\n");
        }else if(alphabet  == 'g'){
            printf("G\n");
        }else if(alphabet  == 'h'){
            printf("H\n");
        }else if(alphabet  == 'i'){
            printf("I\n");
        }else if(alphabet  == 'j'){
            printf("J\n");
        }else if(alphabet  == 'k'){
            printf("K\n");
        }else if(alphabet  == 'l'){
            printf("L\n");
        }
    }else{
        printf("It's not a to z word.\n");
    }
    
    return 0;
}
