//
// Created by Nathan Fernandes on 10/26/22.
//

#include "Task.h"
#include <vector>
#include <string>

class Course {
private:
    std::vector<Task> task_list;
    int grade;

public:
    Course(std::string cName, std::string cDesc, int cGrade){
        this->grade = cGrade;
    }

    float calc_grade(std::string name){
        return grade;
    }
    std::string calc_grade_letter(std::string name, int grade){
        std::string letter;

        if (grade >= 90 ) {
            letter = "A";
        }
        else if (grade >= 80 && grade < 90) {
            letter = "B";
        }
        else if (grade >= 70 && grade < 80) {
            letter = "C";
        }
        else if (grade >= 60 && grade < 70) {
            letter = "D";
        }
        else if (grade < 60) {
            letter = "F";
        }
        return letter;


    }
    void add_task(std::string name, std::string desc, float weight){

    }
    void add_grade(std::string name, float weight_achieved){

    }

    const std::string NAME;
    const std::string DESC;
    float weight_achieved;


}
