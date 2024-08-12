#include <stdio.h>
#include <cs50.h>

int main(){
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 9 - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        printf("%d", array[i]);
    }
    return 0;
}