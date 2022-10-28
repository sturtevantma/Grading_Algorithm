//
// Created by Nathan Fernandes on 10/27/22.
//

#include "course.h"
#include <string>


Course::Course(float cFinal_Grade) {
    this->final_Grade = cFinal_Grade;
}

Course::Course(std::string cLetter, float cGrade, float cWeight) {
        this->grade = cGrade;
        this->letter = cLetter;
        this->weight = cWeight;
    }



    float Course::calc_grade() {
        float newGrade = grade * weight;

        return newGrade * 100;
    }

    std::string Course::calc_grade_letter() {

        if (final_Grade >= 90) {
            letter = "A";
        } else if (final_Grade >= 80 && final_Grade < 90) {
            letter = "B";
        } else if (final_Grade >= 70 && final_Grade < 80) {
            letter = "C";
        } else if (final_Grade >= 60 && final_Grade < 70) {
            letter = "D";
        } else if (final_Grade < 60) {
            letter = "F";
        }
        return letter;
    }
    float Course::add_Vector() {
        return weight * 100;
    }
