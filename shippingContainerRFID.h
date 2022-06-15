#pragma once
#include "shipContainer.h"

// shippingContainerRFID derived class
class shippingContainerRFID : public shipContainer {
public:
	void add(std::string item);
	std::string getContentList();
private:
	std::vector<std::string> itemList;
	std::vector<int> quantityList;
};