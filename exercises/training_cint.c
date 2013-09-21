//
//  working_cint.c
//  Training
//
//  Created by Rafael Echeverria on 9/13/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>



enum {
    max_length = 127
};

static char response[max_length];

int main(int argc, char ** argv) {

    printf("Type a string: ");
    
    fflush(stdout);
    
    fgets(response, max_length, stdin);
    
    printf("The String is %s\n",response);
    
    
    return 0;
}
