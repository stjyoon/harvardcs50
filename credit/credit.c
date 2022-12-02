#include <stdio.h>
#include <math.h>

int main(void) 
{
  long cardnum;
  printf("Enter cardnumber: ");
  scanf("%d", &cardnum);
  printf("You have entered: %d", cardnum);
  
  int lengthnum = round(log(cardnum)/log(10));
  printf("%d\n", &lengthnum);

  return 0;
}
