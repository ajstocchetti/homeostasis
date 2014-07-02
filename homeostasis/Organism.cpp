#include "StdAfx.h"
#include "Organism.h"

Organism::Organism(int X, int Y)
{
	itsX=X;
	origX=X;
	
	itsY=Y;
	origY=Y;
}

Organism::~Organism(void)
{
}

string Organism::getName()
{
	return sName;
}

void Organism::setName(string Name)
{
	sName = Name;
}