//Clase
#include "Main.h"
#include "CinciDinPatruzeci.h"
#include "SaseDinPatruzeciSiNoua.h"

//Biblioteci
#include <iostream>
#include <iomanip>
#include <conio.h>
#include<cstdlib>

using namespace std;

Main::Main()
{
    this->suma = 0;
}

Main::~Main()
{
    //dtor
}

void Main::SetSuma(int _suma)
{
    this->suma=_suma;
}

int Main::GetSuma()
{
    return suma;
}

void Main::CitireSumaTastatura()
{
    int _suma;
    cout << endl << "Introdu suma dorita: ";
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
            CitireSumaTastatura();
            getch();
            break;
        case 2:
            cout << "Sold-ul este: " << GetSuma() << endl;
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
