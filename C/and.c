#include <stdio.h>
#include <stdbool.h>

int main(){
// logical operators == && and to check if two conditions are true

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good");
    }
    else{
        printf("\nThe weather is bad");
    }
    return 0;
}