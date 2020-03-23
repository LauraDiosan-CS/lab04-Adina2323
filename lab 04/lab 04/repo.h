#pragma once
#include "examen.h"
#include <vector>

class Repo {
private:
	vector <Examen> exams;
	const char* fisier;
public:
	Repo();
	Repo(const char* file);
	void loadFromFile(const char* file);
	void addExam(Examen s);
	void updateExam(Examen s,const char*, string, int);
	int findExam(Examen s);
	int delExam(Examen s);
	vector <Examen> getAll();
	int get_len();
	Examen examAtPosition(int);
	void saveToFile(const char* );
	~Repo();
};

