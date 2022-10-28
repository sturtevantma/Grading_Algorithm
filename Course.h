//
// Created by Nathan Fernandes on 10/27/22.
//

#ifndef REVIEW_PROJECT_COURSE_H
#define REVIEW_PROJECT_COURSE_H


#include <vector>
#include <string>

class Course {
private:
    std::vector<float> weight_list;
    std::vector<int> grade_list;
    float grade;
    std::string letter;
    float weight;
    float final_Grade;

public:
    Course(float cFinal_Grade);
    Course(std::string cName, float cGrade, float cWeight);

    float calc_grade();
    std::string calc_grade_letter();
    float add_Vector();




};

#endif //REVIEW_PROJECT_COURSE_H
