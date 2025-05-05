#include "../include/StudManager.h"
#include "../include/Student.h"

StudManager::StudManager() {}

void StudManager::addStudent(const Student& student) { students.push_back(student); }

Student* findStudentByName(const std::string& name) const
{
	for(auto &stud : students)
	{
		if(stud.getName() == name) { return 
	}
}
