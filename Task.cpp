#include "Task.h"
#include <string>

Task::Task(std::string name, std::string description, float weight ) {
    this->name = name;
    this->description = description;
    this->weight = weight;
    this->grade = 0;
}