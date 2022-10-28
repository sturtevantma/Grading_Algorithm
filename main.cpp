#include <iostream>
#include "course.h"
#include <string>

int main() {
    std::vector<float> gradeVec;
    std::vector<float> weightVec;

    float grades;


    Course homeWorkGrade("homework", 0.90, 0.25);
    Course labGrade("lab", 0.85, 0.20);
    Course examGrade("exam", 0.80, 0.30);
    Course projectGrade("project", 0.75, 0.25);

    float hwW = homeWorkGrade.add_Vector();
    weightVec.push_back(hwW);

    float labW = labGrade.add_Vector();
    weightVec.push_back(labW);

    float examW = examGrade.add_Vector();
    weightVec.push_back(examW);

    float projectW = projectGrade.add_Vector();
    weightVec.push_back(projectW);

    float hwG = homeWorkGrade.calc_grade();
    gradeVec.push_back(hwG);

    float labG = labGrade.calc_grade();
    gradeVec.push_back(labG);

    float examG = examGrade.calc_grade();
    gradeVec.push_back(examG);

    float projectG = projectGrade.calc_grade();
    gradeVec.push_back(projectG);

    for(int i = 0; i < gradeVec.size(); i++) {
        grades += gradeVec[i];
    }

    Course finalGrade(grades);
    std::string letterGrade = finalGrade.calc_grade_letter();

    std::cout << letterGrade << " " << grades << std::endl;

    return 0;
}
