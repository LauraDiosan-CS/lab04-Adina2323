#include "TestService.h"
#include<assert.h>
#include <iostream>
void test() {
	Service service;
	char* nume1 = new char[10]; char* nume2 = new char[10]; char* nume3 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	Examen s1(nume1, "12.02.2020", 5);
	strcpy_s(nume2, sizeof "Alin", "Alin");
	Examen s2(nume2, "18.03.2020", 10);
	strcpy_s(nume3, sizeof "Matei", "Matei");
	Examen s3(nume3, "18.03.2020", 10);
	Examen s4;
	Examen exams[3];
	exams[0] = s1; exams[1] = s2; exams[2] = s3;
	service.addExamen(nume1,"12.02.2020", 5); service.addExamen(nume2, "18.03.2020", 10); service.addExamen(nume3, "18.03.2020", 10);
	assert(service.get_len() == 3);
	for (int i = 0; i < service.get_len(); i++) {
		assert(service.get_all()[i] == exams[i]);
	}
	service.delExamen(s1);
	assert(service.get_len() == 2);
	s4= service.updateExamen(s2, nume3, "18.03.2020", 10);
	Examen examene[2];
	examene[0] = s3;
	examene[1] = s3;
	for (int i = 0; i < service.get_len(); i++)
	{
		assert(service.get_all()[i]==examene[i]);
	}
	
}
