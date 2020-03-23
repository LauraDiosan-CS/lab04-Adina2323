#pragma once
#include <ostream>
using namespace std;

class Examen {
private:
	char* name;
	string data;
	int nota;
public:
	Examen();
	Examen(const char* name, string data, int nota);
	Examen(const Examen& s);
	~Examen();
	char* getName();
	string getData();
	int getNota();
	void setNume(const char* nume);
	void setData(string data);
	void setNota(int nota);
	Examen& operator=(const Examen& s);
	bool operator==(const Examen& s);
	friend ostream& operator<<(ostream& os, const Examen& s);
};
