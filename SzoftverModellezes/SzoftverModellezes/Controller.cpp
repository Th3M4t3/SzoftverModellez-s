#include "Controller.h"

Controller::Controller()
{
	cout << "Controller created!" << endl;
}

void Controller::CallILoader()
{
	*loader = ILoader();
}
