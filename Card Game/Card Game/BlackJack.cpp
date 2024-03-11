#include <iostream>
#include <string>
#include "BlackJack.h"
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include <cstdlib>
using namespace std;

// I need to move all of the blackjack game into this verion of the game.

Player player2 = Player("Steve", 5, true);
Player player1 = Player("Steve", 5, true);
Deck GameDeck = Deck(0);
Card Cards = Card("ACE", "HEARTS");


BlackJack::BlackJack() {};





void BlackJack::BlackJackRules() {

	//Needs to explain the BlackJack rules
	//Gives player the option to play BlackJack Afterwards or go to main menu

}

void BlackJack::BlackJackGame() {


	//Makes the deck
	GameDeck.makeDeck();
	//Shuffes the deck randomly
	GameDeck.RandomNumberGen();


	//GAME CODE
	bool A = true;
	while (A == true) {

		cout << "\n" << endl;
		cout << "NEW GAME" << endl;
		cout << "\n" << endl;

		//Removes the previous cards from the game, adds new cards to the players
		player1.playerHand.clear();
		player2.playerHand.clear();
		player2.AddCard(GameDeck);
		player2.AddCard(GameDeck);
		player1.AddCard(GameDeck);
		player1.AddCard(GameDeck);

		//Prints all the players cards
		cout << "PLAYER:" << endl;
		player1.printdeck();


		cout << "\n" << endl;

		cout << "DEALER:" << endl;
		player2.printdeck();



		cout << "\n" << endl;

		//DEALER HAS THE CHANCE TO HIT AGAIN
		player2.DealerHit(GameDeck);
		if (player2.playerHand.size() == 3) {
			player2.printdeck();
		}

		cout << "\n" << endl;

		//Asses the dealers hand
		if (player2.handtotal >= 22) {
			cout << "YOU WIN" << endl;
			cout << "DEALER BUST" << endl;
			cout << "\n" << endl;
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



		//Player begins to hit
		else {
			//First chance to hit
			cout << "HIT? Y/N" << endl;
			string Hit;
			cin >> Hit;

			if (Hit == "Y") {
				player1.AddCard(GameDeck);
				cout << "PLAYER HIT" << endl;
				cout << "\n" << endl;

				cout << "PLAYER TAKES A NEW CARD" << endl;
				cout << "PLAYERS NEW DECK:" << endl;
				player1.printdeck();

				cout << "\n" << endl;


				if (player1.handtotal >= 22) {
					cout << "YOU LOSE" << endl;
					cout << "PLAYER CARD TOTAL - " << player1.handtotal << endl;
					cout << "YOU ARE BUST" << endl;
					cout << "\n" << endl;

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
					// Second chance to hit
					cout << "HIT? Y/N" << endl;
					string Hit;
					cin >> Hit;

					if (Hit == "Y") {
						player1.AddCard(GameDeck);
						cout << "PLAYER HIT" << endl;
						cout << "\n" << endl;

						cout << "PLAYER TAKES A NEW CARD" << endl;
						cout << "PLAYERS NEW DECK:" << endl;
						player1.printdeck();

						if (player1.handtotal >= 22) {
							cout << "YOU LOSE" << endl;
							cout << "PLAYER CARD TOTAL - " << player1.handtotal << endl;
							cout << "YOU ARE BUST" << endl;
							cout << "\n" << endl;

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

						cout << "PLAYER STAYED" << endl;
						cout << "\n" << endl;
						if (player1.handtotal <= player2.handtotal) {
							cout << "YOU LOSE" << endl;
							cout << "DEALER HAS BEAT YOU" << endl;
							cout << "PLAYER CARD TOTAL - " << player1.handtotal << endl;
							cout << "DEALER CARD TOTAL - " << player2.handtotal << endl;
							cout << "\n" << endl;

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
							cout << "YOU WIN" << endl;
							cout << "PLAYER CARD TOTAL - " << player1.handtotal << endl;
							cout << "DEALER CARD TOTAL - " << player2.handtotal << endl;
							cout << "\n" << endl;

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


				}
			}

			else {
				cout << "PLAYER STAYED" << endl;
				cout << "\n" << endl;
				if (player1.handtotal <= player2.handtotal) {
					cout << "YOU LOSE" << endl;
					cout << "DEALER HAS BEAT YOU" << endl;
					cout << "PLAYER CARD TOTAL - " << player1.handtotal << endl;
					cout << "DEALER CARD TOTAL - " << player2.handtotal << endl;
					cout << "\n" << endl;

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
					cout << "YOU WIN" << endl;
					cout << "PLAYER CARD TOTAL - " << player1.handtotal << endl;
					cout << "DEALER CARD TOTAL - " << player2.handtotal << endl;
					cout << "\n" << endl;

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





		}
	}

}






