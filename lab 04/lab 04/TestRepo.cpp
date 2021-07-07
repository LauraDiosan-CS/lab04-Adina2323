#include "TestRepo.h"
#include <assert.h>
#include <iostream>
TestRepo::TestRepo()
{
	assert(repo.get_len() == 0);
}
void TestRepo::testLoadFromFile()
{
	repo.loadFromFile("Text.txt");
	cout << repo.get_len() << " ";
	assert(repo.get_len() == 4);
}
void TestRepo::testAdd()
{
	repo.loadFromFile("Text.txt");
	repo.addExam(Examen("Ion Minulescu", "1.01.2000", 18));
	cout << repo.get_len() << " ";
	assert(repo.get_len() == 5);
	repo.saveToFile("Text.txt");
}
void TestRepo::testFindExam() {
	repo.loadFromFile("Text.txt");
	assert(repo.findExam(Examen("Ana", "12.01.2000", 5))==1);
	assert(repo.findExam(Examen("George", " 3.3.2013", 6)) == -1);
}
void TestRepo::testDel() {
	repo.loadFromFile("Text.txt");
	repo.delExam(Examen("Ana", "12.01.2000", 5));
	cout << repo.get_len();
	assert(repo.get_len() == 4);
	repo.saveToFile("Text.txt");
}
void TestRepo::testGetAll()
{
	repo.loadFromFile("Text.txt");
	Examen* rez = repo.getAll();
	assert(repo.get_len() == 4);
	repo.saveToFile("Text.txt");
}
void TestRepo::testUpdate()
{
	repo.loadFromFile("Text.txt");
	repo.updateExam(Examen("Ana", "12.01.2000", 5),"George","3.1.2010",6);
	assert(repo.findExam(Examen("George", "3.1.2010", 6)) == 1);
	repo.saveToFile("Text.txt");
}
void TestRepo::testExamAtPos()
{
	repo.loadFromFile("Text.txt");
	assert(repo.examAtPosition(1) == Examen("George", "3.1.2010", 6));
}
void TestRepo::testSaveToFile()
{
	repo.loadFromFile("Text.txt");
	int n = repo.get_len();
	repo.addExam(Examen("Ion","1.1.1111", 19));
	repo.saveToFile("Text.txt");
	repo.loadFromFile("TestStud.txt");
	assert(repo.get_len() == (n + 1));
}
TestRepo::~TestRepo()
{}