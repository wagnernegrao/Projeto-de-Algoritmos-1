#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[10], b[10], c[20];
	int i = 0, j = 0;
  
	printf("Primeiro nome: ");
	scanf("%[^\n]s", &a);
  	setbuf(stdin, NULL);
  
	printf("Segundo nome: ");
	scanf("%[^\n]s", &b);
  	setbuf(stdin, NULL);

	while (a[i] != '\0') {
		c[i] = a[i];
		i++;
	}
	
  	while (b[j] != '\0') {
		c[j + i] = b[j];
		j++;
	}
  
  	printf("\n\n%s", c);    
}
