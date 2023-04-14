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

CinciDinPatruzeci::CinciDinPatruzeci()
{
    this->castig = 0;
}

CinciDinPatruzeci::~CinciDinPatruzeci()
{
    //dtor
}

void CinciDinPatruzeci::AlegereNumere()
{
    cout << "Numere alese de tine sunt:" << endl;
    for(int i=0; i<5; i++)
    {
        cout << "Nr. " << i+1 << ": ";
        cin >> numere[i];
    }
}

int* CinciDinPatruzeci::GetNumere()
{
    return numere;
}

void CinciDinPatruzeci::ExtragereNumere()
{
    bool check = false;
    cout << "Numerele extrase sunt:" << endl;
    for(int i=0; i<40; i++)
    {
        extrase[i] = 1 + (rand() % 99);
        do
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
        while(check==false);
        cout << i+1 << ". " << extrase[i] << endl;
    }
}

int* CinciDinPatruzeci::GetNumereExtrase()
{
    return extrase;
}

void CinciDinPatruzeci::MainCinciDinPatruzeci()
{
    AlegereNumere();
    ExtragereNumere();
}
