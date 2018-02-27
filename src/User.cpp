#include "../include/User.h"

User::User(std::string name){
    m_name = name;
}

std::string User::getName(){
    return m_name;
}
