#ifndef MAIN_H
#define MAIN_H

class Main
{
    public:
        // Constructor
        Main();
        // Destructor
        virtual ~Main();
        // Meniu Principal
        void main();
        // Citire Suma
        void CitireSumaTastatura();
        // Setter Suma
        void SetSuma(float _suma);
        // Getter Suma
        float GetSuma();
        // Setter Castig
        void SetCastig(float _castig);
        // Getter Castig
        float GetCastig();
        // Suma Dupa Joc
        void SetSumaDupaJoc(float _castig);

    protected:

    private:
        float suma;
        float castig;
};

#endif // MAIN_H
