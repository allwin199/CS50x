#include <stdio.h>

int main(void) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%s", "#");
    }
    printf("\n");
  }
  return 0;
}