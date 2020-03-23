#include "service.h"
#include <algorithm>
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
int Service::delExamen(Examen s)
{
	return repo.delExam(s);
}
vector <Examen> Service::get_all() {
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
Service::~Service()
{
}