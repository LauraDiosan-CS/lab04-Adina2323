#pragma once
#include "repo.h"
#include <vector>
class Service {
private:
	Repo repo;
public:
	Service();
	Service(const Repo&);
	void addExamen(char*,string , int);
	Examen updateExamen(Examen s,char* , string , int );
	void delExamen(Examen s);
	int get_len();
	Examen* get_all();
	vector<Examen> functienota(int);
	void functiebonus(char *);
	~Service();
};