#include <stdio.h>

void birthday(char x[], int y){
    printf("\nHappy birthday to you %s!",x);
    printf("\nYou are now %d",y);
}

int main(){
    char name[] = "Ferdi";
    int age = 21;
    birthday(name,age);
    return 0;
}