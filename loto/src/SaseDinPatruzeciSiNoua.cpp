#include "SaseDinPatruzeciSiNoua.h"

//Biblioteci
#include <iostream>
#include <iomanip>
//#include <conio.h>
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

SaseDinPatruzeciSiNoua::SaseDinPatruzeciSiNoua()
{
    this->castig = 0;
    this->extrase[49] = {0};
    this->numere[6] = {0};
}

SaseDinPatruzeciSiNoua::~SaseDinPatruzeciSiNoua()
{
    //dtor
}

void SaseDinPatruzeciSiNoua::AlegereNumere()
{
    for(int i=0; i<6; i++)
    {
        cout << "Nr. " << i+1 << ": ";
        cin >> numere[i];
    }
}

void SaseDinPatruzeciSiNoua::GetNumere()
{
    for(int i=0; i<6; i++)
    {
        cout << "Nr. " << i+1 << ": " << numere[i] << endl;
    }
}

void SaseDinPatruzeciSiNoua::ExtragereNumere()
{
    for (int i = 0; i < 49; i++)
    {
        extrase[i] = i + 1;
    }
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(extrase, extrase + 49, g);
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
    system("clear");
    cout << "Numerele de pe bilet sunt:" << endl;
    AlegereNumere();
    system("clear");
    //GetNumere();
    cout << "Se extrag numerele..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    ExtragereNumere();
    system("clear");
    cout << "Numerele extrase sunt:" << endl;
    GetNumereExtrase();
    system("clear");
    cout << "Se verifica biletul..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    VerificareCastig();
    system("clear");
    cout << "Castigul tau este " << GetCastig() << " din suma din cont." << endl;
}

