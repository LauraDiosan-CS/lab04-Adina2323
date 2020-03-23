#include <iostream>
#include "examen.h"
#include "TestRepo.h"
#include "service.h"
#include "UI.h"
#include "ftii.h"
using namespace std;

int main()
{
    /*cout << "start..." << endl;
    UI ui;
    ui.run();
    cout << "succes";*/
    TestRepo test;
    test.testLoadFromFile();
    test.testAdd();
    test.testDel();
    test.testExamAtPos();
    test.testFindExam();
    test.testGetAll();
    test.testUpdate();
    char name[250];
    string data;
    int nota;
    std::cout << "Dati numele ";
    std::cin >> name;
    std::cout << "Dati nota ";
    std::cin >> nota;
    std::cout << "Dati data examenului";
    std::cin >> data;
    Examen s1(name,data, nota);
    Examen s5("Alin", "12.02.2020", 5);
    std::cout << s1;
    std::cout << s5;
    Examen s2(s1);
    Examen s3 = s1;
    Examen s4;
    s4 = s2;
    return 0;
}

