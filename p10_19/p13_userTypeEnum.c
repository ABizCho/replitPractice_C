//user define Datatype
//사용자정의 자료형 ( 1.열거체:enum / 2.구조체 )

 //1. enum : 열거체는 서로 연관된 정수형 상수들의 집합이다.
 // 믾은 정수형 상수를 선언하면 번거로운데 이런 문제를 해결해줌
 // 열거형 값에 해당하지 않는 값이 열거형 변수에 대입되는 문제를 해결할 수 있음  (임의의 정수값은 대입될 수 있음 )
 
#include <stdio.h>

// c,c++에선 열거체 내 원소에 초깃값을 설정하지 않으면 0부터 차례대로 할당한다

const int ValueA = 1 ; 
const int ValueB = 2 ;
const int ValueC = 3 ;

enum Week 
{
  WEEK_MONDAY, //0
  WEEK_TUESDAY, //1
  WEEK_WEDNESDAY,//2
  WEEK_THURSDAY,//3
  WEEK_FRIDAY,//4
  WEEK_SATURDAY,//5
  WEEK_SUNDAY//6
};

int main()
{
  printf("%d\n",ValueA);

  enum Week week1 = WEEK_SUNDAY ; 
  printf("%d\n",week1);
  enum Week week2 = WEEK_FRIDAY;
  printf("%d\n",week2);
  return 0;

}