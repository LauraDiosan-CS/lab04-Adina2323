#include <iostream>
#include "examen.h"
#include "TestRepo.h"
#include "TestRepository.h"
#include "TestService.h"
#include "service.h"
#include "UI.h"
#include "ftii.h"
using namespace std;

int main()
{
    TestRepo test;
    test.testLoadFromFile();
    test.testAdd();
    test.testDel();
    test.testExamAtPos();
    test.testFindExam();
    test.testGetAll();
    test.testUpdate();
    //test();
    tests();
    cout << "start..." << endl;
    UI ui;
    ui.run();
    cout << "succes";
   
    
}

