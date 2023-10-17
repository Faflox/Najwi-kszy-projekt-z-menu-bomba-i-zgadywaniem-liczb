#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>

using namespace std;

string login, haslo, PIN;
float x, y;
int liczba, proba, ile_prob = 0;
char wybor;

int main()
{
    cout << "podaj login:";
    cin >> login;

    cout << "podaj haslo:";
    cin >> haslo;

    if ((login == "admin") && (haslo == "admin"))
    {
        cout << "udalo sie zalogowac";
        Sleep(1000);
        system("cls");
        cout << "MENU GLOWNE" << endl;
        cout << "--------------" << endl;
        cout << "1. Odpalenie bomby" << endl;
        cout << "2. Zgadywanie liczb" << endl;
        cout << "3. Zamknij program" << endl;
        cout << "Wybierz: ";
        wybor = _getch();
        switch (wybor)
        {
        case '1':
            cout << "czy chcesz aktywowac bombe?" << endl;
            cout << "podaj nr. aktywacji bomby:" << endl;
            cin >> PIN;

            if (PIN == "1337")
            {
                cout << "Poprawny nr. aktywacji bomby" << endl;
                Sleep(500);
                cout << "Rozpoczynam procedure odliczania...";
                Sleep(1000);
                system("cls");

                for (int i = 10; i >= 0; i--)
                {
                    Sleep(500);
                    system("cls");
                    cout << i;
                }
                system("cls");
                cout << "Wybuchlo";
            }
            else
            {
                cout << "Niepoprawny nr.";
            }
            break;
        case '2':
            cout << "Zgadnij moja liczba z zakresu od 1 do 100 albo zgin" << endl;
            srand(time(NULL));
            liczba = rand() % 100 + 1;
            Sleep(2000);
            system("cls");

            while (proba != liczba)
            {
                ile_prob++;

                cout << "Zgadnij liczbe: ";
                cin >> proba;

                if (proba < liczba)

                    cout << "Podaj wieksza liczbe" << endl;

                else if (proba > liczba)

                    cout << "Podaj mniejsza liczbe" << endl;

                else if (proba == liczba)
                    cout << "Gratualcje!!!, twoja odpowiedz: ", cout << proba, cout << " jest poprawna" << endl, cout << "Udalo ci sie odgadnac odpowiedz w : " << ile_prob << " probie" << endl;
            }
            break;
        case '3':
            exit(0);
             break;

        default: cout << "Nie ma takiej opcji w menu!";
        }
    }
    else
        cout << "zlodziej!!!!!!!";
    return 0;
}
