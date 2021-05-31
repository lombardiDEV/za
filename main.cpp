#include <iostream>
#include <fstream>
using namespace std;

string login,haslo, kategoria;
int wiek;

int main()
{
    cout << "                                                    Witaj" << endl;
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

     if ((login=="lombardi")&&(haslo=="lombardi69"))
    {
        cout << "Udalo sie zalogowac " << endl;
    }
    else
    {
        cout << "Nie udalo sie zalogowac " << endl;
    }

    cout << "Ile masz lat: ";
    cin >> wiek;
    if (wiek>=18) 

    fstream plik;
    plik.open("dane.txt",iso::out);

    plik<<login<<endl;
    plik<<haslo<<endl;
    plik<<wiek<<endl;
    plik<<kategoria<<endl;

    plik.close();

    return 0;
}
