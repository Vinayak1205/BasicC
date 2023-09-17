// Program to Split the digits of a given number //

#include <stdio.h>
#include <conio.h>

int main(){

        int num,digit;

        printf("Enter  a number: ");
        scanf("%d",&num);

        while(num>0){

            digit = num % 10;
            printf("%d ",digit);
            num/=10;
        }

        return 0;
}