#include <iostream>
#include "examen.h"

using namespace std;

int main()
{


    char* namep, * datap, name, data;
    int nota;

    cout << "Dati numele ";
    cin >> name;
    cout << "Dati nota ";
    cin >> nota;
    cout << "Dati data examenului";
    cin >> data;
    namep = &name;
    datap = &data;
    Examen s1(namep,datap, nota);

    cout << s1;

    Examen s2(s1);
    Examen s3 = s1;
    Examen s4;
    s4 = s2;
}

