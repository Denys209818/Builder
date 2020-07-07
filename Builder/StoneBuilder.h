#pragma once
#include "libs.h"
#include "AbstractBuilder.h"

class StoneBuilder : public AbstractBuilder
{
public:
	void CreateWalls() override;

	void CreateFoundation() override;

	void CreateRoof() override;

	void CreateFloor() override;
};
