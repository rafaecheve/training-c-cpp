//
//  Working.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/13/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {

    char cstring[] = "String";
    
    cout << "This string: " << cstring << sizeof(cstring) << endl;
    
    for (unsigned int i = 0; cstring[i]; i++) {
        printf("%02d: %c\n",i,cstring[i]);
    }
    
    return 0;
}