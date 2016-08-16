//
//  main.c
//  whereTfAmI
//
//  Created by Austins Work on 8/9/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int randomPortal();
int whatRoom();
void room1();
void room2();
void room3();
void room4();
void room5();
void room6();

typedef enum Rooms{
    Room1 = 1,
    Room2,
    Room3,
    Room4,
    Room5,
    Room6
} Rooms;

int main(int argc, const char * argv[]) {
   
    int roomNumber = -1;
    printf("You are in room one\n");
    roomNumber = randomPortal();
    printf(" jumped threw a portal\n");

    switch (roomNumber) {
        case Room1 :{
            printf("You are in room %d\n", Room1);
            room1();
            break;
        }
        case Room2 :{
            printf("You are in room %d\n", Room2);
            room2();
            break;
        }
        case Room3 :{
            printf("You are in room %d\n", Room3);
            room3();
            break;
        }
        case Room4 :{
            printf("You are in room %d\n", Room4);
            room4();
            break;
        }
        case Room5 :{
            printf("You are in room %d\n", Room5);
            room5();
            break;
        }
        case Room6 :{
            printf("You are in room %d\n", Room6);
            room6();
            break;
        }
        default: {
            printf("Whoops your not in a room!\n");
            break;
        }
    }
    return 0;
}

int randomPortal(){
    int portal = -1;
    portal = arc4random_uniform(6) + 1;
    return portal;
    
}
void room1(){
    printf("Claify Room1\n");

}
void room2(){
    printf("Clarify Room2\n");
}
void room3(){
    printf("Clarify Room3\n");
}
void room4(){
    printf("Clarify Room4\n");
}
void room5(){
    printf("Clarify Room5\n");
}
void room6(){
    printf("Clarify Room6\n");
}
