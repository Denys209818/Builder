#include "libs.h"
#include "StoneBuilder.h"

void StoneBuilder::CreateWalls()
{
	this->b->size_walls += 4;
}

void StoneBuilder::CreateFoundation() 
{
	this->b->components += "Stone Foundation\n";
}

void StoneBuilder::CreateRoof() 
{
	this->b->components += "Stone Roof\n";
}

void StoneBuilder::CreateFloor() 
{
	this->b->size_floors++;
}