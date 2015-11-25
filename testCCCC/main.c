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
    
    int limitNumber;
    int divideFlg = 1;
    int quotientNum;
    int remainder;
    
    printf("What Decimal number is to get get Binary numer : ");
    scanf("%i",&limitNumber);
    
    int i = 0;
    int tempNum = limitNumber;
    while (divideFlg) {
        quotientNum = tempNum/2;
        if (quotientNum == 1) {
            divideFlg = 0;
        }else{
            tempNum = quotientNum;
        }
        i++;
    }
    
    int binaryNum[i+1];
    
    
    divideFlg = 1;
    i =0;
    while (divideFlg) {
        
        quotientNum = limitNumber/2;
        remainder = limitNumber%2;
        
        if (quotientNum == 1) {
            divideFlg = 0;
            binaryNum[i] = remainder;
            binaryNum[i+1] = quotientNum;

        }else{
            limitNumber = quotientNum;
            binaryNum[i] = remainder;

        }
        i++;
    }
    printf("The binay number is ");
    for (int j= 0; j < i+1; j++) {
        printf("%i",binaryNum[i-j]);

    }
    printf("\n");

    
    
    
    return 0;
}
