/*
6/16/22 Emmanuel Jolade

Program is going to allow the user to play a modified version of Rock Paper Scissors dubbed Rock Paper Scissors Lizard Spock
Program starts by generating a menu where the user can select 1 of the 5 options (Rock, Paper, Scissors, Lizard, Spock).
Once user selects option, program counts down and computer generates a random option. The result of the user and computers selection plays out.
User will then have the option to either play again, or quit.

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	srand(time(NULL));


	int computer;

	int user = 0;

	int menu = 0;

	bool running = true;

	bool input = true;

	do {
		input = true;
		computer = rand() % 5 + 1;
		cout << "Rock...\n";
		cout << "Paper...\n";
		cout << "Scissors...\n";
		cout << "Lizard...\n\n";

		cout << "1.) Rock\n";
		cout << "2.) Paper\n";
		cout << "3.) Scissors\n";
		cout << "4.) Lizard\n";
		cout << "5.) Spock\n";

		cin >> user;

		while (user > 5 || user < 0) {
			cout << "Invalid input, try again\n";
			user = 0;
			cin >> user;
		}

		switch (user) {
		case 1:
			if (user == computer) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Tie! You both picked Rock!\n";
			}
			else if (computer == 2) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Rock gets covered by Paper! You lose!\n";
			}
			else if (computer == 3) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Rock smashes Scissors! You win!\n";
			}
			else if (computer == 4) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Rock crushes Lizard! You win!\n";
			}
			else if (computer == 5) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Rock gets vaporized by Spock! You lose!\n";
			}
			break;
		case 2:
			if (user == computer) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Tie! You both picked Paper!\n";
			}
			else if (computer == 1) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Paper covers Rock! You win!\n";
			}
			else if (computer == 3) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Paper gets cut by Scissors! You lose!\n";
			}
			else if (computer == 4) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Paper gets eaten by Lizard! You lose!\n";
			}
			else if (computer == 5) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Paper disproves Spock! You win!\n";
			}
			break;
		case 3:
			if (user == computer) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Tie! You both picked Scissors!\n";
			}
			else if (computer == 2) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Scissors cut Paper! You win!\n";
			}
			else if (computer == 1) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Scissors get smashed by Rock! You lose!\n";
			}
			else if (computer == 4) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Scissors decapitate Lizard! You win!\n";
			}
			else if (computer == 5) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Scissors get smashed by Spock! You lose!\n";
			}
			break;
		case 4:
			if (user == computer) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Tie! You both picked Lizard!\n";
			}
			else if (computer == 2) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Lizard eats Paper! You win!\n";
			}
			else if (computer == 1) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Lizard gets smashed by Rock! You lose!\n";
			}
			else if (computer == 3) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Lizard gets decapitated by Scissors! You lose!\n";
			}
			else if (computer == 5) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Lizard poisons Spock! You win!\n";
			}
			break;
		case 5:
			if (user == computer) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Tie! You both picked Spock!\n";
			}
			else if (computer == 2) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Spock gets disproved by Paper! You lose!\n";
			}
			else if (computer == 1) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Spock vaporizes Rock! You win!\n";
			}
			else if (computer == 4) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Spock gets poisoned by Lizard! You lose!\n";
			}
			else if (computer == 3) {
				cout << "\nSpock!\n";
				cout << "...\n";
				cout << "Spock smashes Scissors! You win!\n";
			}
			break;
		default:
			cout << "If you reading this then idk what to tell you";
		}

		cout << "Do you want to play again?\n\n";
		cout << "1.) Yes\n";
		cout << "2.) No\n";

		while (input) {
			cin >> menu;


			if (menu == 1) {
				running = true;
				input = false;
			}
			if (menu == 2) {
				cout << "Thank you for playing!\n";
				running = false;
				input = false;
			}
			else {
				"Invalid input, try again.\n";
			}
		}
	} while (running);
	
	return 0;
}