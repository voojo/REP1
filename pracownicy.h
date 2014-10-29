#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class Pracownik
{
private:
	string imie;
	string nazwisko;
	int nip;
	int pesel;
protected:
	int pensja;

public:
	Pracownik(){}
	Pracownik(string Imie, string Nazwisko, int Nip, int Pesel);
	virtual void oblicz_zarobki() = 0;
	virtual void print();
	virtual ~Pracownik(){}

};


class Pracownik_stala :public Pracownik
{
	int pensja;

public:
	Pracownik_stala(){}
	Pracownik_stala(string Imie, string Nazwisko, int Nip, int Pesel, int Pensja) :
		Pracownik(Imie, Nazwisko, Pesel, Nip)
	{
		pensja = Pensja;
	}
	virtual void oblicz_zarobki();
	virtual void print();
	~Pracownik_stala(){}
};

class Pracownik_zlecenie :public Pracownik
{
	int ilosc_godzin;

public:
	Pracownik_zlecenie(){}
	Pracownik_zlecenie(string Imie, string Nazwisko, int Nip, int Pesel, int Ilosc_godzin,int Pensja) :
		Pracownik(Imie, Nazwisko, Nip, Pesel)
	{
		cout << "Podaj ilosc przepracowanych godzin:" << endl;
		cin >> Ilosc_godzin;

		ilosc_godzin = Ilosc_godzin;
		pensja = Pensja;
	}
	virtual void oblicz_zarobki();
	virtual void print();
	~Pracownik_zlecenie(){}
};




class Pracownik_handlowiec :public Pracownik
{
	int zarobek;

public:
	Pracownik_handlowiec(){}
	Pracownik_handlowiec(string Imie, string Nazwisko, int Nip, int Pesel, int Zarobek,int Pensja) :
		Pracownik(Imie, Nazwisko, Nip, Pesel)
	{
		cout << "Podaj zgromadzony zysk ze sprzedazy:" << endl;

		cin >> zarobek;

		zarobek = Zarobek;
		pensja = Pensja;
	}
	virtual void oblicz_zarobki();
	virtual void print();
	~Pracownik_handlowiec(){}
};