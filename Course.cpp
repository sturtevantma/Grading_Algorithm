#include "Course.h"
#include <string>

Course::Course(std::string cName, std::string cDesc) {
    this->NAME = cName;
    this->DESC = cDesc;
    this->weight_achieved = 0;
}

float Course::calc_grade(std::string name) {
    for(Task t: this->task_list) {
        
    }
}

std::string Course::calc_grade_letter(std::string name) {

}

void Course::add_task(std::string name, std::string desc, float weight) {

}

void Course::add_grade(std::string name, float weight_achieved) {

}

