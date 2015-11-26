//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int inputSize;
    int i;
    int decimalNum;
    int baseNumber;
    int digitNumber;
    char binaryNum[100];
    char hexNum[100];
    
    printf("Please Enter Base Number: ");
    scanf("%i",&baseNumber);
    
    printf("Please Enter Number of digit: ");
    scanf("%i",&digitNumber);
    
    char input[digitNumber];
    
    printf("Please Enter some Number of the base you decided: ");
    scanf("%s",input);
    
    inputSize = (int)strlen(input);
    
    decimalNum = 0;
    switch (baseNumber) {
        case 2:
            for (i = 0; i < inputSize; i++) {
                decimalNum += (input[i]-'0') * pow((float)baseNumber, inputSize-i-1);
                printf("fk %i\n",decimalNum);
                
            }
            break;
            
        case 16:
            for (i = 0; i < inputSize; i++) {
                switch (input[i]) {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                        decimalNum += (input[i]-'0') * pow((float)baseNumber, inputSize-i-1);
                        printf("fk %i\n",decimalNum);
                        break;
                        
                    case 'A':
                    case 'B':
                    case 'C':
                    case 'D':
                    case 'E':
                    case 'F':
                    case 'a':
                    case 'b':
                    case 'c':
                    case 'd':
                    case 'e':
                    case 'f':
                        decimalNum += (input[i]-'7') * pow((float)baseNumber, inputSize-i-1);
                        printf("fk %i\n",decimalNum);
                        break;
                    default:
                        break;
                }
                
            }
            
            break;
        default:
            break;
    }
    
    printf("Decimal Number is %i\n",decimalNum);

    
    //**  Decimal to some base of number user decide **//
    printf("Plsease Enter the base number to convert Dec to what?:");
    scanf("%i", &baseNumber);
    
    inputSize = (int)strlen(input);
    int divideFlg;
    int quotientNum;
    int remainder;
    
    switch (baseNumber) {
        case 2:
            divideFlg = 1;
            i =0;
            while (divideFlg) {
                
                quotientNum = decimalNum / 2;
                remainder = decimalNum % 2;
                
                if (quotientNum == 1) {
                    divideFlg = 0;
                    binaryNum[i] = remainder;
                    binaryNum[i+1] = quotientNum;
                    
                }else{
                    decimalNum = quotientNum;
                    binaryNum[i] = remainder;
                    
                }
                i++;
            }
            
            printf("The binay number is ");
            for (int j= 0; j < i+1; j++) {
                printf("%i",binaryNum[i-j]);
                
            }
            
            break;
        
        case 16:
            
            break;
        default:
            break;
    }
    
    
    return 0;
}
