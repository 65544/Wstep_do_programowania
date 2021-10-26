
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d;
    int wybor;
    int yorn;
    int sred;

    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;
    cout << endl;
    cout << "Wybierz dzialanie: " << endl;
    cout << "1.Dodawanie: " << endl;
    cout << "2.Odejmowanie: " << endl;
    cout << "3.Mnozenie: " << endl;
    cout << "4.Dzielenie: " << endl;
    cout << "5.Srednia arytmetyczna: " << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "Suma = " << a + b;
        break;
    case 2:
        cout << "Roznica = " << a - b;
        break;

    case 3:
        cout << "Iloczyn = " << a * b;
        break;

    case 4:
        if (b == 0)
            cout << " Nigdy nie dziel przez zero\n bo to zawsze szkodzi\n kiedy o matme chodzi";
        else cout << "Iloraz = " << a / b;
        break;

    case 5:
        cout << "Czy chcialbys obliczyc srednia z wiekszej ilosci liczb? (Max 4)\n Wpisz (1) jesli tak lub (2) jesli nie\n";
        cin >> yorn;
        if (yorn == 2)
        {
            cout << "Srednia = " << (a + b) / 2;

        }


        else {
            cout << "Z ilu liczb chcialbys wyliczyc srednia arytmetyczna?(3 lub 4) ";
            cin >> sred;
            switch (sred)
            {
            case 3:
                cout << "Wpisz trzecia liczbe: ";
                cin >> c;
                cout << "Srednia = " << (a + b + c) / 3;
                break;

            case 4:
                cout << "Wpisz trzecia liczbe: ";
                cin >> c;

                cout << "Wpisz czwarta liczbe: ";
                cin >> d;
                cout << "Srednia = " << (a + b + c + d) / 4;
                break;
            }
        }




        break;

    default:
        cout << "Nie ma takiej opcji! ";
        break;
    }

}


