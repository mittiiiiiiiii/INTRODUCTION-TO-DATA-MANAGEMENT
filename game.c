#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

void print_name(){
    char name[100];

    scanf("%s",name);
    printf("Hello %s!\n",name);
}

int main(){
    printf("Who are you?\n> ");

    print_name();

    return 0;
}