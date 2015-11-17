//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char letter;
    int x;
    printf("Please enter a letter: ");
    scanf("%c", &letter);
    
    //if ('a' <= letter && letter <= 'z') {
    if (97 <= letter && letter <= 122) {
        x = letter -32;
        printf("the UpperCase is: %c\n",x);
        
    }else if('A' <= letter && letter <= 'Z') {
        x = letter + 32;
        printf("the LowerCase is: %c\n",x);
    
    }else{
        x = letter;
        printf("You type charactor is %c\n Type uppercase alphabet.",x);
    }
    
    return 0;
}
