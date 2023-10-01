#include <stdio.h>
int main()
{

  int n=4;
  for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
      if(j<n-1){
          printf("%s", " ");
      }else {
        printf("#");
      }
    }
    n--;
    printf("\n");
  }

  return 0;
}