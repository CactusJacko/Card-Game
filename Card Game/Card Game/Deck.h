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

	Deck(int DeckShuffler);

	Card takeTopCard();

	int LossOfTopCard();

	int TempCard();

	void makeDeck();

	//specifcally for HitOrMiss
	void HitDeck();
	void iterator(Deck& inDeck);

	//int DeckReader();

	//Puts the cards into a random order
	void RandomNumberGen();

	vector<Card>UsedHand;
	vector<Card>HitHand;

};

