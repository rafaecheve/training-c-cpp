//
//  training_for.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

int main(int argc, char ** argv) {
    
    for (int x = 5; x; x--) {
        
        printf("x is %d\n",x);
    }
    
    for (int x = 0; x < 5; x++) {
        
        printf("x is %d\n",x);
    }
    
    int ia[] = {1,2,3,4,5,0};
    
    for (int *ip = ia; *ip; ip++) {
        
        printf("value is %d\n",*ip);
    }
    return 0;
}
