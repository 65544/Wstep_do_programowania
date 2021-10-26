
#include <iostream>
using namespace std;
int main()
{
    int liczba1, liczba2;
    
    
    
    cout << "Podaj pierwsza liczbe: " << endl; cin >> liczba1;
    cout << "Podaj druga liczbe: " << endl; cin >> liczba2;

    if (liczba1 > liczba2)
        cout << "Pierwsza liczba jest wieksza!" << endl;
    if (liczba2 > liczba1)
        cout << "Druga liczba jest wieksza!" << endl;
    else
        cout << "Liczby sa rowne!";
}

