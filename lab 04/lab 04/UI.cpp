#include "UI.h"
#include "TestRepo.h"
#include "ftii.h"
#include <iostream>
using namespace std;

void UI::add() 
{
    char date[250], name[250];
    int nota;
    cout << "Give a name: ";
    cin >> name;
    cout << "Give a date: ";
    cin >> date;
    cout << "Give a grade: ";
    cin >> nota;
    cout << endl;
    this->service.addExamen(name, date, nota);
    
}
void UI::update()
{
    char name[250],name2[250];
    int nota1,nota2 ;
    string data1, data2;
    cout << "Dati datele elevului pe care doriti sa il modificati:";
    cout << "Give a name: ";
    cin >> name;
    cout << "Give a date: ";
    cin >> data1;
    cout << "Give a grade: ";
    cin >> nota1;
    Examen s1(name, data1, nota1);
    cout << "Dati datele pentru modificare";
    cout << "Give a name: ";
    cin >> name2;
    cout << "Give a date: ";
    cin >> data2;
    cout << "Give a grade: ";
    cin >> nota2;
    this->service.updateExamen(s1, name2, data2, nota2);
}
void UI::printAll() {
    for (int i = 0; i < this->service.get_len(); i++)
        cout << this->service.get_all()[i] << endl;
}
void UI::delExam() {
    char name[250];
    int nota1;
    string data1;
    cout << "Dati datele elevului pe care doriti sa il stegeti:";
    cout << "Give a name: ";
    cin >> name;
    cout << "Give a date: ";
    cin >> data1;
    cout << "Give a grade: ";
    cin >> nota1;
    Examen s1(name, data1, nota1);
    int rez = service.delExamen(s1);
    if (rez == 0) cout << "Examenul a fost  sters cu succes!" << endl;
    else cout << "Studentul NU a fost sters!" << endl;
}
void UI::run() {

    int opt = 1;
    while (opt ) {
        cout << "Chose an option " << endl;
        menu();
        cout << "Your option is: ";
        cin >> opt;
        if (opt == 1) {
            this->add();
        }
        if (opt == 2) {
            this->update();
        }
        if (opt == 3) {
            this->delExam();
        }
        if (opt == 4) {
            this->printAll();
        }
        if (opt == 0) {
            break;
       }
    }

}