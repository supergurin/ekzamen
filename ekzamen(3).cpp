#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int mas[20], i, min = 1, max, suma=0, k = 0;
	
	printf("\nn=");
	scanf("%d", &max);
	
	for(i = 0; min <= max; i++, min = min + 1) {
		mas[i] = min;
	    printf("\nmas[%d] = %d", i, mas[i]);
	}	
	
	for(i = 0; i < max; i++){
		suma += mas[i];
	}
	
	printf("\n%d", suma);
	
	return 0;	
}
