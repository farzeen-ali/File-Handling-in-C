// #include <stdio.h>

// void printNumbers(int n){
//     if(n == 0)
//     {
//         return; // base case
//     }
//         printf("%d ", n);
//         printNumbers(n - 1); // call stack
    
// }

// int main() {
//     int n;
//     printf("Enter any value: \n");
//     scanf("%d", &n);
//     printNumbers(n);
//     return 0;
// }
// #include <stdio.h>

// int factorial(int n){
//     // 5*4*3*2*1
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// int main() {
//     int n;
//     printf("Enter any number: ");
//     scanf("%d", &n);
//     printf("The result of %d factorial is: %d", n, factorial(n));
//     return 0;
// }

// #include <stdio.h>

// int sumOfDigits(int n){
//     if(n == 0){
//         return 0;
//     }
//     return (n%10) + sumOfDigits(n/10);
// }

// int main() {
//     int n;
//     printf("Enter any value: ");
//     scanf("%d", &n);
//     int result = sumOfDigits(n);
//     printf("Sum of Result is: %d", result);
//     return 0;
// }