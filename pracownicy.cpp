#include <iostream>
#include <string>
#include "pracownicy.h"

using namespace std;

//Pracownik

Pracownik::Pracownik(string Imie, string Nazwisko, int Nip, int Pesel)
{
	cout << "Podaj imie:" << endl;
	cin >> Imie;
	cout << "Podaj nazwisko:" << endl;
	cin >> Nazwisko;
	cout << "Podaj NIP" << endl;
	cin >> Nip;
	cout << "Podaj pesel:" << endl;
	cin >> Pesel;

	imie = Imie;
	nazwisko = Nazwisko;
	nip = Nip;
	pesel = Pesel;

}

void Pracownik::print()
{
	cout << "Dane pracownika :" << endl << imie << endl << nazwisko << endl << nip << endl << pesel << endl << pensja << endl;
}


//Funkcje dla pracownika na umowie stalej



void Pracownik_stala::oblicz_zarobki()
{
	pensja = 1200;

}

void Pracownik_stala::print()
{

	Pracownik::print();

}



//Funkcje dla pracownika na umowie zlecenie



void Pracownik_zlecenie::oblicz_zarobki()
{

	if (ilosc_godzin >= 40)
		pensja = 10 * 40 + (ilosc_godzin - 40) * 15;
	else pensja = ilosc_godzin * 10;
}


void Pracownik_zlecenie::print()
{
	Pracownik::print();

}


//Funkcje dla handlowca


void Pracownik_handlowiec::oblicz_zarobki()
{
	pensja = 2*zarobek;
}

void Pracownik_handlowiec::print()
{
	Pracownik::print();

}