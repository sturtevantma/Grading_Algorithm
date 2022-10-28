#include "Course.h"
#include <string>

Course::Course(std::string cName, std::string cDesc) {
    this->NAME = cName;
    this->DESC = cDesc;
    this->weight_achieved = 0;
}

float Course::calc_grade() {
    float total = 0;
    for(Task t: this->task_list) {
        total += t.grade * t.weight;
    }
    this->weight_achieved;
    return total;
}

std::string Course::calc_grade_letter() {
    float grade = this->calc_grade();
    if(grade >= 94) {
        return "A";
    } else if(grade >= 90) {
        return "A-";
    } else if(grade >= 87) {
        return "B+";
    } else if(grade >= 83) {
        return "B";
    } else if(grade >= 80) {
        return "B-";
    } else if(grade >= 77) {
        return "C+";
    } else if(grade >= 73) {
        return "C";
    } else if(grade >= 70) {
        return "C-";
    } else if(grade >= 67) {
        return "D+";
    } else if(grade >= 60) {
        return "D";
    } else {
        return "F";
    }
    
}

void Course::add_task(std::string name, std::string desc, float weight) {
    Task temp(name, desc, weight);
    this->task_list.push_back(temp);
}

void Course::add_grade(std::string name, float weight_achieved) {
    Task* current = nullptr;
    for(Task t : this->task_list) {
        if(t.name == name) {
            current = &t;
            break;
        }
    }
    if(current == nullptr) {
        throw;
    }
    
    current->grade_list.push_back(weight_achieved);
    float total = 0;
    for(float i : current->grade_list) {
        total += i;
    }
    total /= current->grade_list.size();
    current->grade = total;
}

