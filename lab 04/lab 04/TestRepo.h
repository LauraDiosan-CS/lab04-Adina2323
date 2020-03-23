#pragma once
#include "repo.h"
class TestRepo
{
private:

	Repo repo;
public:

	TestRepo();
	void testLoadFromFile();
	void testAdd();
	void testUpdate();
	void testDel();
	void testGetAll();
	void testExamAtPos();
	void testSaveToFile();
	void testFindExam();
	~TestRepo();
};