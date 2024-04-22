#pragma once
#include <queue>
#include <vector>
#include "Card.h"
using namespace std;


class Deck
{
private:

	// stores the deck of cards
	vector <Card> cardsDeck;


	//queue <int> CardLayout;

public:

	//Gets the deck from a private so you can access it
	vector<Card> Getdeck();

	//Pops the last card in the cards deck
	void popdeck();

	Deck();

	Card takeTopCard();

	int LossOfTopCard();

	int TempCard();

	void makeDeck();



	//int DeckReader();

	//Puts the cards into a random order
	void RandomNumberGen();

	int DeckSize();

	void DeckAdd(Card NewCard);

	Card GetCard(int index);

};

