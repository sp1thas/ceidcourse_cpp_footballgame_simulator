/**
    Footbal Game
    main.cpp
    Purpose: H main tou programmatos
    @author Simakis Panagiotis
    @version 1.2 08/09/2016
*/
#include <iostream>
#include "Paixnidi.h"
#include "Paiktis.h"
#include "Mpala.h"
#include "Omada.h"
#include <cstdlib>
using namespace std;

int main()
{
    int GameRounds ;
    cout <<"Insert the number of rounds\n-> ";
    // an o xrhsths dwsei enter tha paixtoun 10 gyroi by dev
    cin>>GameRounds;

    // tis diastaseis tou ghpedou tis orizoyme san statheres
    const int DimX = 9 ; // Oria toy ghpedoy
    const int DimY = 6 ;
    int i,j;
    cout << "Playing field dimensions: " << DimX << " x " << DimY << endl;
    // Dhmiourgia antikeimenou Paixnidiou
    Paixnidi Game;
    Game.Rounds = 0 ;
    // Dhmiourgia antikeimenou mpalas
    Mpala M;

    do {   //domh epanalhpshss gia thn ektelesh ths run turn

        Game.Rounds += 1 ;
        cout <<"Round: "<< Game.Rounds <<endl;

        Game.RunTurn(DimX,DimY,GameRounds);

        cout<<"Press Enter to continue\n";
        cout<<string(20,'-')<<"\n"<<string(20, '-')<<"\n\n\n";
        cin.ignore();

   }
    while ( Game.Rounds < GameRounds ) ;

    // ektpwsh tou katallhlou mhnymatos otan to paixnidi teleiwsei
    cout<<string(20,' ')<<"\n"<<string(7,' ')<<"Game Over"<<"\n"<<string(20,' ');
    return 0 ;
}
