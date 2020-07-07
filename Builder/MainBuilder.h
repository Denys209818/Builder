#pragma once
#include "libs.h"
#include "Build.h"
#include "AbstractBuilder.h"

class MainBuilder
{
public:
	Build* CreateBuild(AbstractBuilder* abstract_);
};
