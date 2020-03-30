#include "service.h"
#include <algorithm>
#include <iostream>
Service::Service ()
{}
Service::Service(const Repo& r)
{
	repo = r;
}
void Service::addExamen(char* name, string data, int nota) {
	Examen s1(name, data, nota);
	repo.addExam(s1);
}
void Service::delExamen(Examen s)
{
	repo.delExam(s);
}
Examen* Service::get_all() {
	return this->repo.getAll();
}
int Service::get_len() {
	return this->repo.get_len();
}
Examen Service::updateExamen(Examen s,char* name, string data, int nota)
{
	repo.updateExam(s, name, data, nota);
	return s;
}
vector<Examen> Service::functienota(int nota)
{
	vector <Examen> examene;
	for (int i = 0;i<repo.get_len(); i++)
	{
		if (repo.examAtPosition(i).getNota() > nota) {
			examene.push_back(repo.examAtPosition(i));
		}
	}
	return examene;
}
void Service::functiebonus(char* nume)
{
	for (int i = 0; i < repo.get_len(); i++)
	{
		Examen crtStudent = repo.examAtPosition(i);
		if (strcmp(crtStudent.getName(),nume)==0) 
		{
			int nota = crtStudent.getNota();
			nota++;
			string data = crtStudent.getData();
			this->updateExamen(crtStudent, crtStudent.getName(), data, nota);
		}
	}
}
Service::~Service()
{
}