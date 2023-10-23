#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//****************************************************************************************************

void printTitle();
void printFingerSummary(int, int, int, int);
string findDecision(int, int, int, int);
void printDecision(string);

int main ()
{
    int p1,
        p2,
        p1Guess,
        p2Guess;
    
    printTitle();

    printFingerSummary(p1, p2, p1Guess, p2Guess);

    string result = findDecision(p1, p2, p1Guess, p2Guess);

    printDecision(result);

    return 0;
}

//****************************************************************************************************

void printTitle()
{
    cout << "Morra Simulation" << endl << endl;
}

//****************************************************************************************************

void printFingerSummary(int player1Num, int player2Num, int player1Guess, int player2Guess)
{
    short seed = time(0);
    srand (seed);

    player1Num = rand() % 6;
    player2Num = rand() % 6;

    player1Guess = rand() % 11;
    player2Guess = rand() % 11;

    cout << "\t\t\t Player 1" << "\t\t Player 2" << endl;
         
    cout << "\t Fingers" << "\t " << player1Num << "\t\t\t " << player2Num << endl;

    cout << "\t Guesses" << "\t " << player1Guess << "\t\t\t " << player2Guess << endl << endl;
}

//****************************************************************************************************

string findDecision (int player1Num, int player2Num, int player1Guess, int player2Guess)
{
    int totalFingers; 

    string result;
    
    totalFingers = player1Num + player2Num; 
    
    if ((player1Guess == totalFingers) && (player2Guess == totalFingers))
    {
        result = "It's a Tie!";
    }
    else if (player1Guess == totalFingers)
    {
        result = "Player 1 is the Winner";
    }
    else if (player2Guess == totalFingers)
    {
        result =  "Player 2 is the Winner";
    }
    else if ((player1Guess != totalFingers) && (player2Guess != totalFingers))
    {
        result =  "No one won. Try again!";
    }

    return result;
}

//****************************************************************************************************

void printDecision (string result)
{
    cout << result << endl; 
}

//****************************************************************************************************

/*

Morra Simulation

                         Player 1                Player 2
         Fingers         5                       2
         Guesses         6                       0

No one won. Try again!

*/