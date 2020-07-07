#include "libs.h"
#include "Build.h"

Build::Build()
{
	this->size_floors = 0;
	this->size_walls = 0;
}

void Build::ShowComponents()
{
	cout << "walls - " << this->size_walls << endl;
	cout << "Floors - " << this->size_floors << endl;
	cout << this->components << endl;
}