#include <stdio.h>
#include<stdlib.h>
    // Pointers
// void swap(int* a, int* b){ //a=10, b=20
//     int temp = *a; //10
//     *a = *b; //20
//     *b = temp; //10
// }

void swap(int a, int b){ //a=10, b=20
    int temp = a; //10
    a = b; //20
    b = temp; //10
    printf("A and B values are: %d %d\n", a, b);
}
int main() {
    // int num = 10;
    // int* ptr = &num;
    // printf("Value of num %d \n", num); // 10
    // printf("Value of num using pointer %d \n", *ptr); //10
    // printf("Address of num %d \n", &num);
    // printf("Address of num using pointer %d \n", ptr);

    // int x = 10, y = 20;
    // printf("Before Swapping Values x: %d y: %d\n", x,y);
    // swap(&x, &y);
    // // swap(x, y);
    // printf("After Swapping Values x: %d y: %d\n", x,y);
    return 0;
}
