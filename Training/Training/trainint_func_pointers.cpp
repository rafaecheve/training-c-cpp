//
//  trainint_func_pointers.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
using namespace std;

void func();

int main(int argc, char ** argv) {
    
//    void(*fptr)() = func;
    
    func();
    return 0;

}

void func() {
    printf("this is a function\n");
}