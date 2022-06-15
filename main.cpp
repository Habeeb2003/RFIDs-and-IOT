#include "shipContainer.h"
#include "manualContentList.h"
#include "shippingContainerRFID.h"

// function prototype
void ShipContainerIterator(shipContainer **shipCons, int num);

int main() {

	// array of shipContainer objects pointer
	shipContainer* shipCon[6];

	// array of manualContentList objects
	manualContentList manCon[3];

	// array of shippingContainerRFID objects
	shippingContainerRFID shipConRfid[3];

	// calling setContentList function on manualContentList objects
	manCon[0].setContentList("1000 Lysol wipes");
	manCon[1].setContentList("1000 toilet paper");
	manCon[2].setContentList("500 70% hand sanitizers");

	// calling add function on shippingContainerRFID objects
	shipConRfid[0].add("fish crackers");
	shipConRfid[0].add("fish crackers");
	shipConRfid[0].add("cookies");
	shipConRfid[1].add("pineapple");
	shipConRfid[1].add("pears");
	shipConRfid[1].add("pineapple");
	shipConRfid[1].add("pears");
	shipConRfid[2].add("masks");
	shipConRfid[2].add("masks");
	shipConRfid[2].add("masks");
	shipConRfid[2].add("chocolate bars");
	shipConRfid[2].add("chocolate bars");
	shipConRfid[2].add("chocolate bars");

	// initializing shipContainer Object pointers
	shipCon[0] = &manCon[0];
	shipCon[0]->setContainerId(100);
	shipCon[1] = &manCon[1];
	shipCon[1]->setContainerId(200);
	shipCon[2] = &manCon[2];
	shipCon[2]->setContainerId(300);
	shipCon[3] = &shipConRfid[0];
	shipCon[3]->setContainerId(400);
	shipCon[4] = &shipConRfid[1];
	shipCon[4]->setContainerId(500);
	shipCon[5] = &shipConRfid[2];
	shipCon[5]->setContainerId(600);

	ShipContainerIterator(shipCon, 6);

	return 0;
}

// iterate through all the shipContainer pointers function
void ShipContainerIterator(shipContainer **shipCons, int num) {

	// create a csv file to store the container's data
	ofstream file;
	file.open("ContainerData.csv");

	// writiing in the .csv file
	for (int i = 0; i < num; i++)
	{
		cout << "Container " << shipCons[i]->getContainerId() << " contains " << shipCons[i]->getContentList() << endl;
		file << shipCons[i]->getContainerId() << "," << shipCons[i]->getContentList() << endl;
	}

	// closing .csv file
	file.close();
}