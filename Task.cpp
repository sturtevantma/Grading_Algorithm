#include "Task.h"
#include <string>

//This is the constructor which will be referenced in Course.cpp since Course uses the information in the task
Task::Task(std::string name, std::string description, float weight ) {
    this->name = name;
    this->description = description;
    this->weight = weight;
    this->grade = 0;
}