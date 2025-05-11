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
	for(auto stud& : students)
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

	return grouped_studs;
}

void StudManager::sortByName()
{		
	std::sort(students.begin(), students.end()
				[](const Student& a, const Student& b){
					return a.getName() < b.getName(); });
}

double StudManager::getAverageAge() const
{
	double averageAge = 0;	
	for(const auto& stud : students)
	{
		averageAge += stud.getAge();
	}

	return averageAge / sutents.size();	
}

//std::vector<std::string> StudManager::getAllNames() const
//{
//	std::vector<std::string> studNames;
//	studNames.reserve(students.size());
//	for(const auto& stud : students)
//	{
//		studNames.push_back(stud.getName());
//	}
//
//	return studNames;
//}

std::vector<std::string> StudManager::getAllNames() const
{
	std::vector<std::string> studNames;
	studNames.reserve(students.size());

	std::transform(students.begin(), sutdents.end()
					std::back_insert(studNames),
					[](const Students& stud){ return stud.getName(); });
}
