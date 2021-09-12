#include <stdio.h>

/* 피라미드1.순행
int main()
{
  char star = '*' ;
  char enter = '\n' ;
  int i = 0 ;
  int j = 0 ;
  
  for ( i = 0; i < 5; i++)
  {
    
    for (j = 0; j <= i; j++)
    {
      printf( "%c", star );
    }
    
    printf( "%c", enter );
  }
  return 0;

}
*/

/* 피라미드2.역행
int main()
{
  char star = '*' ;
  char space = ' ' ;
  char enter = '\n' ;
  
  int i = 0;
  int j = 0;
  
  for (i = 0; i < 5; i++ )
  {
    for (j = 5; j >= i; j--)
    {
    printf("%c",star);
    }
    printf("%c",enter);
  }
}
*/

/*피라미드3.공백순행
int main()
{
  char star='*';
  char enter='\n';
  char space=' ';
  
  int i = 0;
  int j = 0;
  int a = 0;
  for ( i = 5 ; i >= 1 ; i-- )
  {
    for (j = 1; j<i ; j++){
      printf("%c",space);
      
    }
    
    for (a =5; a>=i ; a--){
      printf("%c",star);
    }
    
    printf("%c",enter);

  }
}
*/

//피라미드4.공백역행
int main()
{
  char star = '*';
  char space = ' ';
  char enter = '\n';
  
  int i = 0;
  int j = 0;
  int a = 0;
  
  for ( i = 0; i <= 4; i++ )
  {
    for ( j = 0; j < i; j++ )
    {
      printf("%c",space);
    }
    for (a = 0; a <= 4-i; a++)
    {
      printf("%c",star);
    } 
    printf("%c",enter);
  }
  return 0;
} 