#include <iostream>
#include "Course.h"
#include <string>

int main() {

    //Initialization of the various parts of the course which are weighted differently
    Course CSC_212("CSC_212", "Class Discussing Data Structures and Algorithms");

    CSC_212.add_task("Labs" , "5%", 0.05);
    CSC_212.add_task("Programming Assignments" , "50%", 0.50);
    CSC_212.add_task("Term Project" , "35%", 0.35);
    CSC_212.add_task("Final Exam" , "10%", 0.1);
    CSC_212.add_task("Review Project" , "3%", 0.03);

    CSC_212.add_grade("Labs", 0.90);
    CSC_212.add_grade("Programming Assignments", 100.0);
    CSC_212.add_grade("Term Project", 0.85);
    CSC_212.add_grade("Final Exam", 0.80);
    CSC_212.add_grade("Review Project", 0.83);

    float final_grade = CSC_212.calc_grade();
    std::string letterGrade = CSC_212.calc_grade_letter();


    std::cout << "Number grade: " << final_grade << std::endl;
    std::cout << "Letter grade: " << letterGrade << std::endl;

    return 0;
}
