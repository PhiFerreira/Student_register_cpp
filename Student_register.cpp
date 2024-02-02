// Kap7_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>


struct studentInfo {
    std::string firstName;
    std::string lastName;
    double grade;
    unsigned long studentID;
};


void registerStudent(studentInfo student[], int* studentsRegistered, unsigned long* studentID);
void actionControll();

int main()
{
    const int numberOfStudents{ 100 };
    static int studentsRegistered{ 0 };
    static char userCharAnswer{};
    static unsigned long studentID{ 6000 };


    studentInfo student[numberOfStudents];
    
    /*
    std::vector<std::string> name{};
    std::vector<double> grade{};*/

    while (1) {
        std::cout << "Do you want to register a student ? (Y / n)\n";
        std::cin >> userCharAnswer;

        if (std::toupper(userCharAnswer) == 'Y') {
            registerStudent(student, &studentsRegistered, &studentID);
        }
    }


}
void registerStudent(studentInfo student[], int* studentsRegistered, unsigned long* studentID) {
    bool right = false;
    while(!right){
        std::cout << "Enter first name: ";
        std::cin >> student[*studentsRegistered].firstName;

        std::cout << "Enter last name: ";
        std::cin >> student[*studentsRegistered].lastName;

        std::cout << "Enter average grade: ";
        std::cin >> student[*studentsRegistered].grade;

        std::cout << "Student is registered as studentID: " << *studentID << "\n\n";
        student[*studentsRegistered].studentID = *studentID;

        std::cout << "Summary: \nFirst name: " << student[*studentsRegistered].firstName << "\nLast name: " << student[*studentsRegistered].lastName << "\nAverage grade: " << student[*studentsRegistered].grade << "\nStudent ID: " << student[*studentsRegistered].studentID << "\n\n";
        std::cout << "Is this information correct? (Y/n): ";
        char userAnswer{};
        std::cin >> userAnswer;

        if (toupper(userAnswer) == 'Y') {
            right = true;
            *studentID += 1;
            *studentsRegistered += 1;
            std::cout << "Student registered.\n";
        }
        else if (toupper(userAnswer) == 'N') {
            std::cout << "Try again.\n";
        }
    }

}

void actionControll()
{
    std::string userAction{};
    std::cout << "What do you want to do?\n" << "Register new student\t-\t'R'\n" << "Read all students\t-\tRa" << "Read some students\t-\tRs" << "Overwrite student\t-\tO";

    //Make if else for actions. Then functions for the corresponding actions.


}
