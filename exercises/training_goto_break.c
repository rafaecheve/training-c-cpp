//
//  training_goto_break.c
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

int main(int argc, char ** argv) {
    
//    printf("Before \n");
//    
//    goto target;
//    printf("After Go to \n");
//    target:
//    printf("After Go target \n");
//
    
    for (int i = 0; i < 10; i++) {
        
        if (i == 5) continue;
        
        printf("i is %d\n", i);
    }
    
//    for (int i = 0; i < 10; i++) {
//        
//        if (i == 5) break;
//        printf("i is %d\n", i);
//    }

    return 0;
}
