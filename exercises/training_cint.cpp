//
//  working_cint.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>

using namespace std;


int  main (int argc, char ** argv){
    
    
    string response;
    
    cout << "Type a String: " << flush;
    
//    cin >> response;
    
    getline(cin,response);
    
    cout << "The String is " << response << endl;
    
    return 0;
}