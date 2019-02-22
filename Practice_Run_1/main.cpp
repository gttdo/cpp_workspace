// BlackJacko is a mini game of sorts

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

void display_menu();
void player_name();
void game();

int main()
{
    display_menu();
	return 0;
}

void display_menu (){
    cout << "*************************" << endl;
    cout << " Welcome to BlackJacko!!!" << endl;
    cout << "           BY            " << endl;
    cout << "          GppDo          " << endl;
    cout << "*************************" << endl;
    cout << "          Menu           " << endl;
    cout << "*************************" << endl;
    cout << "New Player     : N" << endl;
    cout << "Start New Game : S" << endl;
    cout << "Quit           : Q" << endl << endl;
    
    char selection{};
    cin >> selection;
    char Yes_No {};
    
    if (selection == 'N' || selection == 'n')
        player_name();
    else if (selection == 'S' || selection == 's'){
        cout << "Would you like to start a new game?" << endl << endl;
        cin >> Yes_No;
        if (Yes_No == 'Y' || Yes_No == 'y')
            game();
        else if (Yes_No == 'N' || Yes_No == 'n'){
            display_menu();
        }
        else{
            cout << "Invalid entry, please try again" << endl << endl;
            display_menu();
        }
    }
    else if (selection == 'Q' || selection == 'q'){
        cout << "Are you sure?" << endl << endl;
        cin >> Yes_No;
        if (Yes_No == 'Y' || Yes_No == 'y')
            cout << "Goodbye" << endl << endl;
        else if (Yes_No == 'N' || Yes_No == 'n'){
            display_menu();
        }
        else{
            cout << "Invalid entry, please try again" << endl << endl;
            display_menu();
        }
    }
    else{
        cout << "Invalid entry, please try again!" << endl << endl;
        display_menu();
    }
}

void player_name(){
    cout << "Please enter your Nickname: " << endl;
    string nickname = " ";
    cin >> nickname;
    cout << "\nHello " << nickname << endl << endl;
}

void game(){
    cout << "Hello Player!" << endl << endl;
    int numbers [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    srand (time (NULL));
    int random_integer{};
    int card_number{};
    int temp{};
    char selection{};
    do {
        cout << "Hit Me (Y/N): " << endl << endl;
        cin >> selection; 
        cout << endl;
        if (selection == 'Y'|| selection == 'y'){
            random_integer = rand() % 12;
            if (random_integer >= 0 && random_integer <= 12){
               temp = numbers[random_integer];
            }
        }
        card_number += temp;
        cout << "Your number is " << card_number << endl << endl;
        
        if (card_number > 21){
            cout << "You lose" << endl << endl;
        }
        else if (card_number == 21){
            cout << "Congratulations, you won!" << endl << endl;
        }
        else
            cout << "Keep trying!" << endl << endl;
    }while (selection != 'n' && selection != 'N');
    display_menu();
}