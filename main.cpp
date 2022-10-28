#include <iostream>
#include "course.h"
#include <string>

int main() {
    std::vector<float> gradeVec;
    std::vector<float> weightVec;

    float grades;

    //Initialization of the various parts of the course which are weighted differently
    Course homeWorkGrade("homework", 0.90, 0.25);
    Course labGrade("lab", 0.85, 0.20);
    Course examGrade("exam", 0.80, 0.30);
    Course projectGrade("project", 0.75, 0.25);

    //The next four calls all multiply the weight from a percent to a number so that it can be referenced in multiplying the actual grade value later
    //These values are pushed onto a vector which is referenced later on
    //Call 1
    float hwW = homeWorkGrade.add_Vector();
    weightVec.push_back(hwW);

    //Call 2
    float labW = labGrade.add_Vector();
    weightVec.push_back(labW);

    //Call 3
    float examW = examGrade.add_Vector();
    weightVec.push_back(examW);

    //Call 4
    float projectW = projectGrade.add_Vector();
    weightVec.push_back(projectW);

    //The next four calls reference the weight and actually calculates the grade based on the weight
    //It adds these to a new vector of weighted grades which can be added to provide the true final grade

    //Call 1
    float hwG = homeWorkGrade.calc_grade();
    gradeVec.push_back(hwG);

    //Call 2
    float labG = labGrade.calc_grade();
    gradeVec.push_back(labG);

    //Call 3
    float examG = examGrade.calc_grade();
    gradeVec.push_back(examG);

    //Call 4
    float projectG = projectGrade.calc_grade();
    gradeVec.push_back(projectG);

    //This references the weighted portions of the grade, and adds them together to provide the actual final grade with weights taken into account
    for(int i = 0; i < gradeVec.size(); i++) {
        grades += gradeVec[i];
    }
    //This creates a new Course object using the first constructor in "Course.h" which can be used for getting the letter grade
    Course finalGrade(grades);

    //This references the new constructed Course and calculates the letter equivalent based on the Syllabus information
    std::string letterGrade = finalGrade.calc_grade_letter();

    std::cout << letterGrade << " " << grades << std::endl;

    return 0;
}
