#pragma once
#include "repo.h"
class Service {
private:
	Repo repo;
public:
	Service();
	Service(const Repo&);
	void addExamen(char*,string , int);
	Examen updateExamen(Examen s,char* , string , int );
	int delExamen(Examen s);
	int get_len();
	vector<Examen> get_all();
	~Service();
};