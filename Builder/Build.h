#pragma once
#include "libs.h"

class Build
{
	int size_walls;
	int size_floors;
	string components;
public:
	Build();

	void ShowComponents();

	friend class WoodenBuilder;
	friend class StoneBuilder;
};