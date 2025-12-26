#include <stdio.h>

// int sum(int a, int b);
    // void greet();
    // void goodbye();  // function declaration

    /*
    int main(){
        greet();
        goodbye(); // function call
        return 0;
    }

    // function definition

    void greet(){
        printf("Happy Learning C Programming\n");
    }

    void goodbye(){
        printf("Goodbye! See you next time.\n");
    }
    */

    /*

    int main()
{

    int a, b;

    printf("enter values of a: %d\n");
    scanf("%d", &a);
    printf("enter values of b: %d\n");
    scanf("%d", &b);
    int result = sum(a,b);
    printf("The sum is: %d\n", result);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
    */

// library functions 
/*
#include <math.h>
void square(int a);

int main(){
    int a;
    printf("enter number %d\n");
    scanf("%d", &a);
    
    square(a);
    return 0;
}

void square(int a){
    int result = pow(a,2);
    printf("The square is: %d\n", result);
}
*/

// recursive functions = a function that calls itself

// print hello world five times using recursion
void printHw(int n);
int main(){
    printHw(5);
    return 0;
}
void printHw(int n){
    if(n==0){
        return;
    }
    printf("Hello World\n");
    printHw(n-1);
}