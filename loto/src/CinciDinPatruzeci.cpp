//Clase
#include "Main.h"
#include "CinciDinPatruzeci.h"
#include "SaseDinPatruzeciSiNoua.h"

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

CinciDinPatruzeci::CinciDinPatruzeci()
{
    this->castig = 0;
    this->extrase = {};
    this->numere = {};
}

CinciDinPatruzeci::~CinciDinPatruzeci()
{
    //dtor
}

void CinciDinPatruzeci::AlegereNumere()
{
    for(int i=0; i<5; i++)
    {
        int numar;
        cout << "Nr. " << i+1 << ": ";
        cin >> numar;
        numere.push_back(numar);
    }
}

void CinciDinPatruzeci::GetNumere()
{
    for(int i=0; i<5; i++)
    {
        cout << "Nr. " << i+1 << ": " << numere[i] << endl;
    }
}

void CinciDinPatruzeci::ExtragereNumere()
{
    for(int i=0; i<40; i++)
    {
        int extras;
        int random = 1 + (rand() % 40);
        extras = random;
        while (std::find(extrase.begin(), extrase.end(), extras) != extrase.end())
        {
            int random = 1 + (rand() % 40);
            extras = random;
        }
        extrase.push_back(extras);
    }
}

void CinciDinPatruzeci::GetNumereExtrase()
{
    for(int i=0; i<40; i++)
    {
        cout << "Nr. " << i+1 << ": " << extrase[i] << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void CinciDinPatruzeci::MainCinciDinPatruzeci()
{
    system("cls");
    cout << "Numerele de pe bilet sunt:" << endl;
    AlegereNumere();
    system("cls");
    //GetNumere();
    cout << "Se extrag numerele..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    ExtragereNumere();
    system("cls");
    cout << "Numerele extrase sunt:" << endl;
    GetNumereExtrase();
}
