//
//  training_constants.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

#define ONE 1
#define ST ("Hello")

const int iOne = 1;


int main(int argc, char ** argv) {
    
    printf("The constant %d\n",ONE);
   
    printf("The constant %s\n",ST);
    
    printf("The constant %i\n",iOne);
    
    const int * d = &iOne;
    
    printf("The constant %i\n",*d);


    return 0;
}
