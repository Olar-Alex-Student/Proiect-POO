//Clase
#include "Main.h"
#include "CinciDinPatruzeci.h"
#include "SaseDinPatruzeciSiNoua.h"
#include "Exceptie.h"

//Biblioteci
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <vector>
#include <chrono>
#include <thread>
#include <random>
#include <algorithm>

using namespace std;

Main::Main()
{
    this->suma = 0;
}

Main::~Main()
{
    //dtor
}

void Main::SetSuma(float _suma)
{
    this->suma=_suma;
}

float Main::GetSuma()
{
    return suma;
}

void Main::CitireSumaTastatura()
{
    float _suma;
    cin >> _suma;
    SetSuma(_suma);
}

void Main::main()
{
    int alegere;
    CinciDinPatruzeci Joc5;
    SaseDinPatruzeciSiNoua Joc6;
    do
    {
        system("cls");
        cout << "MENIU" << endl << endl;

        ///Posibilitati
        cout << "1. Depoziteaza Bani" << endl;
        cout << "2. Vizualizare Sold" << endl;
        cout << "3. Joc 6/49" << endl;
        cout << "4. Joc 5/40" << endl;
        cout << "5. Iesire" << endl;

        ///Alegere varianta
        cout << endl << "Varianta ta este: ";
        cin >> alegere;

        //Meniu
        switch(alegere)
        {
        case 1:
            cout << endl << "Introdu suma: ";
            CitireSumaTastatura();
            getch();
            break;
        case 2:
            cout << endl << "Sold-ul este: " << GetSuma() << endl;
            getch();
            break;
        case 3:
            Joc6.MainSaseDinPatruzeciSiNoua();
            getch();
            break;
        case 4:
            Joc5.MainCinciDinPatruzeci();
            getch();
            break;
        case 5:
            exit(0);
        }
    }
    while(true);
}
