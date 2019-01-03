#include <iostream>
#include <vector>
#include<fstream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <stdio.h>
using namespace std;

class Auto
{
public:
	string marka;
	string model;
	int rocznik;
	string nazwiskoWlasciciela;
	int cena;


	void przeladuj(vector<Auto> &auta, fstream &plik)
	{
		Auto dane;
		plik.open("Samochody.txt", ios::in);
		if (plik.good() == false) cout << "Nie ma takiego pliku!" << endl;
		string linia;
		int nr_linii = 1;
		while (getline(plik, linia))
		{
			if (nr_linii == 1) dane.marka = linia;
			if (nr_linii == 2) dane.model = linia;
			if (nr_linii == 3) dane.rocznik = atoi(linia.c_str());
			if (nr_linii == 4) dane.nazwiskoWlasciciela = linia;
			if (nr_linii == 5) {
				dane.cena = atoi(linia.c_str());
				nr_linii = 0;
				auta.push_back(dane);
			}
			nr_linii++;


		}
		plik.close();

	}
};
void dostepne(vector<Auto> &auta)
{
	for (int i = 0; i < auta.size(); i++)
	{
		cout << auta[i].marka << " " << auta[i].model << " rocznik: " << auta[i].rocznik << ", cena: " << auta[i].cena << ", wlasciciel: P." << auta[i].nazwiskoWlasciciela << endl;
	}
}
void dodajDoBazy(Auto &dane, fstream &plik)
{

	plik.open("Samochody.txt", ios::app);
	cout << "Podaj marke samochodu:" << endl;
	cin >> dane.marka;
	plik << dane.marka << endl;
	cout << "Podaj model samochodu" << endl;
	cin >> dane.model;
	plik << dane.model << endl;
	cout << "Podaj rocznik samochodu" << endl;
	cin >> dane.rocznik;
	plik << dane.rocznik << endl;
	cout << "Podaj nazwisko wlasciciela" << endl;
	cin >> dane.nazwiskoWlasciciela;
	plik << dane.nazwiskoWlasciciela << endl;
	cout << "Podaj cene samochodu" << endl;
	cin >> dane.cena;
	plik << dane.cena << endl;
	plik.close();
}

void wyszukiwarka(vector<Auto> auta)
{
	int gornaGranica, dolnaGranica, wiek;
	string szukanaMarka, szukanyModel;
		cout << "Podaj marke, ktorej poszukujesz:" << endl;
		cin >> szukanaMarka;
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << endl;
		cout << "Podaj model" << endl;
		cin >> szukanyModel;
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << endl;
		cout << "Ilu-letni maksymalnie moze byc samochod?" << endl;
		cin >> wiek;
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << endl;
		cout << "Podaj gorna granice ceny" << endl;
		cin >> gornaGranica;
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << endl;
	cout << "Szukam";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << "." << endl;
	cout << "O to znalezione samochody:" << endl;
	for (int i = 0; i < auta.size(); i++)
	{
		if ((auta[i].marka == szukanaMarka) && (auta[i].model == szukanyModel) && (auta[i].cena < gornaGranica) 
			&& (auta[i].rocznik >= 2019-wiek))
		{
			cout << auta[i].marka << " " << auta[i].model << ", cena " << auta[i].cena << " rocznik " << auta[i].rocznik << endl;
		}

	}
}

void usunAuto(vector<Auto> &auta, fstream &nowy)
{
	string markaDoUsuniecia;
	string takLubNie;
	int licznik = 0;
	cout << "Jaki samochod chcesz usunac?" << endl;
	cout << "Podaj marke samochodu" << endl;
	cin >> markaDoUsuniecia;
	for (int i = 0; i < auta.size(); i++)
	{
		if (markaDoUsuniecia == auta[i].marka)
		{
			cout << "To ten samochod?" << endl;
			cout << "Model:" << auta[i].model << endl;
			cout << "Rocznik:" << auta[i].rocznik << endl;
			cout << "Nazwisko wlasciciela:" << auta[i].nazwiskoWlasciciela << endl;
			cout << "Cena:" << auta[i].cena << endl;
			cin >> takLubNie;
			if (takLubNie == "tak")
			{
				auta.erase(auta.begin() + i);
				cout << "Auto usuniete." << endl;
			}
		}
	}
	remove("Samochody.txt");
	nowy.open("Samochody.txt", ios::app);
	for (int i = 0; i < auta.size(); i++)
	{
		nowy << auta[i].marka << endl;
		nowy << auta[i].model << endl;
		nowy << auta[i].rocznik << endl;
		nowy << auta[i].nazwiskoWlasciciela << endl;
		nowy << auta[i].cena << endl;
	}
	nowy.close();


}
void wiecejInfo(vector<Auto> auta)
{
	string podanaMarka;
	cout << "Podaj marke samochodu, ktory cie interesuje:" << endl;
	cin >> podanaMarka;
	cout << "Podaj model samochodu, ktory cie interesuje:" << endl;
}


int main()
{
	Auto dane;
	int wybor;
	vector<Auto> auta;
	fstream plik;
	dane.przeladuj(auta, plik);
	cout << "AUTO-KOMIS" << endl;
	cout << "1. Wyswietl wszystkie dostepne auta" << endl;
	cout << "2. Szukaj w bazie..." << endl;
	cout << "3. Dodaj dane do bazy" << endl;
	cout << "4. Usun auto z bazy" << endl;
	cout << "5. Wyjdz z programu" << endl;
	cout << "6. Wyczysc ekran" << endl;
	do {
		cin >> wybor;
		switch (wybor)
		{
		case 1:
		{
			cout << "Obecna ilosc aut:" << auta.size() << endl;
			dostepne(auta);
			break;
		}
		case 2:
		{
			wyszukiwarka(auta);
			break;
		}
		case 3:
		{
			auta.clear();
			dodajDoBazy(dane, plik);
			dane.przeladuj(auta, plik);
			break;
		}
		case 4:
		{
			fstream nowy;
			usunAuto(auta, nowy);
			break;
		}
		case 5:
		{
			exit(0);
			break;
		}
		case 6:
		{
			system("CLS");
			cout << "AUTO-KOMIS" << endl;
			cout << "1. Wyswietl wszystkie dostepne auta" << endl;
			cout << "2. Szukaj w bazie..." << endl;
			cout << "3. Dodaj dane do bazy" << endl;
			cout << "4. Usun auto z bazy" << endl;
			cout << "5. Wyjdz z programu" << endl;
			cout << "6. Wyczysc ekran" << endl;
	
			break;
		}
		}

	} while (wybor != 5);
	return 0;
}

