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

//function definitions

void display_rules() {
	system("cls");
	printf("Here are the rules of Craps!\n");
	printf("A player rolls two dice.  Each die has six faces. \nThe sum of the spots on the two upward faces is calculated. \nIf the sum is 7 or 11 on the first throw, the player wins.If the sum is 2, 3, or 12 on the first throw (called craps),\nthe player loses(i.e.the house wins).If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the \nplayer's point. To win, you must continue rolling the dice until you make your point.\nThe player loses by rolling a 7 before making the point.\n");
}

//Prompts the player for an initial bank balance from which 
//wagering will be added or subtracted. The player entered bank balance (in dollars, i.e. $100.00) is returned.
double get_bank_balance(void) {
	double balance = 0.0;
	printf("Please enter your bank account balance.");
	scanf("%lf", &balance);
	return balance;
}

//Prompts the player for a wager on a particular roll. The wager is returned.
double get_wager_amount(void) {
	double wager = 0.0;
	printf("Please enter a wager amount.");
	scanf("%lf", &wager);
	return wager;
}

//Checks to see if the wager is within the limits of the player's available balance. 
//If the wager exceeds the player's allowable balance, then 0 is returned; otherwise 1 is returned.
int check_wager_amount(double wager, double balance) {
	if (wager > balance) {
		return 0;
	}
	else {
		return 1;
	}
}

// Rolls one die. This function should randomly generate a value 
//between 1 and 6, inclusively. Returns the value of the die.
int roll_die(void){
	int die_value = 0;
	die_value = rand() % 6 + 1;
	return die_value;
}

//Sums together the values of the two dice and returns the result. 
//Note: this result may become the player's point in future rolls.
int calculate_sum_dice(int die1_value, int die2_value){
	int sum = 0;
	sum = die1_value + die2_value;
	return sum;
}

//Determines the result of the first dice roll.If the sum is 7 or 11 on the roll, the player wins and 1 is returned.
//If the sum is 2, 3, or 12 on the first throw (called "craps"), the player loses(i.e.the "house" wins) and 0 is returned.
//If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the player's "point" and -1 is returned.
int is_win_loss_or_point(int sum_dice) {
	if (sum_dice == 7 || sum_dice == 11) {
		return 1; //player wins
	}
	else if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12) {
		return 0; //craps
	}
	else {
		return -1; //sum = players point
	}
}

//Determines the result of any successive roll after the first roll. If the sum of the roll is the point_value, 
//then 1 is returned. If the sum of the roll is a 7, then 0 is returned. Otherwise, -1 is returned.
int is_point_loss_or_neither(int sum_dice, int point_value) {
	if (sum_dice == point_value) {
		return 1;
	}
	else if (sum_dice == 7) {
		return 0;
	}
	else {
		return -1;
	}
}

//If add_or_subtract is 1, then the wager amount is added to the bank_balance. If add_or_subtract is 0, then the 
//wager amount is subtracted from the bank_balance. Otherwise, the bank_balance remains the same. 
//The bank_balance result is returned.
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract) {
	if (add_or_subtract == 1) {
		bank_balance += wager_amount;
	}
	else if (add_or_subtract == 0) {
		bank_balance -= wager_amount;
	}
	return bank_balance;
}

//Prints an appropriate message dependent on the number of rolls taken so far by the player, the current balance, 
//and whether or not the player just won his roll. The parameter win_loss_neither indicates the result of the previous roll.
void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance) {

}

void test(int roll_count) {
	int bank_balance = 0, wager = 0, check_wager = 0, players_point = 0;
	bank_balance = get_bank_balance();

	do {
		wager = get_wager_amount();
		check_wager = check_wager_amount(wager, bank_balance);
		if (check_wager != 1) {
			printf("Your wager is too high! Please reconsider. \n");
		}
	} while (check_wager != 1);
	play_game(bank_balance,wager,roll_count, players_point);
}

void play_game(int bank_balance, int wager, int roll_count, int players_point) {
	int  die_1 = 0, die_2 = 0, dice_sum = 0;

	printf("Ready to roll?\n");
	system("pause");

	die_1 = roll_die();
	die_2 = roll_die();
	dice_sum = calculate_sum_dice(die_1, die_2);
	printf("Die 1: %d\nDie 2: %d\nThe sum is : %d\n", die_1, die_2, dice_sum);

	if (is_win_loss_or_point(dice_sum) == -1) {
		//sum becomes players point ONLY IF it is the first roll
		if(roll_count==0){
			players_point = dice_sum;
			printf("Your point is %d\n", players_point);

		}

		while (roll_count == 0 || dice_sum != players_point) {
			//keep playing the game
			//is_first_roll = 1;
			roll_count++;
			play_game(bank_balance, wager, roll_count, players_point);
		}

		if(dice_sum == players_point){
			printf("You won! The game is over :) \n ");
			//add wager amount to bank account
			bank_balance = adjust_bank_balance(bank_balance, wager, 1);
			printf("Your new bank balance is: %d\n", bank_balance);
		}
		
	}
	else if (is_win_loss_or_point(dice_sum) == 0) {
		//craps house wins
		//ends the game
		printf("You lost! The game is over :( \n");

		//take wager amount out of bank account
		bank_balance = adjust_bank_balance(bank_balance, wager, 0);
		printf("Your new bank balance is: %d\n", bank_balance);
	}
	else if (is_win_loss_or_point(dice_sum) == 1) {
		//player wins
		//ends the game
		printf("You won! The game is over :) \n");

		//add wager amount to bank account
		bank_balance = adjust_bank_balance(bank_balance, wager, 1);
		printf("Your new bank balance is: %d\n", bank_balance);
	}
}