#include "repo.h"
#include <string>
#include <fstream>
#include <iostream>
Repo::Repo() {
	this->n = 0;
}
Repo::Repo(const char* file)
{
	fstream f;
	f.open(file, ios::in | ios::out | ios::app);
	char* nume = new char[20];
	int nota;
	string data;
		while (!f.eof()) {
			f >> nume >> data >> nota;
			if (nume != " ") {
				Examen s(nume, data, nota);
				this->exams[this->n++] = s;
			}
		}
	f.close();
}
void Repo::loadFromFile(const char* file)
{
	/*fstream f;
	f.open(file, ios::in | ios::out | ios::app);
	char* nume = new char[20];
	int nota;
	string data;
	while (!f.eof())
	{
		f >> nume >> data >> nota;
		if (strcmp(nume, "") != 0)
		{
			Examen s(nume, data, nota);
			this->exams[this->n++] = s;
		}

		f.close();*/

		ifstream f(file);
		string linie;
		char* nume = new char[20];
		int varsta;
		while (!f.eof()) {
			f >> nume >> linie >> varsta;
			if (nume != "") {
				Examen s(nume, linie, varsta);
				this->exams[this->n++] = s;
			}
		}
		delete[] nume;
		f.close();
	
}
void Repo::addExam(Examen s)
{
	this->exams[this->n++] = s;
}
void Repo::updateExam(Examen s, const char* Nume, string data, int nota)
{
	if (findExam(s) == -1) {
		cout << "Nu exista examenul de modificat";
	}
	else {
		int i = findExam(s);
		exams[i] = Examen(Nume, data, nota);
	}
}
int Repo::findExam(Examen s)
{
	for (int i = 0; i < n; i++) {
		if (exams[i] == s)
			return i;
	}
	return -1;
}
void Repo::delExam(Examen s)
{
	int i = findExam(s);
	if (i != -1) 
	{
		exams[i] = exams[n - 1];
		n--;
	}
}
Examen Repo::examAtPosition(int x)
{
	return exams[x];
}
int Repo::get_len() {
	return n;
}
Examen* Repo::getAll() {
	return exams;
}
void Repo::saveToFile(const char* file) {
	ofstream f(file);
	f.open(file, ios::out | ios::in | ios::app);
	int i=0;
	while (!f.eof()) {
		if (i < get_len()) {
			f << exams[i];
			i++;
		}
	}
	f.close();
}
Repo::~Repo() {
	this->n = 0;
	
}