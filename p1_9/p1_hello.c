//헤더
#include <stdio.h>

#include "p1_hello.h"

//main함수

int main(){
  print_hello();
  return 0;
}

//사용자 함수정의부==============

void print_hello(void)
{
  char cvar_hello[] = "Hello";
  printf("%s",cvar_hello);
}
//===============================