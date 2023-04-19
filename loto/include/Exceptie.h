#ifndef EXCEPTIE_H
#define EXCEPTIE_H

class Exceptie
{
public:
    Exceptie();
    virtual ~Exceptie();
    Exceptie(char _catEx[], char _tipEx[]);
    void Print(void);

protected:

private:
    char catEx[50];
    char tipEx[50];
};

#endif // EXCEPTIE_H
