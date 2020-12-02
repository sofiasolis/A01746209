#include "Auricular.h"
#include <iostream>
#include <string>

using namespace std;

Auricular::Auricular() {
	color = "Blanco";
	fabricante = 7;
	precio = 349.99;
}

Auricular::Auricular(string _color, int _fabricante, float _precio) {
	color = _color;
	fabricante = _fabricante;
	precio = _precio;
}

string Auricular::getColor() {
	return color;
}

int Auricular::getFabricante() {
	return fabricante;
}

float Auricular::getPrecio() {
	return precio;
}

void Auricular::setColor(string _color) {
	color = _color;
}

void Auricular::setFabricante(int _fabricante) {
	fabricante = _fabricante;
}

void Auricular::setPrecio(float _precio) {
	precio = _precio;
}

string Auricular::print() {
	return "Color: " + color + ", Fabricante: " + to_string(fabricante) + ", Precio: " + to_string(precio);
}
