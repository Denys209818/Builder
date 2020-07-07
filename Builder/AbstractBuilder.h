#pragma once
#include "libs.h"
#include "Build.h"

class AbstractBuilder
{
protected:
	Build* b;
public:
	AbstractBuilder();
	virtual void CreateWalls() = 0;
	virtual void CreateFoundation() = 0;
	virtual void CreateRoof() = 0;
	virtual void CreateFloor() = 0;

	~AbstractBuilder();

	friend class MainBuilder;
};