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
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>


using namespace std;

Main::Main()
{
    this->suma = 0;
    this->castig = 1;
}

Main::~Main()
{
    //dtor
}

void Main::SetSuma(float _suma)
{
    this->suma += _suma;
}

float Main::GetSuma()
{
    return suma;
}

void Main::SetCastig(float _castig)
{
    this->castig = _castig;
}

float Main::GetCastig()
{
    return castig;
}

void Main::SetSumaDupaJoc(float _castig)
{
    this->suma *= _castig;
}

void Main::CitireSumaTastatura()
{
    float _suma;
    cin >> _suma;
    SetSuma(_suma);
}

void Main::Exit()
{
    cout << "EXIT" << endl;
    exit(0);
}

void Main::Alegeri()
{
    system("clear");
    cout << "MENIU" << endl << endl;

    ///Posibilitati
    cout << "1. Depoziteaza Bani" << endl;
    cout << "2. Vizualizare Sold" << endl;
    cout << "3. Joc 6/49" << endl;
    cout << "4. Joc 5/40" << endl;
    cout << "5. Iesire" << endl;

    ///Alegere varianta
    cout << endl << "Varianta ta este: ";
}

void Main::Depozit()
{
    cout << endl << "Introdu suma: ";
    CitireSumaTastatura();
    getch();
    getch();
}

void Main::Vizualizare()
{
    cout  << endl << "Sold-ul este: " << GetSuma();
    getch();
    getch();
}

void Main::Sase(SaseDinPatruzeciSiNoua Joc6)
{
    if(suma <= 0 )
    {
        throw Exceptie("6/49","Suma din cont este 0");
    }
    Joc6.MainSaseDinPatruzeciSiNoua();
    SetCastig(Joc6.GetCastig());
    SetSumaDupaJoc(GetCastig());
    getch();
    getch();
}

void Main::Cinci(CinciDinPatruzeci Joc5)
{
    if(suma <= 0 )
    {
        throw Exceptie("5/40","Suma din cont este 0");
    }
    Joc5.MainCinciDinPatruzeci();
    SetCastig(Joc5.GetCastig());
    SetSumaDupaJoc(GetCastig());
    getch();
    getch();
}

void Main::main()
{
    try
    {
        int alegere;

        CinciDinPatruzeci Joc5;
        SaseDinPatruzeciSiNoua Joc6;

        do
        {
            Alegeri();
            cin >> alegere;

            //Meniu
            switch(alegere)
            {
            case 1:
                Depozit();
                break;
            case 2:
                Vizualizare();
                break;
            case 3:
                Sase(Joc6);
                break;
            case 4:
                Cinci(Joc5);
                break;
            case 5:
                system("clear");
                Exit();
            }
        }
        while(true);
    }
    catch(Exceptie ex)
    {
        ex.Print();
        exit(0);
    }
    catch(...)
    {
        cout<<"Exceptie nedefinita!"<<endl;
        exit(0);
    }
}
