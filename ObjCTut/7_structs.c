//
//  7_structs.c
//  ObjCTut
//
//  Created by Patrick Nascimento on 01/09/16.
//  Copyright © 2016 patrix. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

struct SuperHero{
    char *realName;
    char *superName;
    float height;
    float weight;

};


int main (int argc, const char * argv[]){
    struct SuperHero superman;
    
    superman.realName = "Clark Kent";
    superman.superName = "Superman";
    superman.height = 6.25;
    superman.weight = 235;
    
    printf("%s is the hero named %s. He is %.2f ft tall and weighs %.2f weight\n",superman.realName, superman.superName, superman.height, superman.weight);

}

