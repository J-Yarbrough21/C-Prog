#include <stdio.h>

/*

Your final project will be to  write a program to emulate a game called “Code Breaker”.


OBJECTIVE : The player must guess the computer's secret code by making guesses and acting on clues the computer gives in response to each guess. To win, the player must guess the secret code within a certain number of attempts.
The secret code will be a string of 3 to 8 characters, and the player will get to choose how many. The longer the code, the more difficult the challenge.
Each character in the secret code will come from a specific set of symbols. The player will get to choose a value from 4 to 8 to specify how many different symbols will be used.
The player will only be allowed a certain number of tries to guess the secret code. This maximum number can be calculated from the following formula
N = number of characters in the secret code

K = number of different symbols for each character


Max number of tries = 1 + (ceiling)(log2(KN)) = 1 + (ceiling)(Nlog2(K))
Example : A secret code that is N = 4 characters long, with each character being one of K = 6 possible symbols, means 6*6*6*6 = 1296 possible secret codes.
The base-2 logarithm of 6 is equal to 2.5849625....

Mutiplying by N = 4 gives 10.339850...

Rounding up to next integer – the ceiling – gives 11

Add 1 – player will get only 12 tries to guess the secret code.
Example : On the most difficult level, the secret code will be N = 8 characters long, with each character being one of K = 8 possible symbols – giving 16,777,216 possible secret codes.
The base-2 logarithm of 8 is equal to 3 Mutiplying by N = 8 gives 24 Because 24 is already an integer, it's “ceiling” value is the number itself → 24 Add 1 – player will get only 25 tries to guess the secret code.
For every guess the player makes – except the final guess – the computer will provide the following clues :

1. The computer will tell the player how many of the symbols in the guess are in the correct position, but will NOT tell which of the symbols is in the correct position.

2. The computer will tell the player how many of the remaining symbols in the guess – those NOT in the correct position – are out of place.

3. The computer will NOT tell the player how many symbols are incorrect.

4. If the player guesses the secret code, a win message is given and the game quits.

5. After each guess, the computer will tell the player how many tries are left.

6. If the player fails to guess the secret code within the allowed number of times, they lose.


Example : Suppose that N = 5, and the symbols come from set {ABCD} for which K = 4.
Suppose that the computer picks a secret code of DCDDB
       Player Guesses : → → Computer Replies :

                  AAAAA           No help

                  BBBCC           2 out of place

                  CCCDD           2 in correct position, 1 out of place

                  CCDDB           4 in correct position

                  DCDDB           You guessed the secret code in 5 tries!


NOTES : The <math.h> library has two functions you will probably want to use :
double log2(double input) computes base-2 logarithms double ceil(double input) return next highest integer if not integer already

*/