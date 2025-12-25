#include<stdio.h>
int main(){
    // for loop
    // for (initilization; condition; increment/decrement)
    // {
    //     /* code */
    // }

    /*
    for (int i = 1; i <= 100; i++)
    {
        if (i%2==0)
        {
            printf("even number %d \n",i);
        } else{
            printf("odd number %d \n",i);
        }
        
    }
    */

    // preincrement and postincrement
    int a = 5;
    // post increment
    printf("%d\n", a++); // value of a is 5 then a++ makes it 6 in next line

    // pre increment
    printf("%d\n", ++a); // value of a becomes 6 in first row now ++a makes it 7 

    // while loop
    /*
    int x;
    printf("enter the value of x\n");
    scanf("%d", &x);
    
    int i = 1;
    while(i<=x){
        printf("value of i is %d\n", i);
        i++;
    }
    */

    // finding the sum of first n natural numbers using  loop
    /*
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);

    int sum=0;
    for(int i=1; i<=n;i++){
        sum=sum+i;
    }
    printf("the sum is %d\n", sum);
    */

    // break and continue statement
    for(int i=1; i<=10; i++){
        if (i==5)
        {
            printf("this number is middle number \n");
            continue; // it will skip the rest of the code in this iteration and move to next iteration
        }
        printf("the number is %d\n", i);
        
    }

    for(int i=1; i<=10; i++){
        if (i==5)
        {
            printf("this number is middle number \n");
            break; // it will skip the rest of the code in this iteration and move to next iteration
        }
        printf("the number is %d\n", i);
        
    }
    printf("loop ended\n");





    return 0;
    
}