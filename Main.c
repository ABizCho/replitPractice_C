#include <stdio.h>

#include "hello.h" // 사용자 소스경로에서 파일을 찾을땐 쌍따옴표로 헤더파일 지정 [프로젝트단위 기본경로호출] 


//메인함수=======================
int main(void)
{
  print_hello();
  
  return 0;
}

//===============================

//사용자 함수정의부==============
void print_hello(void)
{
  char cvar_hello[] = "Hello";
  printf("%s",cvar_hello);
}
//===============================