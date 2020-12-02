#include <iostream>

using namespace std;


/*       -----------------------------------    PROMENE A POLE   -----------------------------------------------------     */


int sloupec;
int perioda;
int cislo = 1;
string PTP[7][18] = {{"H", "He"},
{"Li", "Be", "B", "C", "N", "O", "F", "Ne"},
{"Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar"},
{"K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr"},
{"Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe"},
{"Cs", "Ba", "Lu", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn"},
{"Fr", "Ra", "Lr", "Rf", "Db", "Sg", "Bh", "Hs"}};
float EleNeg[7][18] = {{2.2, 0},
{0.98, 1.57, 2.04, 2.55, 3.04, 3.44, 3.98, 4},
{0.93, 1.31, 1.61, 1.9, 2.19, 2.58, 3.16, 3.9},
{0.82, 1, 1.36, 1.54, 1.63, 1.66, 1.55, 1.83, 1.88, 1.91, 1.95, 1.65, 1.81, 2.01, 2.18, 2.55, 2.96, 3},
{0.82, 0.95, 1.22, 1.33, 1.6, 2.16, 1.9, 2.2, 2.28, 2.2, 1.93, 1.69, 1.78, 1.96, 2.05, 2.1, 2.66, 2.6},
{0.79, 0.89, 1.27, 1.3, 1.5, 2.36, 1.9, 2.2, 2.2, 2.28, 2.54, 2, 1.62, 1.88, 2.02, 2, 2.2, 2.2},
{0.79, 0.89, 1.3, 0, 0, 0, 0, 0}};



/*       -----------------------------------    FUNKCE   -----------------------------------------------------     */



void AppInfo(){
cout << "\nO aplikaci:\n" << "Nazev: Prekladac PTP\n" << "Autor: Mitas Vit\n" << "Konstakt: mitas.vit@gmail.com\n" << "Licence: GNU 3.0\n";
cout << "Verze: 0.2\n" << "Novinky od verze 0.1: Elektronegativita, opraveni chyb\nDalsi: viz. prekladac ptp.exe -> vlastnosti\n";
}
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



/*       -----------------------------------    PRVKY   -----------------------------------------------------     */



/*PRVNI PERIODA*/
#define PR_VODIK "H"
#define PR_VODIKp 1
#define PR_HELIUM "He"
#define PR_HELIUMp 2
/*DRUHA PERIODA*/
#define PR_LITHIUM "Li"
#define PR_LITHIUMp 3
#define PR_BERYLLIUM "Be"
#define PR_BERYLLIUMp 4
#define PR_BOR "B"
#define PR_BORp 5
#define PR_UHLIK "C"
#define PR_UHLIKp 6
#define PR_DUSIK "N"
#define PR_DUSIKp 7
#define PR_KYSLIK "O"
#define PR_KYSLIKp 8
#define PR_FLUOR "F"
#define PR_FLOURp 9
#define PR_NEON "Ne"
#define PR_NEONp 10
/*TRETI PERIODA*/
#define PR_SODIK "Na"
#define PR_SODIKp 11
#define PR_HORCIK "Mg"
#define PR_HORCIKp 12
#define PR_HLINIK "Al"
#define PR_HLINIKp 13
#define PR_KREMIK "Si"
#define PR_KREMIKp 14
#define PR_FOSFOR "P"
#define PR_FOSFORp 15
#define PR_SIRA "S"
#define PR_SIRAp 16
#define PR_CHLOR "Cl"
#define PR_CHLORP 17
#define PR_ARGON "Ar"
#define PR_ARGONp 18
/*CTVRTA PERODA*/
#define PR_DRASLIK "K"
#define PR_DRASLIKp 19
#define PR_VAPNIK "Ca"
#define PR_VAPNIKp 20
#define PR_SKANDIUM "Sc"
#define PR_SKANDIUMp 21
#define PR_TITAN "Ti"
#define PR_TITANp 22
#define PR_VANAD "V"
#define PR_VANADp 23
#define PR_CHROM "Cr"
#define PR_CHROMp 24
#define PR_MANGAN "Mn"
#define PR_MANGANp 25
#define PR_ZELEZO "Fe"
#define PR_ZELEZOp 26
#define PR_KOBALT "Co"
#define PR_KOBALTp 27
#define PR_NIKL "Ni"
#define PR_NIKLp 28
#define PR_MED "Cu"
#define PR_MEDp 29
#define PR_ZINEK "Zn"
#define PR_ZINEKp 30
#define PR_GALLIUM "Ga"
#define PR_GALLIUMp 31
#define PR_GERMANIUM "Ge"
#define PR_GERMANIUMp 32
#define PR_ARSEN "As"
#define PR_ARSENp 33
#define PR_SELEN "Se"
#define PR_SELENp 34
#define PR_BROM "Br"
#define PR_BROMp 35
#define PR_KRYPTON "Kr"
#define PR_KRYPTONp 36
/*PATA PERIODA*/
#define PR_RUBIDIUM "Rb"
#define PR_RUBIDIUMp 37
#define PR_STRONCIUM "Sr"
#define PR_STRONCIUMp 38
#define PR_YTTRIUM "Y"
#define PR_YTTRIUMp 39
#define PR_ZIRKONIUM "Zr"
#define PR_ZIRKONIUMp 40
#define PR_NIOB "Nb"
#define PR_NIOBp 41
#define PR_MOLYBDEN "Mo"
#define PR_MOLYBDENp 42
#define PR_TECHNICIUM "Tc"
#define PR_TECHNICIUMp 43
#define PR_RUTHENIUM "Ru"
#define PR_RUTHENIUMp 44
#define PR_RHODIUM "Rh"
#define PR_RHODIUMp 45
#define PR_PALLADIUM "Pd"
#define PR_PALLADIUMp 46
#define PR_STRIBRO "Ag"
#define PR_STRIBROp 47
#define PR_KADMIUM "Cd"
#define PR_KADNIUMp 48
#define PR_INDIUM "In"
#define PR_INDIUMp 49
#define PR_CIN "Sn"
#define PR_CINp 50
#define PR_ANTIMON "Sb"
#define PR_ANTIMONp 51
#define PR_TELLUR "Te"
#define PR_TELLURp 52
#define PR_JOD "I"
#define PR_JODp 53
#define PR_XENON "Xe"
#define PR_XENONp 54
/*SESTA PERIODA*/
#define PR_CESIUM "Cs"
#define PR_CESIUMp 55
#define PR_BARIUM "Ba"
#define PR_BARIUMp 56
#define PR_LUTECIUM "Lu"
#define PR_LUTECIUMp 71
#define PR_HAFNIUM "Hf"
#define PR_HAFNIUMp 72
#define PR_TANTAL "Ta"
#define PR_TANTALp 73
#define PR_WOLFRAM "W"
#define PR_WOLFRAMp 74
#define PR_RHENIUM "Re"
#define PR_RHENIUMp 75
#define PR_OSMIUM "Os"
#define PR_OSMIUMp 76
#define PR_IRIDIUM "Ir"
#define PR_IRIDIUMp 77
#define PR_PLATINA "Pt"
#define PR_PLATINAp 78
#define PR_ZLATO "Au"
#define PR_ZLATOp 79
#define PR_RTUT "Hg"
#define PR_RTUTp 80
#define PR_THALLIUM "Tl"
#define PR_THALLIUMp 81
#define PR_OLOVO "Pb"
#define PR_OLOVOp 82
#define PR_BISMUT "Bi"
#define PR_BISMUTp 83
#define PR_POLONIUM "Po"
#define PR_POLONIUMp 84
#define PR_ASTAT "At"
#define PR_ASTATp 85
#define PR_RADON "Rn"
#define PR_RADONp 86
/*SEDMA PERIODA*/
#define PR_FRANCIUM "Fr"
#define PR_FRANCIUMp 87
#define PR_RADIUM "Ra"
#define PR_RADIUMp 88
#define PR_LAWRENCIUM "Lr"
#define PR_LAWRENCIUMp 103
#define PR_RUTHERFORDIUM "Rf"
#define PR_RUTHERFORDIUMp 104
#define PR_DUBNIUM "Db"
#define PR_DUBNIUMp 105
#define PR_SEABORGIUM "Sg"
#define PR_SEABORGIUMp 106
#define PR_BOHRIUM "Bh"
#define PR_BOHRIUMp 107
#define PR_HASSIUM "Hs"
#define PR_HASSIUMp 108
