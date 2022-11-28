#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int shuffle_deck(char deck[5][2]);

char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
char suits[4] = {'C', 'D', 'H', 'S'};

int main(void)
{

   srand(time(0));
   char deck[5][2] = {};

   shuffle_deck(deck);

   int i = 0;
   int start = 0;
   int end = 4;
   for (int h = 0; h <= 4; h++)
   {

      for (int i = start; i <= end; i++)
      {
         printf("%c", deck[i][0]);
         printf("%c\t", deck[i][1]);
      }
      printf("\r\n");
      start = start + 5;
      end = end + 5;
   }
   return 0;
}

int shuffle_deck(char deck[5][2])
{
   for (int i = 0; i <= 4; i++)
   {
      int num1 = (rand() % (12 + 1));
      int num2 = (rand() % (4));

      deck[i][0] = ranks[num1];
      deck[i][1] = suits[num2];
   }

   for (int i = 0; i <= 4; i++)
   {
      int count = 0;
      for (int j = 0; j <= 4; j++)
      {
         if (deck[i][0] == deck[j][0] && deck[i][1] == deck[j][1])
         {
            count++;
         }
      }
      if (count > 1)
      {
         int num1 = (rand() % (12 + 1));
         deck[i][0] = ranks[num1];
         int num2 = (rand() % (4));
         deck[i][1] = suits[num2];
      }
   }
   return 0;
}

/*eof*/

/*

Write the code to deal 10 hands of 5 cards each.
• Your program should NOT ask the user for any information – just have it print out the hand of cards when you run the program.

• Each hand should be printed on its own line.

• Each card should be printed as a pair of characters in the following way:

   ◦ The first character should be from the set { A, 2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K } to indicate rank, with                          A=ace=1, T=ten=10, J=jack=11, Q=queen=12, K=king=13.

   ◦ The second character should be from the set { h, s, d, c } to indicate suit.

   ◦ Print the cards with a single space between them. Example : 7c Js 2h Ad Th


• You MUST use an array to represent a permutation of the deck of cards.

• You MUST use a separate function to shuffle the deck, passing an array to the function.

• You MUST use rand() in your algorithm to shuffle the deck.

• You cannot have any repeated cards in a single hand. (obvious?)

*/
