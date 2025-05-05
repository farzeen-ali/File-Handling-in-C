#include <stdio.h>
// Simple Array
// Index // 0 
// Length (size) // 1
int main() {
    // 5 , 4
    // int numbers[5] = {10,20,30,40,50}; // declaration + initialization
    // printf("The value of 2 index is: %d", numbers[2]);

    int size;
    printf("Enter any size for array: \n");
    scanf("%d", &size);

    int marks[size];
    printf("Enter Values in array: \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &marks[i]);
    }
    printf("Your values are: \n");
    // for(int i = 0; i < size; i++){
    //     printf("The value of %d index is: %d\n", i, marks[i]);
    // }
    for(int i = size - 1 ; i >= 0; i--){
        printf("The value of %d index is: %d\n", i, marks[i]);
    }
    return 0;
}