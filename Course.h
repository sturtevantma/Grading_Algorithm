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
    //First type of Course, which has the final grade already with weights taken into account
    Course(float cFinal_Grade);

    //Second type of Course, which takes in the name of the category, the student's average in the category, and the weight of the category
    Course(std::string cName, float cGrade, float cWeight);

    float calc_grade();
    std::string calc_grade_letter();
    float add_Vector();




};

#endif //REVIEW_PROJECT_COURSE_H
