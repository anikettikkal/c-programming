#include<stdio.h>
int main(){

    // if-else statement
    /*
    int age=14;
    if (age>20)
    {
        printf("student is valid for submitting form: %d \n");
    }
    else
    {
        printf("student is not valid for submitting form: %d \n");
    }
    printf("thank you \n");
    */

    // if-else ladder
    /*
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if (age>20)
    {
        printf("student is valid for submitting form: %d \n");
    }
    else if (age==20)
    {
        printf("student need to submit additional documents: %d \n");
    }
    
    else
    {
        printf("student is not valid for submitting form: %d \n");
    }
    printf("thank you \n");
    */


    // switch case

    int day;
    printf("enter day number: ");
    scanf("%d", &day);
    switch (day){
        case 1: printf("monday\n");
                break;
        case 2: printf("tuesday\n");
                break;
        case 3: printf("wednesday\n");
                break;
        case 4: printf("thursday\n");
                break;
        case 5: printf("friday\n");
                break;
        case 6: printf("saturday\n");
                break;
        case 7: printf("sunday\n");
                break;

        default: printf("invalid day number\n");
                break;
    }
    




    return 0;
}