#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

int coin_toss(){
    if (rand()%2==0){
        return 0;
    }else{
        return 1;
    }
}

void print_name(char name[]){
    scanf("%s",name);
    printf("Hello %s!\n",name);
}

void game_result(char name[],int heads_count,int tails_count){
    if(heads_count>tails_count){
        printf("%s won!\n",name);
    }else{
        printf("%s lost!\n",name);
    }
}

int main(){
    int i,count=0,heads_count=0,tails_count=0;
    char coin[6],name[20];
    srand(time(NULL));

    printf("Who are you?\n> ");

    print_name(name);

    printf("Tossing a coin...\n");

    for(i=0;i<3;i++){
        if(coin_toss()==0){
            strcpy(coin,"Heads");
            heads_count++;
        }else{
            strcpy(coin,"Tails");
            tails_count++;
        }

        printf("Round %d: %s\n",i+1,coin);
    }

    printf("Heads: %d, Tails: %d\n",heads_count,tails_count);
    game_result(name,heads_count,tails_count);

    return 0;
}