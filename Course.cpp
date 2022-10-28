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

        if (final_Grade >= 93) {
            letter = "A";
        }
        else if (final_Grade >= 90 && final_Grade < 93){
            letter = "A-";
        }
        else if (final_Grade >= 87 && final_Grade < 90) {
            letter = "B+";
        } 
        else if (final_Grade >= 83 && final_Grade < 87) {
            letter = "B";
        } 
        else if (final_Grade >= 80 && final_Grade < 83) {
            letter = "B-";
        } 
        else if (final_Grade >= 77 && final_Grade < 80) {
            letter = "C+";
        }
        else if (final_Grade >= 73 && final_Grade < 77) {
            letter = "C";
        } 
        else if (final_Grade >= 70 && final_Grade < 73) {
            letter = "C-";
        }  
        else if (final_Grade >= 67 && final_Grade < 70) {
            letter = "D+";
        }
        else if (final_Grade >= 63 && final_Grade < 67) {
            letter = "D";
        } 
        else if (final_Grade >= 60 && final_Grade < 63) {
            letter = "D-";
        }  
        else if (final_Grade < 60) {
            letter = "F";
        }
        return letter;
    }
    float Course::add_Vector() {
        return weight * 100;
    }
