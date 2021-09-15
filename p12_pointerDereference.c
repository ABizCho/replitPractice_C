#include <stdio.h>

int main(){

  int i = 0;
  int *point;

  point = &i;

  printf("포인터값 : %p\n",point);
  printf("i의 메모리주소 : %p\n",&i);
  printf("point가 역참조한 i의 값 : %d",*point); // 선언된 pointer에 *을 붙여서 포인터가 향하는 메모리주소에 저장된 값을 역참조할 수 있다.
}