#include <stdio.h>

int main()
{
  char* CHAR1 = "fall";
  char CHAR2[6] ="great"; // 배열을 선언해서 문자열을 넣어주고싶다면 마지막 메모리주소에 문자열종료와 같은 기능의 NULL이 들어갈 한칸을 더 추가해줘서 계산해야한다 즉 , 'g''r''e''a''t''NULL' 6을 사이즈로 할당
  char CHAR3[] = "WOW"; // 선언과 즉시 문자열을 할당하므로 굳이 사이즈를 지정해주지 않아도 좋다. 알아서 4를 할당

  printf("%s\n",CHAR1);
  printf("%s\n",CHAR2);
  printf("%s\n",CHAR3);
  printf("\n\n");


  //중요한 사실이 있다, 포인터로 문자열을 할당했을 경우 인덱스를 사용해서 개별 문자에 접근할 수 없다. 그러나 배열을 사용해서 문자열을 할당했을 경우 인덱스를 사용해서 문자열내 개별 문자에 접근할 수 있다. 이를 아래에서 알아보겠다.
  int i ;
  int endpoint_C2 = sizeof(CHAR2)/sizeof(char);
  
  for( i = 0; i < endpoint_C2 ; i++ )
  {
  printf("%c ",CHAR2[i]);
  }
  //
  printf("\n");
  //
  int endpoint_C3 = sizeof(CHAR3)/sizeof(char);
  
  for( i = 0; i <endpoint_C3; i++ )
  {
    printf("%c ",CHAR3[i]);
  }

  return 0;
}