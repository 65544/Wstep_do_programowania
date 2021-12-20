

#include <iostream>
using namespace std;


//int main()
//{
    //-----------Zadanie 1------------
    /*float PI = 3.14;
    float promien, pole, pole1, bok1, bok2, , wysokosc, objetosc, obwod;
    int figura;
    cout << "Pole/objetosc jakiej figury chcesz obliczyc? (Wpisz liczbe odpowiadajaca figurze) " << endl;
    cout << " 1. Kolo \n 2. Prostokat \n 3. Trojkat \n 4. Szescian \n 5. Walec" << endl;
    cin >> figura;
    switch (figura) {
    case 1:
        cout << "Podaj promien kola: ";
        cin >> promien;
        pole = PI * promien * promien;
        cout << "Pole wynosi: " << pole;
        break;
    case 2:
        cout << "Podaj boki prostokata: \n" << "Pierwszy bok: ";
        cin >> bok1;
        cout << "Drugi bok: ";
        cin >> bok2;
        pole = bok1 * bok2;
        cout << "Pole wynosi: " << pole;
        break;
    case 3:
        cout << "Podaj bok trojkata i padajaca na niego wysokosc: \n" << "Bok: ";
        cin >> bok1;
        cout << "Padajaca na niego wysokosc: ";
        cin >> wysokosc;
        pole = (bok1 * wysokosc) / 2;
        cout << "Pole wynosi: " << pole;
        break;
    case 4:
        cout << "Podaj bok szescianu: ";
        cin >> bok1;
        pole = (bok1*bok1)*6;
        objetosc = bok1 * bok1 * bok1;
        cout << "Pole wynosi: " << pole << endl;
        cout << "Objetosc wynosi: " << objetosc;
        break;
    case 5:
        cout << "Podaj promien podstawy i wysokosc walca: \n" << "Promien: ";
        
        cin >> promien;
        cout << "Wysokosc: ";
        cin >> wysokosc;
        obwod = 2 * PI * promien;
        pole = PI*promien*promien;
        pole1 = (2 * pole) + (obwod * wysokosc);
        cout << "Pole calkowite: " << pole1 << endl;
        objetosc = PI * promien * promien * wysokosc;
        cout << "Objetosc: " << objetosc;
        break;
    default:
        cout << "Wesolych swiat! :D" << endl;*/
    //}
    //--------Zadanie 2----------
    //bool LiczbaPierwsza(int liczba)
    //{
    //    if (liczba < 2)
    //        return false;
    //
    //    for (int i = 2; i * i <= liczba; i++)
    //        if (liczba % i == 0)
    //           return false;
    //    return true;}
    //-------Zadanie 3--------

   /* void dec_to_bin(int liczba)
    {
        int i = 0, tab[31];

        while (liczba) 
        {
            tab[i++] = liczba % 2;
            liczba /= 2;
        }

        for (int j = i - 1; j >= 0; j--)
            cout << tab[j];
    }

    int main()
    {
        int liczba;

        cout << "Podaj liczbe: ";
        cin >> liczba;

        cout << liczba << " po zamianie na postac binarna: ";
        dec_to_bin(liczba);
        

        
        return 0;
    }*/
//----------Zadanie 4------------
long long dwusilnia(unsigned int a)
{
    long long schowek = 1; 

    for (; a > 1; a -= 2)
        schowek *= a;

    return schowek;
}

int main()
{
    unsigned int a;

    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Dwusilnia z liczby " << a << " wynosi " << dwusilnia(a) << endl;

}










//}

