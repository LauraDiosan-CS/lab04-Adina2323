#include "examen.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;

Examen::Examen() {
	this->name = NULL;
	this->data = NULL;
	this->nota = 0;
}

Examen::Examen(char* name, char* data, int nota)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, 1 + strlen(name), name);
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, 1 + strlen(data), data);
	this->nota = nota;
}

Examen::Examen(const Examen& s)
{
	this->name = new char[strlen(s.name) + 1];
	strcpy_s(this->name, 1 + strlen(s.name), s.name);
	this->data = new char[strlen(s.data) + 1];
	strcpy_s(this->data, 1 + strlen(s.data), s.data);
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
char* Examen::getData() {
	return this->data;
}
int Examen::getNota() {
	return this->nota;
}
void Examen::setNume(char* name)
{
	if (this->name) {
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Examen::setData(char* data)
{
	if (this->data) {
		delete[] this->data;
	}
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, strlen(data) + 1, data);
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
	return strcmp(this->name, s.name) == 0 && strcmp(this->data, s.data) == 0&& this->nota == s.nota;
}

ostream& operator<<(ostream& os, const Examen& s)
{
	os << s.nota << " " << s.data << s.nota;
	return os;
}




