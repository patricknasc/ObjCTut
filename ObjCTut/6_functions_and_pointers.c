//
//  6_functions.c
//  ObjCTut
//
//  Created by Patrick Nascimento on 01/09/16.
//  Copyright © 2016 patrix. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

void convertData(char *name, float height, float weight){
    name = "Deutrano";
    height = height * 12 * 2.54;
    weight = weight * .453592;
    printf("%s is %.1f cms tall and weighs %.2f kg\n", name, height, weight);
}

float sum(float num1, float num2){
    return num1 + num2;
}

void changeNumber(int *number){
    *number = 98765;
}

int main (int argc, const char * argv[]){

    char *name = "Patrick Nascimento";
    
    convertData(name, 5.70, 145);
    
    printf("Name in main: %s\n", name);
    
    printf("5 + 6 = %.1f\n", sum(5,6));
    
    int randNum = 12345;
    
    printf("randNum location : %p\n", &randNum);
    
    int *addrRandNum = &randNum; //creating a pointer to randNum memory address.
    
    *addrRandNum = 54321; //attributing a new value to the memory address pointed.
    
    printf("randNum value : %d\n", randNum); //randNum with a different value.
    
    printf("randNum Memory Location : %p\n", &randNum); //randNum with the same memory address.
    
    printf("randNum is %zu bytes\n", sizeof(randNum));
    
    int number = 12345;
    
    changeNumber(&number);
    
    printf("number value : %d\n", number);
    
    return 0;
}
