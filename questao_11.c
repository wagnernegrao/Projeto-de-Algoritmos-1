#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char a[100];
  int c = 0, i = 0;
  printf("Entre com a string: ");
  scanf("%[^\n]s", a);
  while (a[i] != '\0'){
    c++;
    i++;
  }
  printf("valor: %i", c);
}
