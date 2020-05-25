/*
Lovee Baccus
PA 4
September 26, 2018
Description:
A player rolls two dice. Each die has six faces. the sum of the spots on the two upward faces is calculated.
If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3, or 12 on the first throw (called "craps"),
the player loses (i.e. the "house" wins). If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the
player's "point." To win, you must continue rolling the dice until you "make your point." The player loses by rolling a 7
before making the point.

Write a program that implements a craps game according to the above rules. The game should allow for wagering. This means
that you need to prompt that user for an initial bank balance from which wagers will be added or subtracted. Before each
roll prompt the user for a wager. Once a game is lost or won, the bank balance should be adjusted. As the game progresses,
print various messages to create some "chatter" such as, "Sorry, you busted!", or "Oh, you're going for broke, huh?", or
"Aw cmon, take a chance!", or "You're up big, now's the time to cash in your chips!"
*/

#include "PA4.h"

int main(void) {
	srand(time(NULL));
	int decision = 0;

	printf("Welcome to the Game of Craps!\n");

	do {

		printf("If you would like to exit, type 1. If you would like to see the rules, type 2. If you are ready to play, type 3!\n");
		scanf("%d", &decision);

		if (decision == 1) {
			printf("You have exited the game.\n");
		}
		else if (decision == 2) {
			display_rules();
			system("pause");
			system("cls");
		}
		else if (decision == 3) {
			system("cls");
			printf("You chose to play!\n");
			//play game
			int roll_count = 0;
			test(roll_count);
		}

	} while (decision != 1);

	return 0;
}