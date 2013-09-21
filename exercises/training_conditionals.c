//
//  training_conditionals.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>


int main(int argc, char ** argv) {
    
    int a = 7;
    
    int b = 0;
    
    if (a) {
        
        puts("This is true");
        
    } else if (b) {
        
        puts("This is false");

    } else {
        
        puts("Not true at all");
    }
    
    int c = (a == 7) ? (7) : (9);
    printf("c is %d\n",c);
    
    

    return 0;
}
