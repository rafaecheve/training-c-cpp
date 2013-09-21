//
//  File.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/13/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#include <stdio.h>

int main (int argc, char ** argv) {

    puts("C99 Version");
    
    for (int i = 0; argv[i]; i++) {
        printf("%d %s\n", i, argv[i]);
    }

    return 0;
}