#include "examen.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;

Examen::Examen() {
	this->name = NULL;
	this->data = "";
	this->nota = 0;
}

Examen::Examen(const char* name, string data, int nota)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, 1 + strlen(name), name);
	this->data = data;
	this->nota = nota;
}

Examen::Examen(const Examen& s)
{
	this->name = new char[strlen(s.name) + 1];
	strcpy_s(this->name, 1 + strlen(s.name), s.name);
	this->data = s.data;
	this->nota = s.nota;
}

Examen::~Examen() {
	if (this->name) {
		delete[] this->name;
		this->name = NULL;
	}
}

char* Examen::getName() {
	return this->name;
}
string Examen::getData() {
	return this->data;
}
int Examen::getNota() {
	return this->nota;
}
void Examen::setNume(const char* name)
{
	if (this->name) {
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Examen::setData(string data)
{
	this->data=data;
}

void Examen::setNota(int nota) {
	this->nota = nota;
}

Examen& Examen::operator=(const Examen& s) {
	this->setNume(s.name);
	this->setData(s.data);
	this->setNota(s.nota);
	return *this;
}

bool Examen:: operator==(const Examen& s) {
	return strcmp(this->name, s.name) == 0 && this->data==s.data && this->nota == s.nota;
}

ostream& operator<<(ostream& os, const Examen& s)
{
	os <<"Nume:"<<  s.name << " Data:" << s.data <<" Nota: " << s.nota;
	return os;
}




