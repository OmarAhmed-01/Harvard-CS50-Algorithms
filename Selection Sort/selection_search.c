#include <stdio.h>
#include <cs50.h>

int main(void){
    int numbers[] = {7,2,5,4,1,6,0,3};
    for(int i = 0; i < 7; i++){
        int minimum = i;
        for(int j = i + 1; j < 8; j++){
            if(numbers[j] < numbers[minimum]){
                minimum = j;
            }
        }
        int temp = numbers[i];
        numbers[i] = numbers[minimum];
        numbers[minimum] = temp; 
    }
    for (int i = 0; i < 8; i++){
        printf("%d", numbers[i]);
    }

    return 0;
}