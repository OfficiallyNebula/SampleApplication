//main.cpp
//This project serves no functional purpose. - It was designed with testing purposes in mind for testing classes/functions/header files.

#include <fstream>
#include <iostream>
#include "math.h"
#include "register.h"

//Get user username / password
//If user exists - check file and check credentials - pass to main
//If user doesn't exist - error, ask user to register
//Register user - jump to login


int main()
{
    std::cout << "Nebula's Registration System!" << std::endl;
    regUser();
    std::cout << "You have now registered a Username!" << std::endl;
    regPass();
    return 0;
}