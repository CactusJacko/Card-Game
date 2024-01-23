// Card Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

	//cout << GameDeck.SeeTopCard() << endl;
	Main.AddHand(GameDeck.SeeTopCard());

	cout << GameDeck.LossOfTopCard() << endl;

	//cout << GameDeck.SeeTopCard() << endl;
	Main.AddHand(GameDeck.SeeTopCard());

	cout << GameDeck.LossOfTopCard() << endl;


	//Menu
//Choose one game or the other
	
//BlackJack
	//player.give(deck.takeOne());





//Solatare


}
