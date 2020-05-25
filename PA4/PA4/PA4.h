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

//define and includes
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>

//function declarations
void play_game(int bank_balance, int wager, int roll_count, int players_point);
void display_rules();
double get_bank_balance(void);
double get_wager_amount(void);
int check_wager_amount(double wager, double balance);
int roll_die(void);
int calculate_sum_dice(int die1_value, int die2_value);
int is_win_loss_or_point(int sum_dice);
int is_point_loss_or_neither(int sum_dice, int point_value);
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract);
void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance);
void test(int roll_count);
