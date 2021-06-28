#include <iostream>
#include <fstream>

void regUser() {
	std::string username;
	std::cout << "Enter desired Username: "; std::cin >> username;
	std::ofstream myFile("users.neb");
	myFile << username << std::endl;
	myFile.close();
	std::cout << "Thank you for entering your username." << std::endl;

}

void regPass() {
	std::string password;
	std::cout << "Enter desired Password: "; std::cin >> password;
	std::ofstream myFile("users.neb");
	myFile << password << std::endl;
	myFile.close();
	std::cout << "Thank you for entering your password." << std::endl;
}