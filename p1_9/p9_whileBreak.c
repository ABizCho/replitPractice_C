#include <stdio.h>

int main()
{
  int i = 0;

  while ( i < 10 )
  { 
    printf("i : %d\n",i);
    i++;
    printf("i++ : %d\n\n",i);

    if ( i == 7)
    {
      printf("i == 7 -> break");
      break;
    }

  }
  return 0;
}