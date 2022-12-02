#include <stdio.h>

int main() {
  int pheight;
  printf("Enter a height for the pyramid: \n");
  scanf("%d", &pheight);
  while (pheight < 1) {
    printf("Enter a positive integer height: \n");
    scanf("%d", &pheight);
  }
  int i;
  int j;
  for (i = 0; i < pheight; i++) {
    // need to figure out how to decrement amount of spaces per row
    for (j = pheight - (i + 1); j > 0; j--) {
      printf(" ");
    }
    for (j = 0; j <= i; j++) {
      printf("#");
    }
    printf("  ");
    for (j = 0; j <= i; j++) {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
