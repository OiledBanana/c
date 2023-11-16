#include <stdio.h>


// must specify the data type in fucntion to return it
double square(double x){

    if (x ){
        return x * x;
    }

    else{
        return printf("Not an integer");


    }
}



int main(){
    double x = square(3.14);

    return 0;
}