//
//  training_func.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
using namespace std;

void func (const string &);

int main(int argc, char ** argv) {
    
    string s = "this is string";
    
    func(s);
    
    printf("s is  %s", s.c_str());
    
    func("Hello");
    

    return 0;
}

void func (const string &s) {

    cout << "in func() " << s << endl;
}
