#ifndef USER
#define USER

#include <string>

class User {
    private:
        std::string m_name;

    public:
        User (std::string name);
        std::string getName();
};
#endif
