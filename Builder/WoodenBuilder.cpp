#include "libs.h"
#include "WoodenBuilder.h"

void WoodenBuilder::CreateWalls()
{
	this->b->size_walls += 4;
}

void WoodenBuilder::CreateFoundation() 
{
	this->b->components += "Wooden Foundation\n";
}

void WoodenBuilder::CreateRoof()
{
	this->b->components += "Wooden Roof\n";
}

void WoodenBuilder::CreateFloor() 
{
	this->b->size_floors++;
}