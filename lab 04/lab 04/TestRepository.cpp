#include "TestRepository.h"
#include<assert.h>
#include <iostream>
void tests()
{
	char* nume1 = new char[10];
	char* nume2 = new char[10]; char* nume3 = new char[10];
	strcpy_s(nume1, sizeof "Alex", "Alex");
	Examen s1(nume1, "12.02.2020", 5);
	strcpy_s(nume2, sizeof "Alin", "Alin");
	Examen s2(nume2, "18.03.2020", 10);
	strcpy_s(nume3, sizeof "Matei","Matei");
	Examen s8(nume3, "18.03.2020", 10);
	Examen s3(nume1, "12.02.2020",5);
	Examen s4;
	s4 = s2;
	assert(s4 == s2);
	assert(s1 == s3);
	Repo repo;
	Examen exams[4];
	exams[0] = s1;
	exams[1] = s2;
	exams[2] = s3;
	exams[3] = s4;
	repo.addExam(s1);repo.addExam(s2); repo.addExam(s3); repo.addExam(s4);
	assert(repo.get_len() == 4);
	for (int i = 0; i < repo.get_len(); i++) {
		assert(repo.getAll()[i] == exams[i]);
	}
	repo.updateExam(Examen("Alex", "12.02.2020", 5), "Matei", "18.03.2020", 10);
	Examen examene[4];
	examene[0] = s8; examene[1] = s2;
	examene[2] = s3;
	examene[3] = s4;
	for (int i = 0; i < repo.get_len(); i++)
	{
		assert(repo.getAll()[i] == examene[i]);
	}
	repo.delExam(s1);
	assert(repo.get_len() == 3);
	assert(repo.examAtPosition(2) == s2);
	assert(repo.findExam(s1) == -1);
	assert(repo.findExam(s2) == 1);
}
