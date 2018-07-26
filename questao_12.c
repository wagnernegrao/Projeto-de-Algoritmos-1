#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[10], b[10], c[20];
	int i = 0, j = 0;
  int tt_a = 0, tt_b = 0;
	printf("A: ");
	scanf("%[^\n]s", &a);
	setbuf(stdin, NULL);
	
	printf("B: ");
	scanf("%[^\n]s", &b);
	setbuf(stdin, NULL);
	
	
	while(a[tt_a] != '\0'){
	  tt_a++;
	}
	while(b[tt_b] != '\0'){
	  tt_b++;
	}
	if (tt_a == tt_b){
	  	while(a[i] != '\0'){
	      if(a[i] == b[i]){
	        j++;
	      }
	      i++;
      }
	}

	
	if (tt_a == j && tt_b == j){
	  printf("String igual\n");
	}else{
	  printf("String diferente\n");
	}
	
	return 0;
}
