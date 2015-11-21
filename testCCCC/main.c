//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float x = 0;
    int count;
    float max =0;
    float min =0;
    int i = 1;

    
    printf("How many number do you want to enter?: ");
    scanf("%i", &count);
    
    
    do {
        
        printf("Enter 1 values: ");
        scanf("%f", &x);
        
        if (i == 1) {
            max = x;
            min = x;
        }
        
        if (max < x) {
            max = x;
        }
        
        if (min > x) {
            min = x;
        }
        
        printf("max number: %f\n", max);
        printf("min number: %f\n\n", min);
        
        i++;

    } while (i <= count);
    
//    for (int i = 1; i <= count; i++) {
//        
//        printf("Enter 1 values: ");
//        scanf("%f", &x);
//        
//        if (max < x) {
//            max = x;
//        }
//        
//        if (min > x) {
//            min = x;
//        }
//        
//    }
    
    printf("%.1f is max\n",max);
    printf("%.1f is min\n",min);
    
    return 0;
}
