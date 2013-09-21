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

    string ccpString = "This is a cat";
    
    cout << ccpString << endl;
    
    
//    for (unsigned int i = 0; ccpString[i]; i++) {
//        printf("%02d: %c\n",i,ccpString[i]);
//    }
    
//    for (unsigned int i = 0; i < ccpString.size(); i++) {
//        printf("%02d: %c\n",i,ccpString[i]);
//    }
    
    //Iterator loop
//    for (char c : ccpString) {
//        printf("%c\n",c);
//    }
    
    for (auto it = ccpString.begin(); it != ccpString.end(); ++it) {
        printf("%c\n",*it);
    }
    
    
    
    return 0;
}