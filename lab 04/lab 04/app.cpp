#include <iostream>
#include "examen.h"
#include "TestRepository.h"
#include "TestService.h"
#include "service.h"
#include "UI.h"
#include "ftii.h"
using namespace std;

int main()
{
    test();
    tests();
    cout << "start..." << endl;
    UI ui;
    ui.run();
    cout << "succes";
   
    
}

