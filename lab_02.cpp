

#include <iostream>
using namespace std;

int main()
{//--------------Zadanie 1----------------------
	/*


		float a, b;

		cout << "Podaj a: ", cin >> a;
		cout << "Podaj b: ", cin >> b;

		if (a == 0) {
			if (b == 0)
				cout << "rownanie tozsamosciowe\n";
			else cout << "rownanie sprzeczne\n";
	}
		else {
			cout << "x = " << -b / a;
		}
		*/
	//--------------Zadanie 2+3----------------------------
		/*

			float a, b, c, delta;

			cout << "Podaj a: ", cin >> a;
			cout << "Podaj b: ", cin >> b;
			cout << "Podaj c: ", cin >> c;

			if (a != 0) {
				//rownanie kwadratowe
				delta = (b * b) - (4 * a * c);

				if (delta == 0) {
					cout << "jedno rozwiązanie, x1 = " << -b / (2 * a) << endl;
				}
				else if (delta > 0) {
					cout << "dwa rozwiazania: \n";
					cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
					cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
				}
				else cout << "Brak rozwiazan\n";


			}
			else {



				if (b == 0) {
					if (c == 0)
						cout << "rownanie tozsamosciowe\n";
					else cout << "rownanie sprzeczne\n";
				}
				else {
					cout << "x = " << -c / b;
				}



			}
			*/
	//---------------Zadanie 4-------------------------
			/*
		{

			float a, b, c, x;
			cout << "Podaj x: "; cin >> x;
			if (x > 0) cout << "\na = " << (2 * x);

			else if (x == 0) cout << "\na = 0";
			else  cout << "\na = " <<((-3)*x);

			if (x >= 1) cout << "\nb = "<< (x*x);
			else  cout << "\nb = "<< x;

			if (x > 2) cout << "\nc = " <<(2 + x);
			else if (x == 2) cout << "\nc = 8";
			else  cout << "\nc = "<<(x-4);

		}
		*/
	//-----------------Zadanie 5------------------------
		/*
		{


			float a, b, c;
			cout << "Podaj pierwsza liczbe: "; cin >> a;
			cout << "Podaj druga liczbe: "; cin >> b;
			cout << "Podaj trzecia liczbe: "; cin >> c;

			if (a > b)
			{
				if (a > c) {
					if (b > c) cout << c << b << a;
					else if (c > b) cout << b << c << a;
				}
				else if (a<c) cout << b << a << c;
			}
			if (a < b) {
				if (b < c) cout << a << b << c;
				else if (c > a && c < b) cout << a << c << b;
				else if (a>c) cout << c << a << b;
			}




			if (a == b && a == c) cout<<"liczby są równe\n" << a << b << c;
			if (a == b) {
				if (a > c)cout << c << b << a;
				else cout << a << b << c;

			}
			if (a == c) {
				if (a > b)cout << b << a << c;
				else cout << a << c << b;

			}
			if (c == b) {
				if (c > a)cout << a << b << c;
				else cout << c << b << a;

			}
		}



	}
	*/
//-------------------Zadanie 6----------------------
	/*
	int a,b ;

	cout << "Czy pada deszcz?\n1.Pada\n2. Nie pada\nWpisz 1 lub 2.\n"; cin >> a;

	cout << "Czy autobus jest na przystanku?\n1.Jest\n2.Nie ma\nWpisz 1 lub 2.\n"; cin >> b;

	if (b == 1 && a == 1) cout << "Wez parasol, dostaniesz sie na uczelnie.";
		else if (b == 1 && a == 2) cout << "Dostaniesz sie na uczelnie, milego dnia i pieknej pogody.";
	if (b != 1) cout << "Nie dostaniesz sie na uczelnie.";


	}
	*/
	//--------------------Zadanie 7----------------------

int a, b;
cout << "Czy jest znizka na samochod?\n1.Jest\n2. Nie ma\nWpisz 1 lub 2.\n"; cin >> a;

cout << "Czy dostales premie?\n1.Dostalem\n2.Nie dostalem\nWpisz 1 lub 2.\n"; cin >> b;

bool premia = (b == 1); bool znizka = (a == 1);

if (!premia|| znizka) cout << "Mozesz kupic samochod! Znizki na samochod nie ma. ";
if (!premia || !znizka) cout << "Zakup samochodu trzeba odlozyc na pozniej..., Znizki na samochod nie ma. ";
if (premia || znizka) cout << "Mozesz kupic samochod! ";

}