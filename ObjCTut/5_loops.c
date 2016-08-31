//
//  5_loops.c
//  ObjCTut
//
//  Created by Patrick Nascimento on 31/08/16.
//  Copyright © 2016 patrix. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]){

    printf("For loop");
    for(int i = 1; i <= 10; i++){
        if(i == 9){ //doesn't reach the print because it jumps out of the loop
            break;
        }
        if(i == 7){ //skip printing 7, jumping back to the top of the loop
            continue;
        }
        if(i % 2){//odd number, returns sth other than 0
            printf("i : %d\n", i);
        }
    }
    
    
    printf("While loop");
    int j = 1;
    while (j <= 10){
        printf("j : %d\n", j);
        j++;
    }
    
    
    printf("While loop");
    int guess;
    
    do{
        printf("Guess a number between 0 and 20: ");
        scanf("%d", &guess);
    
    } while (guess != 15);
    printf("Well done, the right number was 15! ");
}
