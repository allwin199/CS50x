#include <stdio.h>
int main()
{

  for(int i = 0; i < 4; i++){
    for(int j = i ; j < 4; j++){
      printf("#");
    }
    printf("\n");
  }

  return 0;
}