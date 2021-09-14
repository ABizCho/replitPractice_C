#include <stdio.h>

int main(){
  
  int score;
  printf("점수를 입력하세요: ");
  scanf("%d",&score);
  
  switch(score/10){
    case 10:
    
    case 9: 
      printf("A"); 
      break;
    
    case 8: 
      printf("B");
      break;
    
    default: 
      printf("F");
    
  }
  return 0;
}