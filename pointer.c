#include<stdio.h>

// pointer - variable that stores address of another variable
int main(){
    /*
    int age = 22;
    int *ptr = &age;
    int _age= *ptr;
    printf("age is %d\n", _age);
    */


    /* 
    int age = 22;
    int *ptr = &age;

    // address of age
    printf("adress of age %p \n", &age); // output is in hexadecimal format
    printf("%u\n", &age); // output is in decimal format and u means unsigned integer
    printf("adress of ptr %u \n", ptr); // output is same as above bcoz age adress store in ptr so output is same
    printf("%u\n", &ptr); // in this we get adress of ptr variable
    */

    // pointer to pointer = the pointer that stores the address of another pointer variable
    /*
    float num=123.32;
    float *ptr = &num;
    float **ptr2 = &ptr;
    printf("pointer value %u\n", &num);
    printf("pointer to pointer value %u\n", &ptr);
    */

    // function and pointer
    // call by value vs call by reference

    return 0;
}