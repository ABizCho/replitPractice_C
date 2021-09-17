//재귀함수란 함수에 매개변수로 입력받은 인자를 해당 함수의 명령문 내에서 '매개변수명'으로 호출하여 활용하는 함수이다
  //C에서는 매개변수명을 해당함수 내에서 호출하여 사용한다
  //C++에서는 함수명(매개변수명)을 함수내에서 호출하여 사용한다.

#include <stdio.h>

int self_square(int n){
  return n*n;
}

int main()
{
  int result=0;
  result = self_square(3);
  printf("%d\n",result);
  return 0;
  
}
