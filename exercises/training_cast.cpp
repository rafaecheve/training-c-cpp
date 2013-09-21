//
//  training_cast.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
    
    int i;
    
    i = sizeof(int);
    
    //forces a type convertion between two compatible types
    printf("value is %d\n", (int)sizeof(i));
    
    // cpp function style
    //    printf("value is %d\n", int(sizeof(i)));

    return 0;
}