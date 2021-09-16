#include <stdio.h>
//while로 1~10 summation
int main(){
  int i = 0 ;
  int sum = 0 ;

  while ( i < 10 ){
    printf("i= %d\n",i);
    printf("sum_before= %d\n",sum);
    i++;
    sum =sum+i;
    printf("i++ = %d\n",i);
    printf("sum_after= %d\n",sum);
    printf("\n");
  }
  printf("\n=============\n");
  printf("sum_Final= %d\n",sum);
  return 0;
}