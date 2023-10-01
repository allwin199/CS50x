#include <stdio.h>
int main()
{
  int n = -1;
  for(int i = 0; i < 4; i++){
    for(int j = 0 ; j < 4; j++){
      if(i==0){
        printf("#");
      }else if(j<=n){
        printf(" ");
      }else {
        printf("#");
      }
    }
    n++;
    printf("\n");
  }

  return 0;
}