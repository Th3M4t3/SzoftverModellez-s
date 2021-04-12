#include <iostream>
#include "ILoader.h"
using namespace std;

class Controller
{
private:
	ILoader *loader;
public:
	Controller();
	void CallILoader();

};

