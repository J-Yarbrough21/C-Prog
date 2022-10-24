#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_ROLLS 10000

int main()
{
	srand(time(0));

	int S; // number of sides of the dice

	printf("The dice can have between 2 and 100 sides.");
	printf("Please Enter an Integer between (2-100):\n");
	scanf("%d", &S);

	while (S < 2 || S > 100) // verifying integer entered
	{
		printf("\nInvalid value.\nEnter Number of Sides between (2-100):\n");
		scanf("%d", &S);
		S++;
	}

	long int sum = 0;
	int value[MAX_ROLLS];

	for (int i = 0; i < MAX_ROLLS; i++) // rolling the dice
	{
		value[i] = rand() % S + 1;
		printf("Dice roll: %d, value: %d\n", i + 1, value[i]);
		sum += value[i];
	}

	// calculating mean
	double mean = (double)sum / MAX_ROLLS;

	// calculating sum of squared distance
	double sq_sum_diff = 0;
	for (int i = 0; i < MAX_ROLLS; i++)
	{
		sq_sum_diff += pow((value[i] - mean), 2);
	}

	// calculating variance
	double variance = sq_sum_diff / (MAX_ROLLS - 1);

	// calculating standard deviation
	double standard_deviation = sqrt(variance);

	// calculating standard error
	double standard_error = standard_deviation / sqrt(MAX_ROLLS);

	// displaying all statistical results
	printf("\nMean = %lf", mean);
	printf("\nVariance = %lf", variance);
	printf("\nStandard deviation = %lf", standard_deviation);
	printf("\nStandard Error of the mean = %lf\n", standard_error);

	return 0;
}

/*eof*/

/*
Description/Requirements
• You will write a program to simulate ten thousand (10000) rolls of a  randomly sided die,
and calculate the mean, the variance, the standard deviation, and the standard error of the mean for the result.

• In order to run this simulation, your program will need to perform the following steps:

   ◦ Your program will ask the user for an integer number  from 2 to 100 to
   represent the number of sides the die will have ◦ Your program will make
   sure that the user entered a number from 2 to 100; if not, the program
   should continue to ask until a valid value for S is obtained.

  ◦ Your program will then “roll a die” 10,000 times – it will pick 10,000
  random numbers from 1 to the number of sides the dice has, and will
  print out each result on it's own line.

  ◦ As your simulation is running, it will recording statistical information –
  see the next page for the calculations.

  ◦ When the simulation is done, it will print out the statistical results –
  the mean, the variance, the standard deviation, and the standard error of the mean.


Calculating statistical results for computer simulations.

When you have a sample consisting of a set of values, and you wish to compute
the mean, the variance, the standard deviation, and the standard error of the
mean, the best way to do this is to perform the following.

calculate the mean
get the variance.
for each number, subtract the mean and square the results
sum up the squared results.
find the mean of the squared results. Remember  to use (N-1)
this is the variance

get the square root of the variance.  This is the standard deviation.
The standard error is the standard deviation divided by the square root of N

*/
