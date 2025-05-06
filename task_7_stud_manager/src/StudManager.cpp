#include "../include/StudManager.h"
#include "../include/Student.h"

StudManager::StudManager() {}

void StudManager::addStudent(const Student& student) { students.push_back(student); }

//const Student* findStudentByName(const std::string& name) const
//{
//	for(const auto &stud : students)
//	{
//		if(stud.getName() == name) 
//		{ 
//			return &stud;
//		}
//	}
//	return nullprt;
//}

const Student* StudManager::findStudentByName(const std::string& name) const
{
	auto it = std::find_if(students.begin(), students.end(), 
						   [&name](const Student& s) { return s.getName() == name; });

	return (it != students.end()) ? &(*it) : nullptr;
}

void StudManager::printAllStudents() const
{
	for(auto stud : students)
	{
		std::cout << "Name: " << stud.getName()
				  << ", Cours: " << stud.getCourse()
				  << ", Average grade: " << stud.getAverageGrade()
				  << "\n";
	}
}

std::map<int, std::vector<Student>> StudManager::groupeByCourse() const
{
	std::map<int, std::vector<Student>> grouped_studs;

	for(const auto& stud : students)
	{
		grouped_students[stud.getCourse()].push_back(stud);
	}
}
