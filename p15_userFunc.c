//사용자정의함수를 이용해 summation 선언 및 활용

#include <stdio.h>

int summation(int a,int b)
{
  int result = 0;
  result = a + b;
  
  return result;
}

int main()
{
  int printVal;
  
  printVal = summation( 1, 2 );
  printf("%d\n",printVal);
  return 0 ;
}