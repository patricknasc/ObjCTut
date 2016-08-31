//
//  2_fahrenheit_celsius_converter.c
//  ObjCTut
//
//  Created by Patrick Nascimento on 31/08/16.
//  Copyright © 2016 patrix. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){

    float fTemp;
    
    printf("Enter Temp in F: ");
    
    scanf("%f", &fTemp);
    
    float cTemp = (fTemp - 32)/1.8;
    
    printf("%.1f degrees Celsius\n", cTemp);
    
    return 0;
}