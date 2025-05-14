#include "../include/Student.h"

Student::Student() {}

Student::Student(std::string _name,
				 unsigned int _age,
				 unsigned int _course,
				 std::vector<int> _grades) :
				 name(_name),
				 age(_age),
				 course(_course),
				 grades(_grades) {}

std::string Student::getName() const { return name; }

unsigned int Student::getAge() const { return age; }

unsigned int Student::getCourse() const { return course; }

const std::vector<int>& Student::getGrades() const { return grades; }

double Student::getAverageGrade() const
{
	if(grades.empty()) { return 0.0; }
	int sum = std::accumulate(grades.begin(), grades.end(), 0);
	return static_cast<double>(sum) / grades.size();
}
