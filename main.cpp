#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int sloupec;
int perioda;
int cislo = 1;
string PTP[7][18] = {{"H", "He"},
{"Li", "Be", "B", "C", "N", "O", "F", "Ne"},
{"Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar"},
{"K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr"},
{"Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe"},
{"Cs", "Ba", "Lu", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pp", "Pi", "Po", "Ht", "Rn"},
{"Fr", "Ra", "Lr", "Rf", "Db", "Sg", "Bh", "Hs"}};
float EleNeg[7][18] = {{2.2, 0},
{0.98, 1.57, 2.04, 2.55, 3.04, 3.44, 3.98, 4},
{0.93, 1.31, 1.61, 1.9, 2.19, 2.58, 3.16, 3.9},
{0.82, 1, 1.36, 1.54, 1.63, 1.66, 1.55, 1.83, 1.88, 1.91, 1.95, 1.65, 1.81, 2.01, 2.18, 2.55, 2.96, 3},
{0.82, 0.95, 1.22, 1.33, 1.6, 2.16, 1.9, 2.2, 2.28, 2.2, 1.93, 1.69, 1.78, 1.96, 2.05, 2.1, 2.66, 2.6},
{0.79, 0.89, 1.27, 1.3, 1.5, 2.36, 1.9, 2.2, 2.2, 2.28, 2.54, 2, 1.62, 0, 0, 2, 0, 2.2},
{0.79, 0.89, 1.3, 0, 0, 0, 0, 0}};

void AppInfo();
void prekladani_pismena(){
    cout << "zadejte periodu 0 az 6 (posunuto o 1) \n";
    cin >> perioda;
    switch(perioda){
    case 0:
        cout << "\nDostupne sloupce: 0, 1\n";
        break;
    case 1:
        cout << "\nDostupne sloupce: 0 az 7\n";
        break;
    case 2:
        cout << "\nDostupne sloupce: 0 az 7\n";
        break;
    case 3:
        cout << "\nDostupne sloupce: 0 az 17\n";
        break;
    case 4:
        cout << "\nDostupne sloupce: 0 az 17\n";
        break;
    case 5:
        cout << "\nDostupne sloupce: 0 az 17\n";
        break;
    case 6:
        cout << "\nDostupne sloupce: 0 az 7\n";
        break;
    default:
        cout << "\nNeplatne :(\n";

    }

    cout << "zadejte sloupec 0 az 17(posunuto o 1)  u period, ktere nemaji tolik sloupcu \nzadejte sloupec z leva(triada 8, 9, 10 je rozdelena) \n";
    cin >> sloupec;
    cout << "\nPrvek: " << PTP[perioda][sloupec] << "\n";
    cout << "Elektronegativita: " << EleNeg[perioda][sloupec] << "\n";
    }




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

void AppInfo(){
cout << "\nO aplikaci:\n" << "Nazev: Prekladac PTP\n" << "Autor: Mitas Vit\n" << "Konstakt: mitas.vit@gmail.com\n" << "Licence: GNU 3.0\n";
cout << "Verze: 0.2\n" << "Novinky od verze 0.1: Elektronegativita, opraveni chyb\nDalsi: viz. prekladac ptp.exe -> vlastnosti\n";
cout << "Jej";
cout << "bruh;ff";
}
