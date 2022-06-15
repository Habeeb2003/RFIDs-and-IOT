#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

// base class
class shipContainer {
public:
	void setContainerId(int conId);
	int getContainerId();
	virtual std::string getContentList();	// declaration of getContentList virtual function
private:
	// container Id
	int containerId;
};
