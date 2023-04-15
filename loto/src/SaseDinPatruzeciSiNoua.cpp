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

SaseDinPatruzeciSiNoua::SaseDinPatruzeciSiNoua()
{
    this->castig = 0;
}

SaseDinPatruzeciSiNoua::~SaseDinPatruzeciSiNoua()
{
    //dtor
}

void SaseDinPatruzeciSiNoua::AlegereNumere()
{
    cout << "Numere alese de tine sunt:" << endl;
    for(int i=0; i<6; i++)
    {
        cout << "Nr. " << i+1 << ": ";
        cin >> numere[i];
    }
}

int* SaseDinPatruzeciSiNoua::GetNumere()
{
    return numere;
}

void SaseDinPatruzeciSiNoua::ExtragereNumere()
{
    bool check = false;
    cout << "Numerele extrase sunt:" << endl;
    for(int i=0; i<49; i++)
    {
        extrase[i] = 1 + (rand() % 99);
        /*do
        {
            for(int j=0; j<i; j++)
            {
                if(extrase[i]==extrase[j])
                {
                    check=false;
                }
                else
                {
                    check=true;
                }
            }
        }
        while(check==false);*/
        cout << i+1 << ". " << extrase[i] << endl;
    }
}

int* SaseDinPatruzeciSiNoua::GetNumereExtrase()
{
    return extrase;
}

void SaseDinPatruzeciSiNoua::MainSaseDinPatruzeciSiNoua()
{
    AlegereNumere();
    ExtragereNumere();
}
