#pragma once
#include <string>

using namespace std;

class Account {
public:
	// member function that sets the account name in the object

	void setName(std::string accountName) {
		name = accountName; //store the account name
	}

	std::string getName() const {
		return name;
	}

private:
	std::string name; // data member containing account holder's name


};