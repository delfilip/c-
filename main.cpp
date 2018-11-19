#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;

void wypozyczenie()
{
    string ksiazka;
    fstream plik;
    string linia;
    string imieNazwisko;
    int dostepnosc=0;
    cout << "Kto chce wypozyczyc ksiazke?" << endl;
    cout << "Podaj imie i nazwisko:(bez spacji)" << endl;
    ofstream uczen;
    cin >> imieNazwisko;
    uczen.open(imieNazwisko.c_str(), ios::app);
    cout << "Uczen zapisany." << endl;
    cout << "______________________" << endl;
    cout << "Jaka to ma byc ksiazka?" << endl;
    cin >> ksiazka;
    plik.open("zbior.txt",ios::in);
    while (getline (plik,linia))
    {
        if (ksiazka==linia)
        {
            dostepnosc++;
        }

    }
    if (dostepnosc>=1)
    {
        cout << "Ksiazka jest dostepna i zostala wypozyczona." << endl;
        uczen << ksiazka <<endl;
    }
    else
    {
        cout << "Niestety, ksiazka nie jest dostepna." << endl;
        exit(0);
    }
    uczen.close();

}

void ksiazki()
{
    fstream plik;
    string linia;
    plik.open("zbior.txt",ios::in);
    if(plik.good()==false)
    {
        cout << " nie ma takiego pliku!!";
        exit(0);
    }
    while (getline (plik,linia))
    {
        cout << linia << endl;
    }
}

void zwrot()
{
    ifstream uczen;
    string imieNazwisko;
    string ksiazka;
    string linia;
    cout << "Kto chce oddac ksiazke?" << endl;
    cout << "Podaj imie i nazwisko:(bez spacji)" << endl;
    cin >> imieNazwisko;
    uczen.open(imieNazwisko.c_str(), ios::in);
    ofstream nowy;
    int czyWypozyczyl=0;
    nowy.open("nowy.txt");
    if(uczen.good()==false)
    {
        cout << " nie ma takiego pliku!!";
        exit(0);
    }
    cout << "Jaka to ma byc ksiazka?" << endl;
    cin >> ksiazka;
    while (getline(uczen,linia))
    {
        linia.replace(linia.find(ksiazka),ksiazka.length(),"");
        nowy << linia << endl;
    }


    uczen.close();
    nowy.close();
    remove(imieNazwisko.c_str());
    rename("nowy.txt",imieNazwisko.c_str());
}

void ksiazkiWypozyczone()
{
    ifstream uczen;
    string imieNazwisko;
    string linia;
    cout << "Podaj imie i nazwisko:(bez spacji)" << endl;
    cin >> imieNazwisko;
    uczen.open(imieNazwisko.c_str(), ios::in);
    if(uczen.good()==false)
    {
        cout << " nie ma takiego pliku!!";
        exit(0);
    }
    while (getline(uczen,linia))
    {
        cout << linia << endl;
    }
    cout << "__________" << endl;
}

int main()
{
    int wybor;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout << "BIBLIOTEKA SZKOLNA" << endl;
    cout << "Wybierz opcje:" << endl;
    cout << "1. Wypozyczenie ksiazki" << endl;
    cout << "2. Zwrot ksiazki" << endl;
    cout << "3. Dostepne ksiazki" << endl;
    cout << "4. Wypozyczone ksiazki przez ucznia" << endl;
    cout << "5. Wyjdz z programu." << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    do
    {
    cin >> wybor;
    switch (wybor)
    {
    case 1:
    {
        cout << "___________________" << endl;
        wypozyczenie();
        break;
    }
    case 2:
    {
        cout << "___________________" << endl;
        zwrot();
        break;
    }
    case 3:
    {
        cout << "___________________" << endl;
        cout << "O to dostepne ksiazki:" << endl;
        ksiazki();
        break;
    }
    case 4:
    {
        cout << "___________________" << endl;
        ksiazkiWypozyczone();
        break;
    }
    case 5:
    {
        cout << "___________________" << endl;
        exit(0);
    }
    }
    }
    while (wybor != 5);

    return 0;
}
