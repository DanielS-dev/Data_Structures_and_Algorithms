#include <stdio.h>

int NaiveGCD(int a,int b){
    int best = 1;

    for (int i = 2; i <= a && i <= b; i++){
        if ( a % i == 0 && b % i == 0){
            best = i;
        }
    }

    return best;
}

int main (void){

    int numberOne;
    int numberTwo;

    scanf("%d", &numberOne);
    scanf("%d", &numberTwo);

    printf("GCD(%d,%d) = %d",
        numberOne,
        numberTwo,
        NaiveGCD(numberOne, numberTwo)
        );

    return 0;
}