#include <stdio.h>
#include <stdbool.h>

int main(){
    // logical operators = ! (not) reverses the state of  a condition
    bool sunny = true;

    if (!sunny){
        printf("The weather is cloudy");
    }
    else{
        printf("The weather is sunny");
    }

    return 0;
}