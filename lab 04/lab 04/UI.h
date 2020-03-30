#pragma once
#include "Service.h"
class UI {
private:

	Service service;
	void add();
	void update();
	void printAll();
	void delExam();
	void handlenota();
	void showSequence(vector<Examen> examene);
	void addPoint();

public:
	void run();

};