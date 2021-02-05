#include <stdio.h>

long long Maximum_Pairwise_Product (long long vetor[], int lenght_vector){
	
	long long product = -1;
		
	for (int i = 0; i < lenght_vector; i++){
		for (int j = i + 1; j < lenght_vector; j++){
			if (vetor[i] * vetor[j] > product){
				product = vetor[i] * vetor[j];
			};
		};
	};
	
	return product;
};

long long Maximum_Pairwise_Product_Fast(long long vetor[], int lenght_vector){
	
	int index_first_max = 0;
	int index_second_max = 0;
	
	for (int i = 0; i < lenght_vector; i++){
		if (vetor[i] > vetor[index_first_max]){
			index_first_max = i;	
		};
	};
	
	if (index_first_max == 0){
		index_second_max = 1;
	};
	
	for (int i = 0; i < lenght_vector; i++){
		if (vetor[i] > vetor[index_second_max] && i != index_first_max){
			index_second_max = i;	
		};
	};
	
	long long product = vetor[index_first_max] * vetor[index_second_max];
	
	return product;
};

int main (void){

	int lenght_vector;
	
	scanf ("%d", &lenght_vector);
	
	long long vetor[lenght_vector];
	int input;
	
	for (int i = 0; i < lenght_vector; i++){
		scanf("%d", &input);
		vetor[i] = input;	
	};
	
	//printf("%lld", Maximum_Pairwise_Product(vetor, lenght_vector));
	printf("%lld", Maximum_Pairwise_Product_Fast(vetor, lenght_vector));
	
	return 0;	
};
