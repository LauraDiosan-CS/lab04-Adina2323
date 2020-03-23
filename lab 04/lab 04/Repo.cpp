#include "repo.h"
#include <string>
#include <fstream>
#include <iostream>
Repo::Repo() {

}
Repo::Repo(const char* file)
{
	fstream f;
	exams.clear();
	f.open(file, ios::in | ios::out | ios::app);
	char* nume = new char[20];
	int nota;
	string data;
		while (!f.eof()) {
			f >> nume >> data >> nota;
			if (nume != " ") {
				Examen s(nume, data, nota);
				exams.push_back(s);
			}
		}
	f.close();
}
void Repo::loadFromFile(const char* file)
{
	fstream f;
	exams.clear();
	f.open(file, ios::in | ios::out | ios::app);
	char* nume = new char[20];
	int nota;
	string data;
		while (!f.eof()) {
			f >> nume >> data >> nota;
			cout << data;
			if (nume != " ") {
				Examen s(nume, data, nota);
				exams.push_back(s);
			}
		}
	f.close();
	/*exams.clear();
	ifstream f(file);
	string linie;
	char* nume = new char[20];
	int varsta;
	while (!f.eof()) {
		f >> nume >> linie >> varsta;
		if (nume != "") {
			Examen s(nume, linie, varsta);
			exams.push_back(s);
		}
	}
	delete[] nume;
	f.close();*/
}
void Repo::addExam(Examen s) {
	exams.push_back(s);
}
void Repo::updateExam(Examen s, const char* Nume, string data, int nota)
{
	vector<Examen>::iterator it;
	it = find(exams.begin(), exams.end(), s);
	if (it != exams.end()) {
		(*it).setNume(Nume);
		(*it).setData(data);
		(*it).setNota(nota);
	}
}
int Repo::findExam(Examen s)
{
	vector<Examen>::iterator it;
	it = find(exams.begin(), exams.end(), s);
	if (it != exams.end()) {
		return distance(exams.begin(), it);
	}
	return -1;
}
int Repo::delExam(Examen s)
{
	vector<Examen>::iterator it;
	it = find(exams.begin(), exams.end(), s);
	if (it != exams.end()) {
		exams.erase(it);
		return 0;
	}
	return -1;
}
Examen Repo::examAtPosition(int x)
{
	if (x < 0 or x > (exams.size()-1)) return Examen("", "", -1);
	return exams[x];
}
int Repo::get_len() {
	return exams.size();
}
vector <Examen> Repo::getAll() {
	return exams;
}
void Repo::saveToFile(const char* file) {
	ofstream f(file);
	f.open(file, ios::out | ios::in | ios::app);
	int i=0;
	while (!f.eof()) {
		if (i < exams.size()) {
			f << exams[i];
			i++;
		}
	}
	f.close();
}
Repo::~Repo() {
	
}