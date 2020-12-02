#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include "PTP prvky.h"
#include "pismena.h"

using namespace std;


int main()
{
    while(cislo == 1){
    system("color 74");
    system("cls");
    cout << "______________________________________________________________________________________________________________________\n";
    cout << " __  _____   __\n";
    cout << "|  |   |    |  |\n";
    cout << "|__|   |    |__|\n";
    cout << "|      |    |\n";
    cout << "|      |    |\n\n";
    cout << "Vituv PTP sifry prekladac!\nVsunovaci radek neumi \nMusite rucne vypnout\n 1 pro pokracovani 2 pro info" << endl;
    cout << "______________________________________________________________________________________________________________________\n\n";
    int prikaz;
    cin >> prikaz;
    switch(prikaz){
        case 1:
            {prekladani_pismena();
            cout << "\nZadejte jakekoliv tlacitko pro pokracovani";
            getch();
            break;}
        case 2:
            {AppInfo();
            cout << "\nZadejte jakekoliv tlacitko pro pokracovani";
            getch();
            break;}
        default:
            {cout << "\nneplatne cislo";
            getch();
            break;}
    }
    }
    return 0;
}

