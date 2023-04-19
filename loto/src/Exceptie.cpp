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
#include <string.h>

using namespace std;

Exceptie::Exceptie()
{
    //ctor
}

Exceptie::~Exceptie()
{
    //dtor
}

Exceptie::Exceptie(char _catEx[], char _tipEx[])
{
    strcpy(catEx, _catEx );
    strcpy(tipEx, _tipEx );
}
void Exceptie::Print(void)
{
    cerr<<"Exceptie ["<<catEx<<"] - "<<tipEx<<endl;
}
