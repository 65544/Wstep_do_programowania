

#include <iostream>
#include<string>
using namespace std;
int main()
{
	/*------ - Zadanie 1 ------------*/
		//size da w pierwszym 4 a w drugim da 3
		/*-------- - Zadanie 2 --------------*/
		//Nie jest poprawne bo int liczby[100]
		/*------ - Zadanie 3------ -*/

		//char tab[] = "wiosna";
		//cout << size(tab);

/*------ - Zadanie 4--------*/


	//char tab[100];
	//char tab1[100];
	//cin.getline(tab, 50);
	//cin.getline(tab1, 50);
	//
	//strcpy_s(tab, tab1);
	//

	//strcat_s(tab, tab1);
	//cout << tab;

	//cout << size(tab);


/*------Zadanie 5 -------- * /
	//char ulica[100];
	//char nrdomu[100];
	//int umprog;
	//char staz[50];


	//cout << "Podaj nazwe ulicy na ktorej mieszkasz : ";
	//cin.getline(ulica, 100);

	//cout << "Podaj nr domu : ";
	//cin.getline(nrdomu, 100);
	//cout << "Na ile oceniasz swoje umiejetnosci programowania w skali[2 - 5] : ";
	//cin >> umprog; // 5\0
	//cin.get();
	//cout << "Twoj staz programistyczny : ";
	//cin.getline(staz, 50);
	//cout << endl;
	//cout << "Adres : " << ulica << " " << nrdomu << endl;
	//
	//
	//if (umprog = 2)
	//	cout << "Ocena : " << umprog << endl;
	//else
	//cout << "Ocena : " << (umprog - 1) << endl;
	//
	//
	//cout << "Staz : " << staz << endl;

	/*--------Zadanie 6 --------*/

	char tekst[150];
	int samo, spol, cyfry ;

	samo = spol = cyfry  = 0;

	cout << "Wpisz swoj tekst: ";
	cin.getline(tekst, 150);
	for (int i = 0; tekst[i] != '\0'; ++i)
	{
		if (tekst[i] == 'a' || tekst[i] == 'e' || tekst[i] == 'i' ||
			tekst[i] == 'o' || tekst[i] == 'u' || tekst[i] == 'A' ||
			tekst[i] == 'E' || tekst[i] == 'I' || tekst[i] == 'O' ||
			tekst[i] == 'U' || tekst[i] == 'y' || tekst[i] == 'Y')
		{
			++samo;
		}
		else if ((tekst[i] >= 'a' && tekst[i] <= 'z') || (tekst[i] >= 'A' && tekst[i] <= 'Z'))
		{
			++spol;
		}
		else if (tekst[i] >= '0' && tekst[i] <= '9')
		{
			++cyfry;
		}

	}

	cout << "Samogloski: " << samo << endl;
	cout << "Spolgloski: " << spol << endl;
	cout << "Cyfry: " << cyfry << endl;
	



}

