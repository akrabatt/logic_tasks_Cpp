#pragma once

#include <iostream>
#include <algorithm>
#include <functional>
#include <map>
#include "Student.h"

class StudManager
{
private:
	std::vector<Student> students;
	//std::map<int, std::vector<Student>> groupeByCourse();

public:
	// add student
	void addStudent(const Student& student);

	// return student by name
	const Student* findStudentByName(const std::string& name) const;

	// print all students
	void printAllStudents() const;

	// group students acording to courses
	std::map<int, std::vector<Student>>	groupeByCourse() const;

	// sort students by name
	void sortByName();

	// get average student's age
	double getAverageAge() const;

	// get all namese 
	std::vector<std::string> getAllNames() const;

	// alias fo lambda filter
	using Filter = std::function<bool(Student& s)>;

	// obtain filter type and return filtered vector
	std::vector<Student> filterStudents(const Filter& filter) const;
};
