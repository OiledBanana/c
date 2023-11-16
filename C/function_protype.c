#include <stdio.h>

void Hello(char[],int); // function prototype for hello function

void Hello(char x[], int y){

    printf("\nYour name is %s",x);
    printf("\nYour age is %d",y);

}

int main(){

    // to ensure calls to a function are made with correct arguments
    char name[] = "Adrian";
    int age = 24;
    Hello(name,age);

    return 0;
}