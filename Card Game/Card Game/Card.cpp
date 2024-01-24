#include "Card.h"
#include <string>

//Card class is for singular instances of cards and not mutiple cards

Card::Card(string suit, string value, bool Is_Special) {

	this->suit = suit;
	this->value = value;
	this->Is_Special = Is_Special;



}