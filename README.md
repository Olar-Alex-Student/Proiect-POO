# Proiect-POO

## Descrierea Jocului de LOTO

Jocul de **LOTO** consta in extragerea aleatorie a unor bile dintr-un bol.

Daca numerele de pe bile sunt cele pe care tu le-ai ales ai sansa sa iti inmultesti banii.

Cu cat numarul de pe bile care corespunde cu cele alese de tine sunt extrase consecutiv, sansa ta de multiplicare a banilor este si mai mare.

## Mod utilizare a jocului

1. In prima faza, utilizatorul este rugat sa introduca suma dorita pe care doreste sa o joace.
2. Utilizatorul va avea posibilitatea de alegere a jocului. Cele 2 posibilitati sunt **LOTO 6/49** si **LOTO 5/40**.
3. Dupa preferinta jocului, utiliztorul trebuie sa aleaga care vor fi numerele alese de el pentru extragere.
4. In momentul extragerii utilizatorul poate viziona numerele scoase din bol. Urmand ca programul sa ii afiseze utilizatorului in momentul finalizarii extragerii daca si-a inmultit banii sau a pierdut suma respectiva.
5. Ca activitate finala utilizatorul poate iesi din program cu banii din balanta sau poate reincarca contul cu o noua suma de bani.

## Clase folosite

1. Clasa jocului **5/40**
2. Clasa jocului **6/49**

### Clasa 5/40

- Clasa **5/40** va contine functiile de extragere aleatorie a bilelor din bol si cea de selectie a numerelor de catre utilizator.
- In functia de alegere a bilelor se va impune selectarea a cat din buget sa fie alocat pentru acel joc.
- Numerele extrase si alese sunt de tip `int`. Iar la fiecare bila ghicita suma introdusa pentru joc se va inmulti cu `x1.5`.

### Clasa 6/49

- Clasa **6/49** va contine functiile de extragere aleatorie a bilelor din bol si cea de selectie a numerelor de catre utilizator.
- In functia de alegere a bilelor se va impune selectarea a cat din buget sa fie alocat pentru acel joc.
- Numerele extrase si alese sunt de tip `int`. Iar la fiecare bila ghicita suma introdusa pentru joc se va inmulti cu `x1.75`.
