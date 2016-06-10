	
#include <stdio.h> 

int main(void) 
{ 
int mas[21]; 
int i = 0, x, chislo, kolichestvo = 0; 

	for(x = -10; x <= 10; x++) { 
	mas[i] = x; 
		i++; 
} 

	for(i = 0; i < 21; i++) { 
	printf("\t%d\n", mas[i]); 
} 

		printf("\nVvedite chislo: "); 
		scanf("%d", &chislo); 

	for(i = 0; i < 21; i++) { 
	if(chislo < mas[i]) { 
	kolichestvo = kolichestvo + 1; 
} 
} 

	printf("\n%d", kolichestvo); 

return 0; 
}
