#include <stdio.h>

int main()
{

  int a= 10; // a의 값 초기화
  int*b = &a; // a 의 포인터 설정
  
  printf("%d",*b); // a의 포인터주솟값 b*출력
  
  return 0;
}