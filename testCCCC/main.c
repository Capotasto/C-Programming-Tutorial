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
	//int digitNumber = 1;
	char binaryNum[100];
	char hexNum[100];

	printf("Please Enter Base Number: ");
	scanf("%i", &baseNumber);

	//printf("Please Enter Number of digit: ");
	//scanf("%i", &digitNumber);

	//char input[digitNumber];
	char input[100];

	printf("Please Enter some Number of the base you decided: ");
	scanf("%s", input);

	inputSize = (int)strlen(input);

	decimalNum = 0;
	switch (baseNumber) {
	case 2:
		for (i = 0; i < inputSize; i++) {
			decimalNum += (input[i] - '0') * pow((float)baseNumber, inputSize - i - 1);
			printf("fk %i\n", decimalNum);

		}
		break;

	case 16:
		for (i = 0; i < inputSize; i++) {
			if ('0' <= input[i] && input[i] <= '9'){
				decimalNum += (input[i] - '0') * pow((float)baseNumber, inputSize - i - 1);
				printf("fk %i\n", decimalNum);

			}
			else if ('A' <= input[i] && input[i] <= 'F'){
				decimalNum += (input[i] - '7') * pow((float)baseNumber, inputSize - i - 1);
				printf("fk %i\n", decimalNum);
			}
			else{
				printf("This is not Hex Number");
				return 0;
			}
		}

		break;
	default:
		break;
	}

	printf("Decimal Number is %i\n", decimalNum);


	//**  Decimal to some base of number user decide **//
	printf("Plsease Enter the base number to convert Dec to what?:");
	scanf("%i", &baseNumber);

	int divideFlg;
	int quotientNum;
	int remainder;

	divideFlg = 1;
	i = 0;

	while (divideFlg) {

		quotientNum = decimalNum / baseNumber;
		remainder = decimalNum % baseNumber;

		if (quotientNum == 1) {
			divideFlg = 0;
			binaryNum[i] = remainder;
			binaryNum[i + 1] = quotientNum;

		}
		else{
			decimalNum = quotientNum;
			binaryNum[i] = remainder;

		}
		i++;
	}

	printf("The %i base number is ", baseNumber);
	for (int j = 0; j < i + 1; j++) {
		printf("%i", binaryNum[i - j]);

	}
	printf("\n");
	return 0;
}
