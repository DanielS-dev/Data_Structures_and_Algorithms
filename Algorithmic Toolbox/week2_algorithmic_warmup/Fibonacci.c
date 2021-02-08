#include <stdio.h>

int FibRecurs(int n){
	if (n <= 1){
		return n;
	};
	
	return FibRecurs(n-1) + FibRecurs(n -2);
	
};


int main (void){
	
	int n;
	
	scanf("%i", &n);
	
	
	printf("%d", FibRecurs(n));
	
	return 0;	
};
