//
//  training_new_delete.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <iostream>
using namespace std;

const long int count1 = 20;

int main(int argc, char ** argv) {
    
    printf("allocate space for %lu", count1);
    
    int  * ip = new (nothrow) int [count1];
    
    if (ip == NULL) {
        cerr << "new failed" <<endl;
        return 1;
    }
    
    for (int i = 0; i < count1; i++) {
        ip[i] = i;
    }
    
    for (int i = 0; i < count1; i++) {
        printf("%d:%d", i, ip[i]);
        if ((i > 0 && i % 25 == 0) || i == count1 - 1) cout << endl;
    }
    
    delete [] ip;
    cout << "space at *ip deleted" << endl;
    
 
    return 0;
}