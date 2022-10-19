#include <string>

class Task{

    private:

        unsigned int weight;
        unsigned int weight_achieved;
        float grade;

    public:

        std::string name;
        std::string description;
        Task(std::string name, std::string description, int weight );

};