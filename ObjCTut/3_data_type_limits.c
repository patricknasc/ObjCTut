//
//  3_data_type_limits.c
//  ObjCTut
//
//  Created by Patrick Nascimento on 31/08/16.
//  Copyright © 2016 patrix. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>


int main(int argc, const char * argv[]){

    int bigInt = 2147483647;
    printf("Absolute smallest int number : %d\n", bigInt + 1);
    
    long bigLong = 9223372036854775807;
    printf("Absolute smallest long number : %ld\n", bigLong + 1);
    
    printf("Absolute smallest float number: %e\n", FLT_MIN); //available with <float.h>
    
    printf("Absolute biggest float number : %e\n", FLT_MAX);
    
    float pi = 3.1415926;
    printf("3.1415926 + .0000001 = %.7f\n", pi + .0000001);
    printf("Precise decimal digits limited to : %d\nAnything else is ignored!\n", FLT_DIG);
    
    
    // Comparison operators: < > <= >= == !=
    
    int age = 13;
    
    if(age <= 6){
        printf("You're in kindergarten\n");
    } else if (age <= 13) {
        printf("You're in Elementary\n");
    } else {
        printf("You're in High School\n");
    }
    
    //Logical operators && || !
    
    if((age >= 12) || (age <= 13)){
        printf("You're in Elementary\n");
    }
    
    int isElementary = ((age >= 12) && (age <= 13));
    
    printf("Is in elementary with int: %d\n", isElementary);
    
    printf("Opposite of True int: %d\n", (!isElementary));
    
    bool isElementaryBool = ((age >= 12) && (age <= 13)); //bool data type #include <stdbool.h>
    
    printf("Is in elementary with bool: %d\n", isElementaryBool);
    
    printf("Opposite of True bool: %d\n", (!true));
    
    return 0;
    
}