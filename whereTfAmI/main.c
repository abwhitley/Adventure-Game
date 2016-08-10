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
int redo = -1;
int cont = -1;
int door = -1;
int room = -1;
int theEnd(int ending);
int doorChoice(int door);
void room2();
void room3();
void room4();
void room5();
void room6();
void death();
void fleshWound();
void onlyAScratch();
void monty();
void paddleFaster();
int retry(int redo);

int main(int argc, const char * argv[]) {
   // retry(<#int redo#>);
   // if (redo!= -1 || redo !=1){
   //     return 0;
    //}else{
    printf("You are dropped in a empy room all white with two doors on opposite side.\nDoor one is a blood red.\nDoor two is dark blue.\nWhich do you choose?\n(Enter 1 or 2)\n");
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
    //}

}

void room2(){
    printf("You have arrived in room 2\n");
    printf("After walking through the red door\nYou notice vents in the floor to small to fit in,\nbut there is also a wooden ladder leading to a trap door in the ceithing\nAnd also a set of stairs leading down a corridor to another red door.\nDo you choose to go down the stairs or up the ladder?\n(Choose 1 for stairs or 2 for ladder)\n");
    scanf("%d", &door);
    printf("You chose door %d\n", door);
    
    if(door == 1){
        room4();
    }else{
        room5();
    }
    
    
}

void room3(){
    printf("You walk through the blue door and discover a portal\nIt looks dangerous but the blue door has disappered\nDo you go through the portl or do you sit and die?\n(Enter 1 to sit and die or 2 to be adeventourous)\n");
    scanf("%d", &door);
    if(door == 1){
        printf("You chose the cowards way.");
        death();
    }else{
        int portal = arc4random_uniform(2);
        printf("%d", portal);
        if (portal == 0) {
            room5();
        }else{
            room6();
        }
        
    }
}

void room4(){
    printf("As you walk down the stairs towards the red door\nYou start to hear a faint sound what sounds like a horse galloping.\nYou disregard the sound and continue though the door.\n As you open the door a opeing in a forest appears before you.\n");
    monty();
}

void room5(){
    printf("You climb up the ladder, open the trap door\nYou find yourself transported to a river and see a cannoe on the bank\n Do you jump in the cannoe or walk along the bank?\n(Enter 1 to jump in the cannoe or 2 for a walk along the bank)\n");
    fpurge(stdin);
    scanf("%d", &cont);
    if(cont == 1){
        
    }
}

void room6(){
    death();
}

void death(){
    printf("You are dead\n");
}
void fleshWound(){
    printf("Mearly a flesh would - you say\n");
    printf("The man cuts of your legs and leaves you for death.\n");
    death();
}
void onlyAScratch(){
    printf("Tis only a scratch ive had worse. - you say\n");
}

void monty(){
    printf("The sound of horses grows louder,\nAnd as fast as you can think a man galloping through the woods\nHe comes around the bend with a hunchback man clapping coconuts together appears.\nHe asks to get by you do you allow him?\n(Enter 1 for yes or 2 for no.)\n");
    scanf("%d", &door);
    if(door == 1){
        printf("Then man invites you on his quest for the holy grail.\n");
    }else{
        printf("He challanges you to a fight, and you lose an arm.\n");
        onlyAScratch();
        printf("Would you like to continue fighting? Enter 1 for yes 2 for no.\n");
        fpurge(stdin);
        scanf("%d", &cont);
        if(cont == 1){
            printf("You have lost both arms.\n");
            fleshWound();
        }else{
            printf("He spares your life but your bleed profusly from the 'scratch'.\nThe blood thirst rabbit does not spare you.\n");
            death();
        }
    }
    
}
void paddleFaster(){
    printf("You here banjos\n");
    printf("Paddle Faster?\n(Enter 1 for yes or 2 to enjoy the music)\n");
    fpurge(stdin);
    scanf("%d", &cont);
    if (cont == 1) {
        printf("escaped somthing nasty and made it down the stream without incident.");
    }else{
        death();
    
    }
}
int retry(int redo){
    printf("Would you like to Start?\nEnter 1 to Start.\n0 to exit.\n");
    fpurge(stdin);
    scanf("%d", &redo);
    return redo;
    
}



