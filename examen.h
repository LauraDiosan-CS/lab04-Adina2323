#pragma once
#include <ostream>
using namespace std;

class Examen {
private:
	char* name;
	char* data;
	int nota;
public:
	Examen();
	Examen(char* name, char* data, int nota);
	Examen(const Examen& s);
	~Examen();
	char* getName();
	char* getData();
	int getNota();
	void setNume(char* nume);
	void setData(char* data);
	void setNota(int nota);
	Examen& operator=(const Examen& s);
	bool operator==(const Examen& s);
	friend ostream& operator<<(ostream& os, const Examen& s);
};
