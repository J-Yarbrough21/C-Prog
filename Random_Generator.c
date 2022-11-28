#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int gen_random(int min, int max);                      // prototype  for random number
void fill_array(int ary[], int size, int min, int max) // prototype for array random number
    void print_array(int ary[], int size);             // prototype that prints the integer array

int main()
{
    int rand_val = 0;
    int sides = 6;
    int min = 1;

    srand(time(NULL)); // seeding the random number generator
    int numbers[20];   //[20] is the constant
    for (int i = 0; i < 20; i++)
    {
        rand_val = (rand() % (sides - min + 1)) + min;
        printf("value :%d\n", rand_val);
    }
}

int gen_random(int min, int max)
{ // function that uses min and max to return random numbers

    int rand_val = (rand() % (max - min + 1)) + min;
    return rand_val;
}

int second_main_array() // generating an array (an array is a pointer)
{
    int number[20];
    fill_array(numbers, 20, 1, 20);

    print("%d\n", numbers[3]);
}

void fill_array(int ary[], int size, int min, int max)
{
    for (int i = 0; i < size; i++)
    {
        ary[i] = gen_random(min, max); // arrays start at 0 and go to one less than the required number
    }
}