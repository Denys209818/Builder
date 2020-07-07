#include "libs.h"
#include "MainBuilder.h"
#include "AbstractBuilder.h"

Build* MainBuilder::CreateBuild(AbstractBuilder* abstract_)
{

	Build* nbild;

	int a;
	cout << "¬ведiть кiлькiсть поверхiв будiвлi - ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		abstract_->CreateWalls();
		abstract_->CreateFloor();
	}
	abstract_->CreateFoundation();
	abstract_->CreateRoof();
	return abstract_->b;
}