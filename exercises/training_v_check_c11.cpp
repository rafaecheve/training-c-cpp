//
//  version_check.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/13/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main (int argc, char ** argv) {
    
    stringstream version;
    
    version << "GCC Version "
    << __GNUC__ << ".";
    
    cout << version.str() << endl;
    
    vector <string> v = {"one","two","three"}; // C++11 Compiler Check
    
    for (string s : v) {
        cout << s <<endl;
    }
    

    return 0;
}