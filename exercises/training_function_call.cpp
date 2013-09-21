//
//  training_function_call.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
using namespace std;


int f(int i) {
    puts("thi is f");

    return i;
}

int main(int argc, char ** argv) {
    
    int i;
        
    int (*pFUnc)(int) = &f;

    i = (*pFUnc)(47);
    
    printf("i is %d\n",i);

    return 0;
}