#include <iostream>
#include "Course.h"
#include <string>

int main() {

    //Initialization of the various parts of the course which are weighted differently
    Course CSC_212("CSC_212", "Class Discussing Data Structures and Algorithms");

    float final_grade = CSC_212.calc_grade();
    std::string letterGrade = CSC_212.calc_grade_letter();

    std::cout << "Number grade: " << final_grade << std::endl;
    std::cout << "Letter grade: " << letterGrade << std::endl;

    return 0;
}
