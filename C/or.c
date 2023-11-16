#include <stdio.h>
#include <stdbool.h>

int main(){
// logical operators = || (or) to check if atleast one statement is true

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 || temp  > 30 ){
        printf("\nThe weather is good");
    }
    else{
        printf("\nThe weather is bad");
    }
    return 0;
}