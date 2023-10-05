#include "Card.h"
using namespace std;

Card::Card(){// declare a Card C in main
    suit = 'c';
    rank = 2;
}


Card::Card(char symbol, int num){ //declare a Card C(char,int) in main

    if (symbol == 'c' || symbol == 'C'){
        suit = 'c';
    }
    else if (symbol == 'd'|| symbol == 'D'){
        suit = 'd';
    }
    else if (symbol == 'h' || symbol == 'H'){
        suit = 'h'; 
    }
    else if (symbol == 's' || symbol == 'S'){
        suit = 's';
        }
    else {
        suit = 'c';
    }
    if (num > 0 && num < 14){
        rank = num;
        }
        else{
            rank = 2;
        }
}

char Card::getSuit() const{ // cardObject.getSuit()
    return suit;
}

int Card::getRank() const{ // cardObject.getRank()
    return rank;
}


ostream& operator<<(ostream& out, const Card& totalCard){ // (cout / filestream) << cardObject
    int suit = totalCard.getSuit(); 
    int rank = totalCard.getRank();

    if (suit == 'c'){
        if (rank == 1){
            out << "Ace of Clubs";
        }
        else if (rank == 2){
            out << "2 of Clubs";
        }
        else if (rank == 3){
            out << "3 of Clubs";
        }
        else if (rank == 4){
            out << "4 of Clubs";
        }
        else if (rank == 5){
            out << "5 of Clubs";
        }
        else if (rank == 6){
            out << "6 of Clubs";
        }
        else if (rank == 7){
            out << "7 of Clubs";
        }
        else if (rank == 8){
            out << "8 of Clubs";
        }
        else if (rank == 9){
            out << "9 of Clubs";
        }
        else if (rank == 10){
            out << "10 of Clubs";
        }
        else if (rank == 11){
            out << "Jack of Clubs";
        }
        else if (rank == 12){
            out << "Queen of Clubs";
        }
        else if (rank == 13){
            out << "King of Clubs";
        }
    }
    else if (suit == 'd'){
        if (rank == 1){
            out << "Ace of Diamonds";
        }
        else if (rank == 2){
            out << "2 of Diamonds";
        }
        else if (rank == 3){
            out << "3 of Diamonds";
        }
        else if (rank == 4){
            out << "4 of Diamonds";
        }
        else if (rank == 5){
            out << "5 of Diamonds";
        }
        else if (rank == 6){
            out << "6 of Diamonds";
        }
        else if (rank == 7){
            out << "7 of Diamonds";
        }
        else if (rank == 8){
            out << "8 of Diamonds";
        }
        else if (rank == 9){
            out << "9 of Diamonds";
        }
        else if (rank == 10){
            out << "10 of Diamonds";
        }
        else if (rank == 11){
            out << "Jack of Diamonds";
        }
        else if (rank == 12){
            out << "Queen of Diamonds";
        }
        else if (rank == 13){
            out << "King of Diamonds";
        }
    }
    else if (suit == 'h'){
        if (rank == 1){
            out << "Ace of Hearts";
        }
        else if (rank == 2){
            out << "2 of Hearts";
        }
        else if (rank == 3){
            out << "3 of Hearts";
        }
        else if (rank == 4){
            out << "4 of Hearts";
        }
        else if (rank == 5){
            out << "5 of Hearts";
        }
        else if (rank == 6){
            out << "6 of Hearts";
        }
        else if (rank == 7){
            out << "7 of Hearts";
        }
        else if (rank == 8){
            out << "8 of Hearts";
        }
        else if (rank == 9){
            out << "9 of Hearts";
        }
        else if (rank == 10){
            out << "10 of Hearts";
        }
        else if (rank == 11){
            out << "Jack of Hearts";
        }
        else if (rank == 12){
            out << "Queen of Hearts";
        }
        else if (rank == 13){
            out << "King of Hearts";
        }
    }
    else if (suit == 's'){
        if (rank == 1){
            out << "Ace of Spades";
        }
        else if (rank == 2){
            out << "2 of Spades";
        }
        else if (rank == 3){
            out << "3 of Spades";
        }
        else if (rank == 4){
            out << "4 of Spades";
        }
        else if (rank == 5){
            out << "5 of Spades";
        }
        else if (rank == 6){
            out << "6 of Spades";
        }
        else if (rank == 7){
            out << "7 of Spades";
        }
        else if (rank == 8){
            out << "8 of Spades";
        }
        else if (rank == 9){
            out << "9 of Spades";
        }
        else if (rank == 10){
            out << "10 of Spades";
        }
        else if (rank == 11){
            out << "Jack of Spades";
        }
        else if (rank == 12){
            out << "Queen of Spades";
        }
        else if (rank == 13){
            out << "King of Spades";
        }
    }
    return out;
    }
