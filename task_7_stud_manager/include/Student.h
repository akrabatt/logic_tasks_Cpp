#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

class Student
{
private:
	std::string name;	
	unsigned int age;
	unsigned int course;
	std::vector<int> grades;

public:
	Student();

	Student(std::string _name,
			unsigned int _age,
			unsigned int _course,
			std::vecotr<int> _grades);  

	// getters
	std::string getName() const;
	unsigned int getAge() const;
	unsigned int getCourse() const;
	const std::vector<int> getGrades() const;

	// get avarage mark
	double getAverageGrade();
};
