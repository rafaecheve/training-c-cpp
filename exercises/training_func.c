//
//  training_func.c
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

void func();

void funcWithParm(int);

void funcWithParmRef(int *);

//void funcWithParmDef(int &);

void funcWithParmRef();


int main(int argc, char ** argv) {
    
    func();
    
    funcWithParm(3);
    
    int c = 1;
    funcWithParmRef(&c);


    return 0;
}

void func() {
    printf("this is func()\n");
}

void funcWithParm(int i) {
    printf("this is func() %d\n", i);
}

void funcWithParmRef(int * i) {
    printf("this is func() %d\n", *i);
}

