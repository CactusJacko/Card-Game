#pragma once
#include "Card.h"
#include "Deck.h"
#include <string>
#include <vector>
using namespace std;


class Player
{
private:
	//vector <int> hand;

	
	

	
public:
	Player(string name, int inventory, bool IsBust);

	void AddCard(Deck & inDeck);
	
	//void Total();

	int handtotal;
	//player hand
	vector<Card> playerHand;

};

