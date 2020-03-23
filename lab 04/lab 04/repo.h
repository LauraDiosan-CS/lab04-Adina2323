#pragma once
#include "examen.h"

class Repo {
private:
	Examen exams[101];
	int n;
public:
	Repo();
	Repo(const char* file);
	void loadFromFile(const char* file);
	void addExam(Examen s);
	void updateExam(Examen s,const char*, string, int);
	int findExam(Examen s);
	void delExam(Examen s);
	Examen* getAll();
	int get_len();
	Examen examAtPosition(int);
	void saveToFile(const char* );
	~Repo();
};

