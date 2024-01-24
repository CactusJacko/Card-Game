#pragma once
#include <string>
using namespace std;


class Card
{
private:
	string Cardletter;




public:
	Card(string suit, char face, int value, bool Is_Ace );
	//52 cards in total to play with.
	//I could designate each card with a char, which would quivilate to 26 chars.
	//I could do two chars which would equal 52 cards.
	//For example A,A or Z,Z


};

