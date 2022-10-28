# Grading_Algorithm
A grading algorithm for CSC 212 review project

Group members:
Nathan Fernandes,
Matthew Sturtevant,
Michael Newton,
Dean Geraci



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
Returns the product of the weight and 100.
