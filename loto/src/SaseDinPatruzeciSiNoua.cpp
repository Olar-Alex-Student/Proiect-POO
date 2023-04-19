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

SaseDinPatruzeciSiNoua::SaseDinPatruzeciSiNoua()
{
    this->castig = 0;
    this->extrase = {};
    this->numere = {};
}

SaseDinPatruzeciSiNoua::~SaseDinPatruzeciSiNoua()
{
    //dtor
}

void SaseDinPatruzeciSiNoua::AlegereNumere()
{
    for(int i=0; i<6; i++)
    {
        int numar;
        cout << "Nr. " << i+1 << ": ";
        cin >> numar;
        numere.push_back(numar);
    }
}

void SaseDinPatruzeciSiNoua::GetNumere()
{
    for(int i=0; i<5; i++)
    {
        cout << "Nr. " << i+1 << ": " << numere[i] << endl;
    }
}

void SaseDinPatruzeciSiNoua::ExtragereNumere()
{
    for(int i=0; i<49; i++)
    {
        int extras;
        int random = 1 + (rand() % 49);
        extras = random;
        while (std::find(extrase.begin(), extrase.end(), extras) != extrase.end())
        {
            int random = 1 + (rand() % 49);
            extras = random;
        }
        extrase.push_back(extras);
    }
}

void SaseDinPatruzeciSiNoua::GetNumereExtrase()
{
    for(int i=0; i<49; i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << "Nr. " << i+1 << ": " << extrase[i] << endl;
    }
}

void SaseDinPatruzeciSiNoua::VerificareCastig()
{
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(numere[i]==extrase[j])
            {
                castig+=1.75;
            }
        }
    }
}

float SaseDinPatruzeciSiNoua::GetCastig()
{
    return castig;
}

void SaseDinPatruzeciSiNoua::MainSaseDinPatruzeciSiNoua()
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
    system("cls");
    cout << "Se verifica biletul..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    VerificareCastig();
    system("cls");
    cout << "Castigul tau este " << GetCastig() << " din suma din cont." << endl;
}

