#include "libs.h"
#include "AbstractBuilder.h"

AbstractBuilder::AbstractBuilder()
{
	this->b = new Build();
}
AbstractBuilder::~AbstractBuilder()
{
	delete this->b;
}
