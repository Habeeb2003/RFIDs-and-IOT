#include "manualContentList.h"

// contentList setter function
void manualContentList::setContentList(string content) {
	// set contentList variable to the parameter passed in
	if (ContentList == "")
	{
		ContentList = content;
	}
	else {
		// seperates contents with a comma
		ContentList += ", ";
		ContentList += content;
	}
}

// contentList variable getter
string manualContentList::getContentList() {
	return ContentList;
}