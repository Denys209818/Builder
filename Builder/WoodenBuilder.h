#pragma once
#include "libs.h"
#include "Build.h"
#include "AbstractBuilder.h"

class WoodenBuilder : public AbstractBuilder
{
public:
	void CreateWalls() override;

	void CreateFoundation() override;

	void CreateRoof() override;

	void CreateFloor() override;
};
