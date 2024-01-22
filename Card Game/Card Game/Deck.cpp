#include "Deck.h"
#include <stack>
#include <String>
#include <queue>

Deck::Deck(int DeckShuffler) {
	CardLayout.push(4);
	CardLayout.push(7);
	CardLayout.push(8);
	CardLayout.push(2);
	CardLayout.push(1);
	CardLayout.push(6);
	CardLayout.push(3);
	CardLayout.push(11);

	
}

//Looks at the top card 
int Deck::SeeTopCard() {
	return CardLayout.front();
}

//Removes the top card from the pile
int Deck::LossOfTopCard() {
	int TempCard = CardLayout.front();
	CardLayout.pop();
	return TempCard;
}

//needs sorting system
//Needs stack or something similar


