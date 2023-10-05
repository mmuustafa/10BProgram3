#include <iostream>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

#include "Deck.h"
#include "Card.h"


// Returns true if vector of Cards passed in contains at least 2 Cards with the same rank.
bool hasPair(const vector<Card> &hand){
    bool hP;
    for(unsigned int i = 0; i < hand.size(); ++i){
        for(unsigned int j = i+1; j < hand.size(); ++j){
            if (hand.at(i).getRank() == hand.at(j).getRank()){
                hP = true;
            }
        }
    }
    return hP;
}


// Sends to output stream a hand of Cards on a single line, 
// each Card separated by a comma.
// If the vector is empty, do not output anything.
// Example (vector size of 3): Ace of Spades, Two of Hearts, King of Clubs 
ostream& operator<<(ostream &out, const vector<Card> & theDeck){
    
    for (unsigned int i = 1; i < 52; ++i){
        out << theDeck.at(i).getRank() <<  " of " << theDeck.at(i).getSuit() << endl;
}
    return out;
}

int main() {
    srand(2222);
    Card C;
    vector <Card> hand;
    string ans1;
    int num1;
    string file;
    int simNum;
    int cnt = 0;
    ofstream outFS;

    Deck D;
    
    for(int i = 0; i < 52; ++i){
    C = D.dealCard();
    cout << C << endl;
    }
   
}
    /*
    C = D.dealCard();
    cout << C << endl;
    D.shuffleDeck();
    Card A = D.dealCard();
    //cout << C << endl;
    cout << A << endl;
*/
cout << C << endl;
C.getRank();




/*
for (unsigned int i = 0; i < 4; ++i){
    cout << theDeck.dealCard() << endl;
}
*/

    cout << "Do you want to output all hands to a file?(Yes/No) ";
    cin >> ans1;
    cout << endl;

    if (ans1 != "Yes" && ans1 != "yes" && ans1 != "No" && ans1 != "no"){
        cout << "Invalid Answer";
        cout << endl;
        cout << "Do you want to output all hands to a file?(Yes/No) ";
        cin >> ans1;
        cout << endl;
    }

    if (ans1 == "Yes" || ans1 == "yes"){
        cout << "Enter name of output file: ";
        cin >> file;
        cout << endl;
        outFS.open(file);
        if(!outFS.is_open()){
        cout<<"Failed to open given file."<<endl;
        exit(EXIT_FAILURE);
        }
    }
    cout << "Enter number of cards per hand: ";
    cin >> num1;
    cout << endl;

    cout << "Enter number of deals (simulations): ";
    cin >> simNum;
    cout << endl;
    
    for (int i = 0; i < simNum; ++i){
        D.shuffleDeck();
        hand.resize(0);
        for (int i = 0; i < num1; ++i){
            Card C = D.dealCard();
            hand.push_back(C);
            }
        hasPair(hand);
            if (hasPair(hand)){
            outFS << "Found Pair!! ";
            for (unsigned int i = 0; i < hand.size(); ++i){
                if (i == hand.size() - 1){
                    outFS << hand.at(i) << endl;
                }
                else{
                    outFS << hand.at(i) << ", ";
                }
            }
            ++cnt;
            }
            else{
                outFS << "             ";
            for (unsigned int i = 0; i < hand.size(); ++i){
                if (i == hand.size() - 1){
                    outFS << hand.at(i) << endl;
                }
                else{
                    outFS << hand.at(i) << ", ";
                }
            }
        }
    }
    cout << endl;


    cout << "Chances of receiving a pair in a hand of " << num1 << " cards is: " << static_cast<double>(cnt)/(simNum) * 100.0 << '%';// << CALL PERCENTAGE FUNCTION;

    

/*
   for (unsigned int i = 0; i < 1; ++i){
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
   for (unsigned int i = 0; i < theDeck.size(); ++i){
        cout << theDeck.at(i) << endl;
    }
*/

    /*
    //Card Card1('c', 13);
    //Card Card2('d',13);

    //cout << Card1 << endl;
    //cout << Card2 << endl;
    

    cardDeck.push_back(Card1);
    cardDeck.push_back(Card2);
    */

    return 0;
}