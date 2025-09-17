#include <stdio.h>

int main ()
{
  char a = 'a';
  int *ptr = &a;

 for (int i = 0; i < 26; i++)
 {
    printf(" %d. %c",(i+1),(*ptr+i));
    printf("\n");
 }

  return 0;
}

  