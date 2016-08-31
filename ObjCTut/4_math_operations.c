//
//  4_math_operations.c
//  ObjCTut
//
//  Created by Patrick Nascimento on 31/08/16.
//  Copyright © 2016 patrix. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){

    printf("3 + 2 = %d\n", 3 + 2);
    printf("3 - 2 = %d\n", 3 - 2);
    printf("3 * 2 = %d\n", 3 * 2);
    printf("3 / 2 = %d\n", 3 / 2);
    printf("3 %% 2 = %d\n", 3 % 2);
    printf("3 / 2 = %.2f\n", 3 / (float) 2);
    printf("2 + 1 * 3 = %d\n", 2 + 1 * 3);
    printf("(2 + 1) * 3 = %d\n", (2 + 1) * 3);
    
    
    //Shorthand notations
    int i = 0;
    printf("i++ = %d\n", i++);
    printf("++i = %d\n", ++i);
    
    i = 0; //reseting again.
    printf("i += 5 = %d\n", i += 5 );
    printf("i -= 5 = %d\n", i -= 5 );
    
    i = 1; //reseting again.
    printf("i *= 5 = %d\n", i *= 5 );
    printf("i /= 5 = %d\n", i /= 5 );
    
    //ceiling, rounding upwards
    double pi = 3.1415926;
    float val1, val2, val3, val4;
    val1 = 1.6;
    val2 = 1.2;
    
    printf("Ceiling rounding upwards  %.3lf  = %.3lf\n", pi, ceil(pi));
    printf ("Ceiling rounding upwards  %.1lf  = %.1lf\n", val1, ceil(val1));
    printf ("Ceiling rounding upwards  %.1lf  = %.1lf\n", val2, ceil(val2));
    
    
    //floor, rounding downwards
    val3 = 2.8;
    val4 = 2.3;
    
    
    printf ("Floor rounding downwards %.1lf value3 = %.1lf\n", val3, floor(val3));
    printf ("Floor rounding downwards %.1lf value4 = %.1lf\n", val4, floor(val4));
    
    

}