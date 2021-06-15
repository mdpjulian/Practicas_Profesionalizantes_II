#include "../include/AttendanceManagement.hpp"
#include <fstream>

AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
}

void AttendanceManagement::takeAttendance(Student *student, Course *course, string datetime, bool state)
{
    std::ofstream writeFile;
    writeFile.open("attendance.csv", ios::app);
    writeFile << student->getIdentifier() << ", "
              << student->getName() << ", "
              << student->getSurname() << ", "
              << course->getIdentifier() << ", "
              << course->getName() << ", " << datetime << ", "
              << "present: " << state << endl;
}