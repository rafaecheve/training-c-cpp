//
//  training_switch.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

//integer constants

const int cOne = 1;
const int cTwo = 2;
const int cThr = 3;
const int cFou = 4;

int main(int argc, char ** argv) {
    
    int foo = 6;
    
    switch (foo) {
            
        case cOne:
            
            puts("one");
            break;
            
        case cTwo:
            puts("two");
            break;
            
        case cThr:
            puts("three");
            break;
            
        case cFou:
            puts("four");
            break;
            
        default:
            puts("default");

            break;
    }
    return 0;
}
