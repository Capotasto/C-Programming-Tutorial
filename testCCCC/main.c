//
//  main.c
//  testCCCC
//
//  Created by Norio Egi on 11/9/15.
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int g[10];
    int sum = 0;
    int i;
    
    g[0] = 20;
    g[1] = 13;
    g[2] = 10;
    g[3] = 11;
    g[4] = 45;
    g[5] = 13;
    g[6] = 10;
    g[7] = 11;
    g[8] = 45;
    g[9] = 35;
    
    for (i = 0; i < 10; i++) {
        printf("g[%i] is equal to %i\n",i,g[i]);
        sum += g[i]; //sum = sum + g[i]
        
    }
    printf("Sum is %i\n",sum);
    printf("Average num %f\n",(float)sum/(float)i);
    
    
    return 0;
}
