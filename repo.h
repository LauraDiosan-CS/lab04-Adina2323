#pragma once
#include "examen.h"

class Repo {
private:
	Examen exams[20];
	int n;
public:
	Repo();
	~Repo();
	void addExam(Examen s);
	Examen* getAll();
};

