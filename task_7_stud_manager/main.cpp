#include <iostream>
#include "include/Student.h"
#include "include/StudManager.h"

int main()
{
	StudManager StManag;	
	
	StManag.addStudent(Student("Dmitrii", 25, 5, { 5, 5, 5, 3, 5, 4 }));
	StManag.addStudent(Student("Alexandr", 23, 3, { 3, 5, 3, 3, 5, 2 }));
	StManag.addStudent(Student("Ilya", 23, 3, { 5, 4, 2, 3, 2, 4 }));
	StManag.addStudent(Student("Boris", 26, 5, { 7, 5, 2, 3, 4, 4 }));
	StManag.addStudent(Student("Oleg", 22, 2, { 3, 5, 4, 3, 5, 4 }));
	StManag.addStudent(Student("Semeon", 24, 1, { 3, 5, 4, 3, 5, 5 }));
	StManag.addStudent(Student("Egor", 25, 5, { 5, 5, 5, 3, 5, 4 }));
	StManag.addStudent(Student("Kirill", 22, 3, { 5, 5, 5, 5, 5, 5 }));
	StManag.addStudent(Student("Gleg", 22, 3, { 5, 5, 5, 5, 5, 5 }));
	StManag.addStudent(Student("Roman", 24, 2, { 4, 5, 4, 3, 5, 4 }));
	StManag.addStudent(Student("Vladimir", 21, 1, { 5, 3, 4, 3, 5, 4 }));


	
}
