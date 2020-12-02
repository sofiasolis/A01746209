#include "Telefono.h"
#include "Auricular.h"
#include <iostream>
#include <string>

using namespace std;

Telefono::Telefono() {
	color = "Azul";
	auricular = Auricular("verde", 3, 199.99);
}

Telefono::Telefono(Auricular _auricular, string _color) {
	color = _color;
	auricular = _auricular;
}
bool Telefono::cambiaPrecio(float _precio) {
	if (_precio >= 299.99) {
		auricular.setPrecio(_precio);
		cout << endl << "Cambio de precio exitoso" << endl << endl;
		return true;
	}
	return false;
}

int Telefono::dimeFabricante() {
	return auricular.getFabricante();
}
Auricular Telefono::getAuricular() {
	return auricular;
}
void Telefono::setAuricular(Auricular _auricular) {
	auricular = _auricular;
}
string Telefono::getColor() {
	return color;
}
void Telefono::setColor(string _color) {
	color = _color;
}
string Telefono::print() {
	return "Color: " + color +", Auricular{" + auricular.print() + "}";
}