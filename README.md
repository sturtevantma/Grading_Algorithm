# Grading_Algorithm
A grading algorithm for CSC 212 review project

Group members:
Nathan Fernandes,
Matthew Sturtevant,
Michael Newton,
Dean Geraci



# Documentation

### Course
Course is a class that helps store and calculate information about the grades in a given course__
`Course::task_list`__
Contains all task objects under the command of course. See [Task](#Task)__
`Course::NAME`__
The name of the course (possibly useful for indexing a list of classes)__
`Course::DESC`__
A description of the course, useful for displaying info on multiple courses__
`Course::weight_achieved`__
A float, should usually exist on the domain [0,1] although it is worth noting that higher grades may be able to be achieved in classes that offer extra credit
`Course::calc_grade()`__
Returns a float that contains your grade/100__
`Course::calc_grade_letter()`__
Returns the corresponding letter grade to the number returned by `Course::calc_grade()`__
`Course::add_task()`__
Appends a new task to the list
`Course::add_grade()`__
Adds achieved weight to a task. See [Task](#Task)__

