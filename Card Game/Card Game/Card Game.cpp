//MAIN FILE

#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
using namespace std;


int main()
{
	Player Main = Player("Steve", 5);
	Deck GameDeck = Deck(0);
	Card Cards = Card("Hearts", "Two", false);

	//cout << GameDeck.SeeTopCard() << endl;
	Main.AddHand(GameDeck.SeeTopCard());

	cout << GameDeck.LossOfTopCard() << endl;

	//cout << GameDeck.SeeTopCard() << endl;
	Main.AddHand(GameDeck.SeeTopCard());

	cout << GameDeck.LossOfTopCard() << endl;

	cout << GameDeck.makeDeck() << endl;


	//Menu
//Choose one game or the other
	
//BlackJack
	//player.give(deck.takeOne());





//Solatare


}
