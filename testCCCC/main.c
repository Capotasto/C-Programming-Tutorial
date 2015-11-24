//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int inputNum;
    int calcNum;
    int inputDigitNum = 0;
    int digitNum = 0;
    int remeinNum = 0;
    
    printf("Enter a Number: ");
    scanf("%i", &inputNum);
    
    //Calcurate Digit number of input number
    calcNum = inputNum;
    while (calcNum != 0) {
        calcNum = calcNum / 10;
        inputDigitNum++;
    }
    
    for (int i = 0; i < inputDigitNum; i++) {
        if (i ==0) {
            printf("digit is %i\n", inputNum/(int)pow(10,inputDigitNum-i-1));
            remeinNum = inputNum % (int)pow(10,inputDigitNum-i-1);
            calcNum = remeinNum;
        }else{
            //Calcurate Digit number of input number
            
            digitNum = 0;
            while (calcNum != 0) {
                calcNum = calcNum / 10;
                digitNum++;
            }
            if (digitNum != inputDigitNum-i) {
                printf("digit is 0\n");
            }else{
                printf("digit is %i\n", remeinNum/(int)pow(10,inputDigitNum-i-1));
                remeinNum = remeinNum % (int)pow(10,inputDigitNum-i-1);
            }
            calcNum = remeinNum;
            
        }
        
    }
    
    
    //    char inputChar;
    //
    //    printf("Enter a alphabet:");
    //    scanf("%c",&inputChar);
    //
    //    switch (inputChar) {
    //        case 'a':
    //        case 'A':
    //        case 'e':
    //        case 'E':
    //        case 'i':
    //        case 'I':
    //        case 'o':
    //        case 'O':
    //        case 'u':
    //        case 'U':
    //            printf("You entered a vowel.\n");
    //            break;
    //        default:
    //            printf("You entered other types of alphabet is not vowel {a,e,i,o,u}\n");
    //            break;
    //    }
    
    
    return 0;
}
