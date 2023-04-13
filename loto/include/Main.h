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
        void SetSuma(int _suma);
        // Getter Suma
        int GetSuma();

    protected:

    private:
        int suma;
};

#endif // MAIN_H
