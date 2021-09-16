#include <stdio.h>

int main(){
  
  int in;
  printf("정수를 입력하세요: ");
  scanf("%d",&in);
  
  if(in >100 )
  {
    printf("100보다 큰 정수");
  }
  else if(in >10)
  {
    printf("10보다 크고 100보다 작거나 같은 정수");
  }
  else
  {
    printf("10보다 작거나 같은 정수");
  }
}