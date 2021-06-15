#include "../include/AttendanceManagement.hpp"

AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
}

void AttendanceManagement::showAttendance(Student* student, Course* course, string datetime, bool state)
{
    cout << student->getIdentifier() << ", "
            << student->getName() << ", "
            << student->getSurname() << ", " 
            << course->getIdentifier() << ", " 
            << course->getName() << ", " 
            << datetime << ", " 
            << "present: " << state << ", " 
            << endl;
}