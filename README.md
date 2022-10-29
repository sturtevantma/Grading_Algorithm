# Grading_Algorithm
A grading algorithm for CSC 212 review project

Group members:
Nathan Fernandes,
Matthew Sturtevant,
Michael Newton,
Dean Geraci

# Summary and Repo Address

This is a program which calculated a student's weighted average for CSC 212 by using the student's grade in each
category as well as the weight of each category as a part of the entire grade. The output of the program is both
A numerical representation and the letter grade corresponding with it.

Repo Address: https://github.com/sturtevantma/Grading_Algorithm

# Documentation

### Course
Course is a class that helps store and calculate information about the grades in a given course  
`Course::task_list`  
Contains all task objects under the command of course. See [Task](#Task)  
`Course::NAME`  
The name of the course (possibly useful for indexing a list of classes)  
`Course::DESC`  
A description of the course, useful for displaying info on multiple courses  
`Course::weight_achieved`  
A float, should usually exist on the domain [0,1] although it is worth noting that higher grades may be able to be achieved in classes that offer extra credit  
`Course::calc_grade()`  
Returns a float that contains your grade/100  
`Course::calc_grade_letter()`  
Returns the corresponding letter grade to the number returned by `Course::calc_grade()`  
`Course::add_task()`  
Appends a new task to the list  
`Course::add_grade()`  
Adds achieved weight to a task. See [Task](#Task)  
`Course::get_num_grade()`  
Returns the product of the weight and 100

### Task
Task is a container for all info about what the courses are and what grades they have  
`Task::weight`  
Contains the amount of weight a grade will recieve  
`Task::grade_list`  
Contains a list of every grade in a category  
`Task::grade`  
Contains a float value that represents the grade of an assignment  
`Task::name`  
Holds the name of the Task  
`Task::description`  
Holds a desciption of the Task for the user  
`Task::Task()`  
Assigns a name, description, and weight to a Task object

### How to Compile
For the actual percentage representation for each category, the user needs to hard code their grade for each category before compiling.
When compiling, you need to type `g++ main.cpp Course.cpp Task.cpp`
To execute, type `./a.exe`
There is no additional input needed because the current grade of the student is hard coded.
The final grade and letter grade equivalent will be provided as output.
