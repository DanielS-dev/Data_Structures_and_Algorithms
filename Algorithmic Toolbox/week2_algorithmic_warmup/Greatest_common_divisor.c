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

long int EuclidGCD(long a,long b){

    if (b == 0){ 
        return a;
    }
    else{
       a = a % b;
    }

    return EuclidGCD(b,a);
}

int main (void){

    int numberOne;
    int numberTwo;

    scanf("%d", &numberOne);
    scanf("%d", &numberTwo);

    printf("NaiveGCD(%d,%d) = %d",
        numberOne,
        numberTwo,
        NaiveGCD(numberOne, numberTwo)
        );

    printf("\naEuclidGCD(%d,%d) = %ld",
        numberOne,
        numberTwo,
        EuclidGCD(numberOne, numberTwo)
        );

    return 0;
}