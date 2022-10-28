#include <string>

class Task{

    private:

        float weight;
        std::vector<float> grade_list;
        float grade;

    public:

        std::string name;
        std::string description;
        Task(std::string name, std::string description, float weight );

};