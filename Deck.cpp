#include "Card.h"
#include "Deck.h"
#include <vector>
#include <algorithm>
using namespace std;


Deck::Deck(){

    for (unsigned int i = 13; i >= 1; --i){
        theDeck.push_back(Card('s',i));
    }
    for (unsigned int i = 13; i >= 1; --i){
        theDeck.push_back(Card('h',i));
    }
    for (unsigned int i = 13; i >= 1; --i){
        theDeck.push_back(Card('d',i));
    }
    for (unsigned int i = 13; i >= 1; --i){
        theDeck.push_back(Card('c',i));
    }
}


Card Deck::dealCard(){
    
    Card topCard = theDeck.back();
    dealtCards.push_back(topCard);
    theDeck.pop_back();
        
    return topCard;
}


void Deck::shuffleDeck(){ // D.shuffleDeck();
    for (unsigned int i = 0; i < dealtCards.size(); ++i){
        theDeck.push_back(dealtCards.at(i));
    }
    dealtCards.resize(0);
    random_shuffle(theDeck.begin(), theDeck.end());
}


unsigned Deck::deckSize() const{ // D.deckSize()
    return theDeck.size();
}
