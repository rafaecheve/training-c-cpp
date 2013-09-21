//
//  training_sizeof.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
using namespace std;

struct S{
    int a;
    int b;
    char c;
    char d;
    long int e;
    long int f;

};

int main(int argc, char ** argv) {
  
    int i;
    
    printf("size is %d\n",(int) sizeof(S));
    
    return 0;
}