#include <iostream>
#include <string>
#include "pracownicy.h"
#include <vector>

using namespace std;

void add(vector<Pracownik*> &wektor)
{
	int znak;
	cout << "Podaj na jaki typ umowy bedzie zatrudniona osoba : " << endl << "1-umowa na stale" << endl << "2-umowa zlecenie" << endl << "3-umowa dla pracownika typu handlowiec" << endl;
	znak = cin.get();
	switch (znak)
	{
	case 1:
		Pracownik_stala* pracownikStala = new Pracownik_stala();
		wektor.push_back(pracownikStala);
		

		break;

	case 3:
		Pracownik_handlowiec* pracownikHandlowiec = new Pracownik_handlowiec();
		wektor.push_back(pracownikHandlowiec);
		(*wektor.back()).oblicz_zarobki();
		break;

	case 2:

		Pracownik_zlecenie* pracownikZlecenie = new Pracownik_zlecenie();
		wektor.push_back(pracownikZlecenie);
		(*wektor.back()).oblicz_zarobki();
		break;

	}


}
void show(vector<Pracownik*> &wektor)
{
	int temp;
	int i;
	for (i = 0; i < wektor.size(); i++)
	{
		cout << "pracownik numer : " << i + 1 << endl;
		(*wektor[i]).print();
		cout << endl;
	}
}


int main()
{
	int i = 0;
	int n = 0;
	int znakmenu;
	vector<Pracownik*> wektor;

	do
	{


		cout << "Co chcesz zrobiæ ? " << endl << "1-dodaj pracownika" << endl << "2-wyswietl pracownikow" << endl << "3-wyjscie" << endl;
		znakmenu = cin.get();
		switch (znakmenu)
		{
		case 1:
			add(wektor);
			break;

		case 2:
			show(wektor);
			break;
		}

	} while (znakmenu == '3');

	system("PAUSE");
	return 0;
}