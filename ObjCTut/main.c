//
//  main.c
//  ObjCTut
//
//  Created by Patrick Nascimento on 31/08/16.
//  Copyright © 2016 patrix. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int i=0; i< argc; i++) {
        printf("arg %d : %s\n", i, argv[i]);
    }
    
    
    return 0;
}
