#include <stdio.h>

void p8_for(void)
{
  int i = 0;
  int sum = 0;

  for ( i = 1; i <= 10; i++){
    printf("=============\n");
    printf("try(%d)\n\n",i);
    printf("i: %d\n",i);
    printf("sum_before: %d\n",sum);

    sum= sum+i;
    printf("sum_after: %d\n",sum);
    printf("=============\n");
  }
  printf("\n==================\n");
  printf("sum_Final: %d",sum);

}