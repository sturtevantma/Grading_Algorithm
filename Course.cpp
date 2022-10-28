#include "Course.h"
#include <string>
#include <iostream>

Course::Course(std::string cName, std::string cDesc) {
    this->NAME = cName;
    this->DESC = cDesc;
    this->weight_achieved = 0;
}

float Course::calc_grade() {
    std::cout << this->task_list[1].name << '\n';
    // Calculates the total grade of the student
    float total;
    // Calculate weighted average
    for(Task t: this->task_list) {
        total += t.grade * t.weight;
    }
    // Set weight_achieved to equal the grade in the course then return the grade
    this->weight_achieved = total;
    return total * 100;
}

std::string Course::calc_grade_letter() {
    // Calculate a letter grade (also runs Course::calc_grade())
    float grade = this->weight_achieved * 100;
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
    // Adds a task into the task_list
    Task temp(name, desc, weight);
    this->task_list.push_back(temp);
}

void Course::add_grade(std::string name, float weight_achieved) {
    // Adds a grade into the specified task, throws exception if the Task does not exist
    // Also calculates a new grade for the task and stores it
    Task* current = nullptr;
    int x = 0;
    for(Task t : this->task_list) {
        if(t.name == name) {
            current = &t;
            break;
        }
        x++;
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
    this->task_list[x].grade = total;
    std::cout << this->task_list[x].grade << '\n';
}

