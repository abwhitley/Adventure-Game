//
//  main.c
//  whereTfAmI
//
//  Created by Austins Work on 8/9/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int door = -1;
int room = -1;
int theEnd(int ending);
int doorChoice(int door);
void room2();
void room3();
void room4();
void room5();
void room6();


int main(int argc, const char * argv[]) {
    
    printf("Theres door 1 and door 2. What is your choice?\n");
    scanf("%d", &door);
    printf("You choose door number %d\n", door);
    
    if(door == 1){
        room2();
        door =-1;
    }else{
        room3();
        door = -1;
    }
    
    return 0;
}

void room2(){
    printf("You have arrived in room 2\n");
    printf("Theres door 3 and door 4. Which do you choose?\n");
    scanf("%d", &door);
    printf("You chose door %d\n", door);
    
    if(door == 3){
        room4();
    }else{
        room5();
    }
    
    
}

void room3(){
    printf("You have arrived in room 3\n");
    printf("Theres door 5 and door 6. Which do you choose?\n");
    scanf("%d", &door);
    printf("You choose door %d\n", door);
    
    if(door == 5){
        room5();
    }else{
        room6();
    }
}

void room4(){
    printf("Welcome to room 4\n");
}

void room5(){
    printf("Welcome to room 5\n");
}

void room6(){
    printf("Welcome to room 6\n");
}

/*int doorChoice(int door){
    
}*/


/*int theEnd(int ending){
    switch(ending){
        case 0: {//ending one
            
        }
        case 1: {//ending two
            
        }
        case 2: {//ending three
            
        }
        defualt: {//mystery ending??
            
        }
    }
}*/
