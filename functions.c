#include <stdio.h>

int sum(int a, int b);
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