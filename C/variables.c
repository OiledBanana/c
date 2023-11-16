#include <stdio.h>

int main(){
    // variable = allocated space in memory to store a value

    int x; // declaration
    x = 1;// initialization
    int y = 12;// declaration and initialization

    int age = 23; // integer
    float gpa = 2.05; // floating point number
    char grade = 'C'; // single character
    char name[] = "Adrian"; // array of characters

    printf("You are %d years old\n",age);
    printf("Your grade is %c\n",grade);
    printf("Your name is %s\n",name);
    return 0;

}