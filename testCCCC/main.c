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
    
    
    int compareCount;
    
    printf("How many number do you have and compare?: ");
    scanf("%i",&compareCount);
    
    int inputNum[compareCount];
    
    for (int i = 0; i < compareCount; i++) {
        printf("Please Enter %i number One by one: ",compareCount);
        scanf("%i",&inputNum[i]);
    }
    
    while (1) {
        //SortCounter
        int sortCounter = 0;
        
        for (int i = 0; i < compareCount-1; i++) {
            if (inputNum[i+1] < inputNum[i])  {
                //Swapping
                int t;
                t = inputNum[i+1];
                inputNum[i+1] = inputNum[i];
                inputNum[i] = t;
                sortCounter++;
            }
        }
        if (sortCounter == 0) {
            break;
        }
    }
    
    for (int k = 0; k < compareCount ; k++) {
        printf("Sorted Number: %i\n",inputNum[k]);
    }
    
    return 0;
}
