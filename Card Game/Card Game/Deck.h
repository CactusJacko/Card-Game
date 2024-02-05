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

	Deck(int DeckShuffler);

	Card takeTopCard();

	int LossOfTopCard();

	int TempCard();

	void makeDeck();

	//int DeckReader();

	void RandomNumberGen();

	
};

