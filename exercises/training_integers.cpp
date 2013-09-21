//
//  training_integers.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    
        
    unsigned char c;
    
    short int si;
    
    int i;
    
    long int li;
    
    long long lli;
    
    cout << "size is " << sizeof(c) << endl;
    cout << "size is " << sizeof(si) << endl;
    cout << "size is " << sizeof(i) << endl;
    cout << "size is " << sizeof(li) << endl;
    cout << "size is " << sizeof(lli) << endl;
    
    li = 123UL;
    
    li = 123UL;
    
    li = 123ULL;

    printf(" c = 127 \n");
    
    c = 127;
    
    printf("c is %d\n",c);
    
    c++;
    
    printf("after increment c is %d\n", c);
    
    
    return 0;
}