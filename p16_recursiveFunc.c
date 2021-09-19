//재귀함수란 사용자정의함수내에서 스스로를 호출해서 사용하는 함수이다. if->return 을 사용해서 루프의 종료를 임의로 지정할 수 있다. 
#include <stdio.h>

void milkJam(int count);

int main()
{
  milkJam(1);
  return 0;

}

void milkJam(int count)
{
  printf("%s\n","milk");
  if( count == 3 ) return;
  
  milkJam(count+1);

  printf("%s\n","jam");
}
