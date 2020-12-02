#pragma once
#include "Auricular.h"
#include <iostream>
#include <string>

using namespace std;

class Telefono
{
private:
	Auricular auricular;
	string color;
public:
	Telefono();
	Telefono(Auricular, string);
	bool cambiaPrecio(float);
	int dimeFabricante();
	Auricular getAuricular();
	void setAuricular(Auricular);
	string getColor();
	void setColor(string);
	string print();
};

