#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do{
        start_size = get_int("Enter Start Size: ");
    }
    while(start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do{
        end_size = get_int("Enter End Size: ");
    }
    while(end_size < start_size);

    int n = 0;
    int lamas = start_size;

    if(start_size == end_size){
        printf("Years: %i\n", n);
        return 0;
    }

    // TODO: Calculate number of years until we reach threshold
    while(1){
        int lamas_born = lamas / 3;
        int lamas_passed = lamas / 4;
        int total_lamas = lamas + lamas_born - lamas_passed;
        lamas = total_lamas;
        n++;

        // TODO: Print number of years
        if(total_lamas >= end_size){
        printf("Years: %i\n", n);
        break;
    }

  }


}
