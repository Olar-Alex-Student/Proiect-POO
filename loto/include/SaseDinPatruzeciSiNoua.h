#ifndef SASEDINPATRUZECISINOUA_H
#define SASEDINPATRUZECISINOUA_H


class SaseDinPatruzeciSiNoua
{
    public:
        // Constructor
        SaseDinPatruzeciSiNoua();
        // Destructor
        virtual ~SaseDinPatruzeciSiNoua();
        // Meniu 5/40
        void MainSaseDinPatruzeciSiNoua();
        // Alegere Numere
        void AlegereNumere();
        // Getter Numere
        void GetNumere();
        // Extragere Numere
        void ExtragereNumere();
        // Getter Numere Extrase
        void GetNumereExtrase();
    protected:

    private:
        int castig;
        std::vector<int> numere;
        std::vector<int> extrase;
};

#endif // SASEDINPATRUZECISINOUA_H
