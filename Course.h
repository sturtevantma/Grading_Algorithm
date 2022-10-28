#include "Task.h"
#include <vector>
#include <string>

class Course {
    private:
        std::vector<Task> task_list;

    public:
        Course(std::string cName, std::string cDesc);

        float calc_grade();
        std::string calc_grade_letter();
        void add_task(std::string name, std::string desc, float weight);
        void add_grade(std::string name, float weight_achieved);

        std::string NAME;
        std::string DESC;
        float weight_achieved;


};
