#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string strings[] = {"battleship", "boot", "canon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for(int i = 0; i < 6; i++){
        if(strcmp(strings[i], s) == 0){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}