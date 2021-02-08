#include <stdio.h>

long long Fibonacci_Slow(int n){
	if (n <= 1){
		return n;
	};
	
	return Fibonacci_Slow(n-1) + Fibonacci_Slow(n -2);
	
};

long long Fibonacci_Fast(int n){
	long long Fibonacci_Numbers[n];
	Fibonacci_Numbers[0] = 0;
	Fibonacci_Numbers[1] = 1;
	
	for(int i = 2; i <= n; i++){
		Fibonacci_Numbers[i] = Fibonacci_Numbers[i-1] + Fibonacci_Numbers[i-2];	
	};
	
	return Fibonacci_Numbers[n];
		
};

int main (void){
	
	int n;
	
	scanf("%i", &n);
	
	printf("%lld", Fibonacci_Fast(n));
	
	return 0;	
};
