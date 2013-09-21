//
//  training_pre_conditionals.h
//  Training
//
//  Created by Rafael Echeverria on 9/14/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//

#ifndef Training_training_pre_conditionals_h
#define Training_training_pre_conditionals_h

//#ifdef FOO
//#define NUMBER 47
//#else
//#define NUMBER 2
//#endif

#if defined (FOO)
#define NUMBER 47
#else
#define NUMBER 2
#endif

#endif
