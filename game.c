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

void game_result(int heads_count,int tails_count){
    if(heads_count>tails_count){
        printf("you won!\n");
    }else{
        printf("you lost!\n");
    }
}

int main(){
    int i,count=0,heads_count=0,tails_count=0;
    char coin[6];

    srand(time(NULL));

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
    game_result(heads_count,tails_count);

    return 0;
}