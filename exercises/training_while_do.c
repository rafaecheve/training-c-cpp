//
//  training_while_do.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>


int main(int argc, char ** argv) {
    
    int x = 5;
    
    do {
        printf("x is %d\n",x);
        x--;
    } while (x);

    
    while (x--) {
        printf("x is %d\n",x);
    }
    
    while (x) {
        printf("x is %d\n",x);
        x--;
    }

    int y = 5;

    while (y == 0) {
        printf("y is %d\n",y);
        y--;
    }
    
    do {
        printf("x is %d\n",x);
        --x;
    } while (x);
    
    
    return 0;
}
