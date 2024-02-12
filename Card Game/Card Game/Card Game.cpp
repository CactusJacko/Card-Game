//MAIN FILE

#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include <cstdlib>
using namespace std;


int main()
{
	Player player2 = Player("Steve", 5, true);
	Player player1 = Player("Steve", 5 , true);
	Deck GameDeck = Deck(0);
	Card Cards = Card("ACE" , "HEARTS");

	//Makes the deck
	GameDeck.makeDeck();
	//Shuffes the deck randomly
	GameDeck.RandomNumberGen();

	
	//GAME CODE
	bool A = true;
	while (A == true) {

		player1.playerHand.clear();
		player2.playerHand.clear();
		

		player2.AddCard(GameDeck);
		player2.AddCard(GameDeck);
		player1.AddCard(GameDeck);
		player1.AddCard(GameDeck);

		//Prints all the players cards
		cout << "Player 1 first card" << endl;
		cout << player1.playerHand.back().rank << " OF " << player1.playerHand.back().suit << endl;
		cout << player1.playerHand.back().value << endl;

		cout << "Player 1 second card" << endl;
		cout << player1.playerHand.front().rank << " OF " << player1.playerHand.front().suit << endl;
		cout << player1.playerHand.front().value << endl;
		cout << "card total " << player1.handtotal << endl;

		cout << "\n" << endl;

		cout << "Player 2 first card" << endl;
		cout << player2.playerHand.back().rank << " OF " << player2.playerHand.back().suit << endl;
		cout << player2.playerHand.back().value << endl;

		cout << "Player 2 second card" << endl;
		cout << player2.playerHand.front().rank << " OF " << player1.playerHand.front().suit << endl;
		cout << player2.playerHand.front().value << endl;
		cout << "card total " << player2.handtotal << endl;
		
		cout << "\n" << endl;


		cout << "HIT? Y/N" << endl;
		string Hit;
		cin >> Hit;

		if (Hit == "Y") {
			player1.AddCard(GameDeck);
			cout << player1.playerHand.back().rank << " OF " << player1.playerHand.back().suit << endl;
			cout << "card total " << player1.handtotal << endl;
			cout << "amounts of cards " << player1.playerHand.size() << endl;

			if (player1.handtotal >= 22) {
				cout << "YOU ARE BUST" << endl;



				//Ask the user if they want to play again
				cout << "Want to play again Y/N" << endl;
				string PlayAgain;
				cin >> PlayAgain;

				if (PlayAgain == "Y") {
					A = true;
					cout << "\n" << endl;
				}

				else {
					A = false;
				}
			}

			else {

				cout << "HIT? Y/N" << endl;
				string Hit;
				cin >> Hit;

				if (Hit == "Y") {
					player1.AddCard(GameDeck);
					cout << player1.playerHand.back().rank << " OF " << player1.playerHand.back().suit << endl;
					cout << "card total " << player1.handtotal << endl;
					cout << "amounts of cards " << player1.playerHand.size() << endl;

					if (player1.handtotal >= 22) {
						cout << "YOU ARE BUST" << endl;



						//Ask the user if they want to play again
						cout << "Want to play again Y/N" << endl;
						string PlayAgain;
						cin >> PlayAgain;

						if (PlayAgain == "Y") {
							A = true;
							cout << "\n" << endl;
						}

						else {
							A = false;
						}
					}

				}

				else {

					cout << "You stayed the same" << endl;
					if (player1.handtotal <= player2.handtotal) {
						cout << "card total for you - " << player1.handtotal << endl;
						cout << "card total for  the dealer - " << player2.handtotal << endl;
						cout << "\n" << endl;
						cout << "You lose" << endl;

					}

					else {
						cout << "card total for you - " << player1.handtotal << endl;
						cout << "card total for  the dealer - " << player2.handtotal << endl;
						cout << "\n" << endl;
						cout << "You win" << endl;


						//Ask the user if they want to play again
						cout << "Want to play again Y/N" << endl;
						string PlayAgain;
						cin >> PlayAgain;

						if (PlayAgain == "Y") {
							A = true;
						}

						else {
							A = false;
						}

					}


				}


			}
		}

		else {
			cout << "You stayed the same" << endl;
			if (player1.handtotal <= player2.handtotal) {
				cout << "card total for you - " << player1.handtotal << endl;
				cout << "card total for  the dealer - " << player2.handtotal << endl;
				cout << "\n" << endl;
				cout << "You lose" << endl;


				//Ask the user if they want to play again
				cout << "Want to play again Y/N" << endl;
				string PlayAgain;
				cin >> PlayAgain;

				if (PlayAgain == "Y") {
					A = true;
				}

				else {
					A = false;
				}
			}

			else {
				cout << "card total for you - " << player1.handtotal << endl;
				cout << "card total for  the dealer - " << player2.handtotal << endl;
				cout << "\n" << endl;
				cout << "You win" << endl;


				//Ask the user if they want to play again
				cout << "Want to play again Y/N" << endl;
				string PlayAgain;
				cin >> PlayAgain;

				if (PlayAgain == "Y") {
					A = true;
				}

				else {
					A = false;
				}
			}
		}





	}




		


	//Menu

//Choose one game or the other
	
//BlackJack
	//player.give(deck.takeOne());





//Solatare


}
