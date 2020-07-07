#include "libs.h"
#include "Build.h"
#include "AbstractBuilder.h"
#include "MainBuilder.h"
#include "StoneBuilder.h"

void main() 
{
	setlocale(LC_CTYPE,"ukr");
	AbstractBuilder* ab = new StoneBuilder();
	
	MainBuilder* b = new MainBuilder();
	Build * build = b->CreateBuild(ab);
	build->ShowComponents();

	

}