#include <cstdlib>
#include <iostream>
using namespace std;
//-----Zadanie 1------
//int main()
//{
//    int a = 100;
//    int *b;
//    b = &a;
//    int c = 75;
//    int* d;
//    d = &c;
//    int e = 50;
//    int* f;
//    f = &e;
//    cout << "Adres zmiennej: " << b << endl;
//    cout << "Wartosc zmiennej: " << *b << endl;
//    cout << "Roznica: " << *d << "-" << *f << " = " << (*d) - (*f) << endl;
//    cout << "Srednia: " << "(" << *b << "+" << *d << "+" << *f << ")/3 = " << ((*b) + (*d) + (*f)) / 3 << endl;
//}
//-----Zadanie 2------
//int main()
//{
//	int tablica[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *x;
//	x = &tablica[0];
//	cout << x << endl;
//	x = x + 3;
//	cout << x;
//
//
//}
//-----Zadanie 3------
//int main()
//{
//	int tablica[] = { 1,2,3,4,5,6,7,8,9,10 };
//	float srednia;
//	int *x;
//	x =& tablica[0];
//
//	for (int i = 0; i < 10; i++) {
//		
//		cout << *x << endl;
//		x++;
//
//	}
//	srednia = 5.5;
//	cout << "Srednia wynosi: " << srednia;
//}
//-----Zadanie 4-----
//int main()
//{
//
//    int kwadrat;
//    int liczba;
//    int* x;
//    cout << "Podaj liczbe : ";
//    cin >> liczba;
//    x = &liczba;
//
//    kwadrat = (*x) * (*x);
//
//
//    cout << kwadrat << endl;
//}
//------Zadanie 5------
//int main()
//{
//
//
//    int liczba;
//    int potega;
//    int kwadrat;
//    int *x;
//    int *y;
//    int *z;
//    x = &liczba;
//    y = &potega;
//    z = &kwadrat;
//    cout << "Podaj liczbe : ";
//    cin >> liczba;
//
//    cout << "Podaj potege : ";
//    cin >> potega;
//
//    for (int i = 0; i < (*y); i++)
//    {
//        if ((*y) == 0) (*z) = 1;
//        if ((*y) == 1) (*z) = (*x);
//
//        if ((*y) >= 2) (*z) = (*x) * (*x);
//
//    }
//    cout << (*z) << endl;
//
//
//}
//------Zadanie 6-----
int main()
{


    char znak;
    int ile;
 
    char *x;
    int *y;

    x = &znak;
    y = &ile;
 
    cout << "Wpisz znak : ";
    cin >> znak;

    cout << "Ile razy ma byc wypisany? ";
    cin >> ile;

    for (int i = 0; i < (*y); i++)
    {
        cout << znak << endl;

    }
    y--;


}