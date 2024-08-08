#include <cs50.h>
#include <stdio.h>

int main(void){
    int numbers[] = {1,5,10,50,100,200,500};
    int n = get_int("Number: ");
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int startIndex = 0;
    int endIndex = size - 1;

    if(size == 0){
        printf("No array found");
        return 1;
    }

    for(; startIndex <= endIndex; ){
        int middleIndex = startIndex + (endIndex - startIndex) / 2;
        if(n == numbers[middleIndex]){
            printf("Found\n");
            return 0;
        }
        else if(n < numbers[middleIndex]){
            endIndex = middleIndex - 1;
        }
        else{
            startIndex = middleIndex + 1;
        }
    }
    printf("Not Found\n");
    return 1;
}