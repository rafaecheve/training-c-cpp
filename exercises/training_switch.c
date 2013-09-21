//
//  training_switch.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

#define ONE (1)
#define TWO (2)
#define THR (3)
#define FOU (4)

int main(int argc, char ** argv) {
    
    int c = 3;
    
    switch (c) {
            
        case ONE:
            
            puts("one");
            break;
            
        case TWO:
            puts("two");
            break;
            
        case THR:
            puts("three");
            break;
            
        case FOU:
            puts("four");
            break;
            
        default:
            break;
    }
    return 0;
}
