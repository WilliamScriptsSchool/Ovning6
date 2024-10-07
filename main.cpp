#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    char roll_again = 'y';
    int dice_roll;

    while (roll_again == 'y' || roll_again == 'Y'){
        dice_roll = rand() % 6 + 1;
        cout << "Det belv " << dice_roll << endl;

        cout << "Slå igen? (y/n): ";
        cin >> roll_again;
    }
    cout << "Ok, slå inte igen." << endl;
}

int main(){
    srand(time(0));

    int guess;
    int number = rand() % 50 + 1;

    while(guess != number){
        cout << "Gissa ett nummer: ";
        cin >> guess;

        if(guess < number){
            cout << "För lågt." << endl;
            continue;
        }
        else if(guess > number){
            cout << "För högt." << endl;
            continue;
        }
    } 
    cout << "Du gissade rätt!";
}

int main(){
    srand(time(0));

    int road_width = 10;
    int middle_position = road_width / 2;
    int position = middle_position;

    cout << "Ute och går.\n";

    while (position > 0 && position < road_width - 1){
        cout << "|";
        for (int i = 0; i < road_width; i++){
            if (i == position) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "|\n";
        int move = rand() % 2;
        if (move == 0){
            position--;
        }
        else{
            position++;
        }
    }

    cout << "Nu ramla han i diket!";

    return 0;
}

int main(){
    srand(time(0));

    int val, datorVal;
    int points = 0, computerPoints = 0;

    cout << "1 - Sten\n" << "2 - Sax\n" << "3 - Påse\n";

    while(points < 2 && computerPoints < 2){
        cout << "Ditt val: ";
        cin >> val;

        datorVal = rand() % 3 + 1 ;

        switch (datorVal){
            case 1: cout << "Datorn valde sten\n"; break;
            case 2: cout << "Datorn valde sax\n"; break;
            case 3: cout << "Datorn valde påse\n"; break;
        }

        if (val == datorVal){
            cout << "Oavgjort denna runda\n";
        }
        else if(val == 1 && datorVal == 2 ||
                val == 2 && datorVal == 3 ||
                val == 3 && datorVal == 1){
                    cout << "Du vinner denna omgång!\n";
                    points++;
        }
        else{
            cout << "Datorn vann denna omgång...\n";
            computerPoints++;
        }

        cout << "Du har " << points << " poäng. Datorn har " << computerPoints << " poäng.\n";
    }

    if(points == 2){
        cout << "Grattis du vann!";
    }
    else{
        cout << "Datorn vann...";
    }
}
