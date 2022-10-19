#include <string>

class Task{

    private:

        float weight;
        float weight_achieved;
        float grade;

    public:

        std::string name;
        std::string description;
        Task(std::string name, std::string description, float weight );

};