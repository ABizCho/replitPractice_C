#include <stdio.h>

int main(){
  int i = 0;

 

  do{
    printf("do명령문실행( i == %d )\n",i );
    i++;
  } 
  while( i < 10 );

  printf("i == %d\n",i);
  
  goto jam ;

  printf("i == %d\n",i);
  i = 0;

   jam:
    printf("i == %d\n",i);
    printf("Exit");
    return 0;
}