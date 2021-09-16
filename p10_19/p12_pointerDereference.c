d#include <stdio.h>

int main(){

  int i = 0;
  int *point;

  point = &i;

  printf("포인터값 : %p\n",point);
  printf("i의 메모리주소 : %p\n",&i);
  printf("point가 역참조한 i의 값 : %d\n",*point); // 선언된 pointer에 *을 붙여서 포인터가 향하는 메모리주소에 저장된 값을 역참조할 수 있다.

  //역참조연산자로 포인터가 가리키는 메모리주소에 값을 새로 저장하겠다.
  *point = 10;
  printf("역참조연산자로 새로 할당된 값 : %d\n",*point);


  //정리
  // 주소연산자 : &a - 변수가 저장된 메모리주소를 반환

  // 역참조연산자 :*a 

  // 포인터 그 자체는 메모리의 주소만을 기억한다. (위치만 알고있을 뿐이다) => 역참조연산자 *가 그 주소를 역참조하는것이다.
}