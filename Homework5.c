#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// loop from 0-51 to fill the deck with 52 cards
for (int i = 0; i < 52; i++)
{
}
// Non ending while loop, will break when a non repeated card is found
while (1)
{
   int pos = rand() % 52; // random number between 0 to 51 inclusive
}

if (taken[pos] == false)
{                     // if card in NOT taken
   deck[i] = pos;     // put the card in deck
   taken[pos] = true; // it repeated that the card 'pos' is added to deck
   break;             // card found, so break from while loop
}

int main()
{

   char rank[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
   char suit[] = {'C', 'D', 'H', 'S'};

   int deck[52]; // array for deck

   // calling shuffle Function to shuffle th deck
   shuffle(deck);

   // id repesents the index of deck currently
   int id = 0;
   for (int i = 1; i <= 10; i++)
   { // loop for 10 hands
      for (int j = 1; j <= 5; j++)
      { // loop for 5 cards

         int s = deck[id] / 13; // calculating suit number from card number
         int r = deck[id] % 13; // calculating rank number from card number

         printf("%c%c ", rank[r], suit[s]); // displaying data
         id++;                              // incrementing the index of deck
      }
      printf("\n");
   }

   return 0;
}

// Function to shuffle the deck
void shuffle(int deck[])
{
   // taken repesents that wether the card pushed in deck or not
   bool taken[52] = {false};
}

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
