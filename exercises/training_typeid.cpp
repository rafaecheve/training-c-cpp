//
//  trainint_typeid.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
#include <typeinfo>

using namespace std;


struct A {};
struct B {};

int main(int argc, char ** argv) {

    
    //typeid only on cpp
    struct A a1;
    struct A a2;
    struct B b1;
    struct B b2;
    
    if (typeid(b1)==typeid(a2)) {
        cout << "same" << endl;
    } else {
        cout << "different" << endl;
    }

    
    cout << typeid(string).name() << endl;
    
    return 0;
}