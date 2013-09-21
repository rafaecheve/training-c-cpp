//
//  trainign_assignments.cpp
//  Training
//
//  Created by Rafael Echeverria on 9/15/13.
//  Copyright (c) 2013 rafaecheve. All rights reserved.
//


#include <iostream>
using namespace std;

//struct s {
//    int i;
//    int j;
//    int k;
//};

struct S {
    int a;
    int b;
    int c;
};

int main(int argc, char ** argv) {
    
//assignment operators

//    struct s s1 = {1,2,3};
//    
//    struct s s2, s3;
//    
//    s3 = s2 = s1;
    
//    int i,j,k;
//    
//    i = 5;
//    
//    i = j;
// 
//    k = i;
//    
//    cout << "J is " << i << endl;
    
    
    
//arithmetic operators
    
//    int x = 46;
//    int y = 12;
    
//    float xf = 46.3;
//    float yf = 12.4;
    
//    double xf = 46.3;
//    double yf = 12.4;
//    
//    printf("result is %d\n", x + y);
//    printf("result is %d\n", x * y);
//    printf("result is %d\n", x / y);
//    printf("result is %d\n", x - y);
//    printf("result is %d\n", x % y);
//
//    printf("result is %f\n", xf + yf);
//    printf("result is %f\n", xf * yf);
//    printf("result is %f\n", xf / yf);
//    printf("result is %f\n", xf - yf);
//    
//    printf("result is %f\n", -yf);
//    printf("result is %f\n", +yf);
//    
//    string s1 = "a String";
//    string s2 = "another String";
//    
//    cout << "Concatenation is " << s1 + s2 <<endl;

    
// unary operators
    
//    int i = 12;
    
//    int i = 12.9;

    //prefix return first an then increments
//    i++;
    
    //postfix increment first and then returns
//    ++i;
    
//    char s1[]= "String";
//    
//    char * c = s1;
//    
//    printf("Value is %c\n", *c );
//
//    printf("Value is %c\n", *c++ );
//    printf("Value is %c\n", *c++ );
//    printf("Value is %c\n", *c++ );

//    printf("Value is %d\n",++i);
    
    
    
// comparison operators
 
//    int x = 5;
//    int y = 6;
//    
//    if (x > y) {
//        cout << "x greater than y" << endl;
//    }else if (x < y){
//        cout << "x not greater than" << endl;
//    }else if (x == y) {
//        cout << "equal" << endl;
//    }
    
// logical operators
    
//    int x = 7;
//    int y = 9;
//    
//    if (x == y) {
//        
//        puts ("true");
//    }else{
//        puts ("false");
//    }
//    
//    if (true && true) {
//        
//        puts ("true");
//    }else{
//        puts ("false");
//    }
//    
//    if (false || true) {
//        
//        puts ("true");
//    }else{
//        puts ("false");
//    }
//    
//    if (false || false) {
//        
//        puts ("true");
//    }else{
//        puts ("false");
//    }
//    
//    if (!true) {
//        
//        puts ("true");
//    }else{
//        puts ("false");
//    }
//    
//    if (!false) {
//        
//        puts ("true");
//    }else{
//        puts ("false");
//    }
//    
//    if (true != false) {
//        
//        puts ("true");
//    }else{
//        puts ("false");
//    }

// bitwise operators

//    unsigned int x = 5;
//    unsigned int y = 10;
//    
//    printf("%08x %08x %08x\n", x,y,x & y);
//    
//    printf("%08x %08x %08x\n", x,y,x | y);
//    
//    printf("%08x %08x %08x\n", x,y,x ^ y);
//    
//    printf("%08x %08x %08x\n", x,y, ~x);
//
//    printf("%08x %08x %08x\n", x,y, x << 4);
//    
//    printf("%08x %08x %08x\n", x,y, x >> 4);

    
// compound assignment operators
    
    
//    int x = 5;
//    int y = 10;
//    
//    x += y;
//    
//    printf("x is %d\n",x);
    
// subscript operator
    
    //for indexing
    
//    string s = "string";
//    
//    int i = 5;
//    
//    printf("value is %c\n",s[i]);
    
    
// pointers members indirection operators
 
    
    struct S s = {1,2,3};
    
    struct S *sp = &s;
    
    //member operator
    printf("s has member a: %d b: %d c: %d\n", s.a,s.b,s.c);
    
    //member derefence pointers
    printf("s has member a: %d b: %d c: %d\n", sp->a,sp->b,sp->c);
    return 0;
}


