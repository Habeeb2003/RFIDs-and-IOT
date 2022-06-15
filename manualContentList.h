#pragma once
#include "shipContainer.h"

// manualContentList derived class
class manualContentList : public shipContainer {
public:
	void setContentList(string content);
	std::string getContentList();
private:
	std::string ContentList;
};