#include <cstdlib>
#include <iostream>
using namespace std;

//-----Zadanie 1-----
//void zamien(int a)
//{
//    if (a == 0)return;
//    zamien(a / 2);
//    cout << a % 2;
//}
//int main()
//{
//    int a;
//    cout << "Podaj liczbe naturalna: ";
//    cin >> a;
//    cout << "Postac dwojkowa liczby " << a << ": ";
//    if (a == 0)
//        cout << 0;
//    else
//        zamien(a);
//
//    cout << endl;
//
//    return 0;
//}
//-----Zadanie 2------
//int NWD(int a, int b)
//{
//    if (a != b)
//        return NWD(a > b ? a - b : a, b > a ? b - a : b);
//    return a;
//}
//
//int main()
//{
//    int a, b;
//
//    cout << "Podaj pierwsza liczbe: ";
//    cin >> a;
//
//    cout << "Podaj druga liczbe: ";
//    cin >> b;
//
//    cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;
//
//    return 0;
//}
//------Zadanie 3-------
//int fib(int a)
//{
//	if (a == 0)
//		return 0;
//	else if (a == 1)
//		return 1;
//
//	return fib(a - 2) + fib(a - 1);
//}
//
//int main()
//{
//
//	int a;
//
//	cout << "Podaj numer wyrazu ciagu fibonacciego: ";
//	cin >> a;
//
//	cout << a << " wyraz ciagu fibonacciego ma wartosc " << fib(a) << endl;
//
//	return 0;
//}
//-----Zadanie 4------
//long long silnia(int a)
//{
//    if (a < 2)
//        return 1; 
//
//    return a * silnia(a - 1); 
//}
//
//int main()
//{
//    int a;
//
//    cout << "Podaj liczbe: ";
//    cin >> a;
//    cout << a <<"! wynosi: " << silnia(a) << endl;
//
//    
//    return 0;
//}
//-----Zadanie 5-----
double ciag(int a)
{
	if (a == 1)
		return 0;
	if (a == 2)
		return 0.5;

	return -ciag(a - 1) * ciag(a - 2);
}

int main()
{
	int a;

	cout << "Podaj numer wyrazu ciagu: ";
	cin >> a;
	cout << a << " wyraz ciagu ma wartosc " << ciag(a) << endl;

	return 0;
}