#include "shippingContainerRFID.h"

// add items to itemList variable and quantity to quantityList variable
void shippingContainerRFID::add(std::string item) {
	// check if item is inside the itemList variable
	if (find(itemList.begin(), itemList.end(), item) != itemList.end())
	{
		// get index of item in itemList variable
		vector<std::string>::iterator itr = find(itemList.begin(), itemList.end(), item);
		if (itr != itemList.end())
		{
			quantityList.at(itr - itemList.begin()) = quantityList.at(itr - itemList.begin()) + 1;
		}
	}
	else
	{
		// add item to itemList variable
		itemList.push_back(item);
		quantityList.push_back(1);
	}
}

// contentList getter
std::string shippingContainerRFID::getContentList() {
	string contentList;
	for (int i = 0; i < itemList.size(); i++)
	{
		contentList += to_string(quantityList.at(i)) + " " + itemList.at(i) + ". ";
	}
	return contentList;
}

