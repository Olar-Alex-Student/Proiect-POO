#ifndef CINCIDINPATRUZECI_H
#define CINCIDINPATRUZECI_H

#include <vector>

class CinciDinPatruzeci
{
    public:
        // Consturcotr
        CinciDinPatruzeci();
        // Destructor
        virtual ~CinciDinPatruzeci();
        // Meniu 5/40
        void MainCinciDinPatruzeci();
        // Alegere Numere
        void AlegereNumere();
        // Getter Numere
        void GetNumere();
        // Extragere Numere
        void ExtragereNumere();
        // Getter Numere Extrase
        void GetNumereExtrase();
        // Verificare Castig
        void VerificareCastig();
        // Getter Castig
        float GetCastig();

    protected:

    private:
        float castig;
        std::vector<int> numere;
        std::vector<int> extrase;
};

#endif // CINCIDINPATRUZECI_H
