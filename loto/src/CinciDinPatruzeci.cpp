#include "CinciDinPatruzeci.h"

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

CinciDinPatruzeci::CinciDinPatruzeci()
{
    this->castig = 0;
    this->extrase[40] = {0};
    this->numere[5] = {0};
}

CinciDinPatruzeci::~CinciDinPatruzeci()
{

}

void CinciDinPatruzeci::AlegereNumere()
{
    for(int i=0; i<5; i++)
    {
        cout << "Nr. " << i+1 << ": ";
        cin >> numere[i];
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
    for (int i = 0; i < 40; i++)
    {
        extrase[i] = i + 1;
    }
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(extrase, extrase + 40, g);
}

void CinciDinPatruzeci::GetNumereExtrase()
{
    for(int i=0; i<40; i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << "Nr. " << i+1 << ": " << extrase[i] << endl;
    }
}

void CinciDinPatruzeci::VerificareCastig()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(numere[i]==extrase[j])
            {
                castig+=1.5;
            }
        }
    }
}

float CinciDinPatruzeci::GetCastig()
{
    return castig;
}

void CinciDinPatruzeci::MainCinciDinPatruzeci()
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
    cout << "Castigul tau este " << GetCastig() << " din suma din cont.";
}
