//
//  training_macro.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

#define CONSTANT 1

#define MACRO1(a,b) (a * b)

#define GRATER1(a,b) ((a) < (b) ? (a) : (b))


int main(int argc, char ** argv) {
    
    int this = 5;
    
    int that = 10;
    
    printf("this: %d , that %d , result : %d\n", this,that, GRATER1(that,this));
    
    return 0;
}
