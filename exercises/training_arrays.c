//
//  training_arrays.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

int main (int argc , char ** argv) {
    
    char s[] ={'h','i',0};

    int a[3];
    
    
    a[0] = 1;
    
    printf(" %i \n",a[0]);
    
    printf(" %s \n",s);
    
    
    for (int i = 0; s[i] != 0;++i) {
        
        printf("char is %c \n",s[i]);

    }
    
    for (char * cp = s; *cp; ++cp) {
    
        printf("char is %c \n", *cp);
    
    }

    return 0;
}