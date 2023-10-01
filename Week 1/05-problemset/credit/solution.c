#include <cs50.h>
#include <math.h>
#include <stdio.h>

int get_length_of_number(long number);
int get_first2_digits(long number);
int get_first_digit(long number);

int main(void)
{
    long number = get_long("Number: ");
    int mul_of_2 = 0;
    int non_mul = 0;
    int count = 1;

    int length = get_length_of_number(number);
    int first2_digits = get_first2_digits(number);
    int first_digit = get_first_digit(number);

    for (int digit = number % 10; number > 0; number /= 10, digit = number % 10)
    {
        if (count % 2 == 0)
        {
            mul_of_2 += (digit * 2);
        }
        else
        {
            non_mul += digit;
        }
        count++;
    }

    if (length == 15 && (first2_digits == 34 || first2_digits == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && ((first2_digits - 51) * (first2_digits - 55) <= 0))
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && (first_digit == 4))
    {
        printf("VISA\n");
        printf("%i %i", length, mul_of_2 + non_mul);
        // if( (mul_of_2 + non_mul) % 10 == 0){
        //
        // }else {
        //     printf("INVALID\n");
        // }
    }
    else
    {
        printf("INVALID\n");
    }

}

int get_length_of_number(long number)
{
    int length = 0;
    while (number > 0)
    {
        length++;
        number /= 10;
    }
    return length;
}

int get_first2_digits(long number)
{

    long local = number;

    while (local >= 100)
    {
        local /= 10;
    }

    return local;
}

int get_first_digit(long number)
{

    long local = number;

    while (local >= 10)
    {
        local /= 10;
    }

    return local;
}
