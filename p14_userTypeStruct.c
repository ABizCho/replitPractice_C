//사용자정의자료형 (2)구조체 : struct

 //구조체(struct)란 사용자가 C언어의 기본 자료형타입을 가지고 새롭게 정의하여 사용할 수 있는 사용자 정의 자료형이다.
 
 //C,C++에만 지원하는 자료형으로, 자바 파이썬에서는 지원하지 않는다(Class를 이용해 struct를 구현할 수 있다)
 
 #include <stdio.h>
 
 struct Student{
   char gender;
   char name;
   int age ;
 };
 
 struct Animal{
   char NAME;
   int CODE;
 };
 
 
 
 int main(){
   struct Student s1 ;
   
   s1.gender = 'M';
   s1.name = 'A';
   s1.age = 11;
   
   printf("==s1 info==\n\n");
   printf("%c\n", s1.gender);
   printf("%c\n", s1.name);
   printf("%d\n", s1.age);
   printf("===========\n\n");
  
   
   int i = 0 ;
   
   struct Animal a1 ;
   a1.CODE = 11; a1.NAME = 'A';
   a1.CODE= i;
   printf("==a1 info==\n\n");
   printf("%d\n",a1.CODE);
   printf("%c\n",a1.NAME);
   printf("===========\n\n");
   
   
   return 0;
 }