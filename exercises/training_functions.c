//
//  training_functions.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

#include "training_functions.h"

void func() {
    
    printf("This is a function\n");
    
}

void funcPram(int x) {
    
    printf("This is a function\n with a pram %d\n",x);
    
}

int main(int argc, char ** argv) {
    
    func();
    
    funcPram(40);
    
    printf("Hello world\n %d",funcReturnValue());
    
    return 0;
}

int funcReturnValue() {
    
    printf("This is a function that returns\n");
    
    return 0;
}