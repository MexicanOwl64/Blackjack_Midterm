#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
int main()
{

	srand((unsigned)time(0));
	cout << "Welcome to the Blackjack Game! \n";
	int wager;
	
	wager = 100; // amount betting supposed to simulate the 100 interactions

	while (wager > 0) // loops the game until the ai runs out of cards
	{
		
		int dealer_card1 = rand() % 13 + 1;  //dealer card 1 
		int dealer_card2 = rand() % 13 + 1;	 //dealer card 2
		int player_card1 = rand() % 13 + 1;	 //player card 1
		int player_card2 = rand() % 13 + 1;  //player card 2
		cout << "\n" << "The dealer has ";
		switch (dealer_card1) {
		case 1: cout << "Ace and ";
			break;
		case 11: cout << "Jack and ";
			break;
		case 12: cout << "Queen and ";
			break;
		case 13: cout << "King and ";
			break;
		default: cout << dealer_card1 << " and ";
			break;
		}
		switch (dealer_card2) {
		case 1: cout << "Ace";
			break;
		case 11: cout << "Jack";
			break;
		case 12: cout << "Queen";
			break;
		case 13: cout << "King";
			break;
		default: cout << dealer_card2;
			break;
		}
		cout << "\n" << "\n" << "You have ";
		switch (player_card1) {
		case 1: cout << "Ace and ";
			break;
		case 11: cout << "Jack and ";
			break;
		case 12: cout << "Queen and ";
			break;
		case 13: cout << "King and ";
			break;
		default: cout << player_card1 << " and ";
			break;
		}
		switch (player_card2) {
		case 1: cout << "Ace";
			break;
		case 11: cout << "Jack";
			break;
		case 12: cout << "Queen";
			break;
		case 13: cout << "King";
			break;
		default: cout << player_card2;
			break;
		}
		cout << "\n";


		int dealer_total = dealer_card1 + dealer_card2;
		int player_total = player_card1 + player_card2;

		if (player_total > dealer_total && player_total < 21) // player wins 
		{
			cout << "\n" << "You Win !!" << endl;
			wager = wager + 1;
			cout << "\n" << "Current Balance: $" << wager << endl;
		}
		else // player loses
			cout << "\n" << "You lose !!" << endl;
			wager = wager - 1;
			cout << "\n" << "Current Balance: $" << wager << endl;
	}
		return 0;
	
}  