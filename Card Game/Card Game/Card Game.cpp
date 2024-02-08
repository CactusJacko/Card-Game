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

	//Card Cards = Card("Two", "Hearts");

	//cout << GameDeck.SeeTopCard() << endl;
	//Main.AddHand(GameDeck.SeeTopCard());

	//cout << GameDeck.LossOfTopCard() << endl;

	//cout << GameDeck.SeeTopCard() << endl;
	//Main.AddHand(GameDeck.SeeTopCard());

	//cout << GameDeck.LossOfTopCard() << endl;

	//for (Card card : GameDeck.makeDeck()) {
	//	cout << card.suit + card.value << endl;
	//}
	
	//Makes the deck
	GameDeck.makeDeck();
	//Shuffes the deck randomly
	GameDeck.RandomNumberGen();



	for (Card card : GameDeck.Getdeck()) {
		cout << card.suit << endl;
	}
	cout << "\n \n \n \n" << endl;

	player2.AddCard(GameDeck);
	player1.AddCard(GameDeck);
	

	for (Card card : player1.playerHand) {
		cout << card.suit << endl;
	}

	cout << "\n \n \n \n" << endl;

	for (Card card : GameDeck.Getdeck()) {
		cout << card.suit << endl;
	}

	cout << "\n \n \n \n" << endl;

	cout << player1.playerHand.back().rank << " OF " << player1.playerHand.back().suit << endl;
	cout << player1.playerHand.back().value << endl;

	cout << player1.playerHand.front().rank << " OF " << player1.playerHand.front().suit << endl;
	cout << player1.playerHand.front().value << endl;
	cout << player1.handtotal << endl;


	cout << "\n \n \n \n" << endl;

	cout << player2.playerHand.back().rank << " OF " << player2.playerHand.back().suit << endl;

	


	if (player1.handtotal >= 22) {
		cout << "You are bust" << endl;
	}

	else {
		cout << "HIT? Y/N" << endl;
		string Hit;
		cin >> Hit;

		if (Hit == "Y") {

		}

		else {

		}
		
	}


	//Menu

//Choose one game or the other
	
//BlackJack
	//player.give(deck.takeOne());





//Solatare


}
