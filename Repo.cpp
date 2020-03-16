#include "repo.h"

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = 0;
}
void Repo::addExam(Examen s) {
	this->exams[this->n++] = s;
}

Examen* Repo::getAll() {
	return this->exams;
}
