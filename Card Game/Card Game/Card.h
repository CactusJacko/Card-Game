#pragma once
#include <string>
using namespace std;


class Card
{
private:






public:
	Card(string suit, string value, bool Is_Special );
	//52 cards in total to play with.
	// Each card needs its own number to be assigned to.
	// For example number 1 = 2 of spades.
	string suit;
	string value;
	bool Is_Special;

};

