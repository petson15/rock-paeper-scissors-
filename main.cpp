#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int UserOption()
{
    int option;
    cout << "select your weapon"<<endl<<endl;
    cout << "1;ROCK "<<endl;
    cout << "2; PAPER"<<endl;
    cout << "3; SCISSORS"<<endl;
    cin>>option;

    if(option>3)
    {
        cout << "please enter a valid input"<<endl;
        cout << "select your weapon"<<endl<<endl;
        cout << "1;ROCK "<<endl;
        cout << "2; Scissors"<<endl;
        cout << "3; Paper"<<endl;
        cin>>option;
    }

    if(option==1) return 1;
    if(option==2) return 2;
    if(option==3) return 3;
}

int ComputerOption()
{
    int comOption;

    srand(time(0));

    comOption = rand()%3+1;

    if(comOption==1) return 1;
    if(comOption==2) return 2;
    if(comOption==3) return 3;

}

 void ShowSelectedOption(int option)
 {
     if(option == 1) cout << "rock"<<endl;
     if(option == 2) cout << "Paper"<<endl;
     if(option == 3) cout << "Scissors"<<endl;


 }

void Winnerselect(int userchoice, int compchoice)
{
    if(userchoice == 1 && compchoice == 2)
    {
        cout << "computer wins --- paper wraps rock"<<endl;
    }
    else if(userchoice == 2 && compchoice == 3)
    {
        cout << "computer wins-- scisssors cuts paper"<<endl;
    }
    else if(userchoice == 3 && compchoice == 1)
    {
        cout << "computer wins -- rock smashes scissors"<<endl;
    }
    else if(userchoice == 1 && compchoice == 3)
    {
        cout << "you win --- rock smashes scissors"<<endl;
    }
    else if(userchoice == 2 && compchoice == 1)
    {
        cout << "you win -----paper wraps rock"<<endl;
    }
    else if(userchoice == 3 && compchoice == 2)
    {
        cout << "you win----scissors cuts paper"<<endl;
    }
    else{
        cout << "TIE, PLAY GAME AGAIN"<<endl;
    }

}

int main()
{

    int gamePlay;
    do
    {
        cout << "ROCK PAPER SCISSORS GAME "<<endl;
        cout << "WIN IF YOU CAN "<<endl;

        cout << "|----------------------------------|"<<endl;

        int Useropt,Comopt;
        Useropt=UserOption();
        Comopt=ComputerOption();

        cout << "computer selected"<<endl;
        ShowSelectedOption(Comopt);
        cout << "You selected"<<endl;
        ShowSelectedOption(Useropt);

        Winnerselect(Useropt,Comopt);

        cout << "enter 1 to play again and 0 to quit"<<endl;
        cin>>gamePlay;
        system("cls");

    }while(gamePlay!=0);


    return 0;
}
