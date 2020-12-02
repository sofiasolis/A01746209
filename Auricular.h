#pragma once
#include <iostream>
#include <string>

using namespace std;

class Auricular
{
private:
	string color;
	int fabricante;
	float precio;
public:
	Auricular();
	Auricular(string, int, float);
	string getColor();
	void setColor(string);

	int getFabricante();
	void setFabricante(int);

	float getPrecio();
	void setPrecio(float);

	string print();
};

