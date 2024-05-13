#pragma once
#include"Par.h"
#include<vector>
class Relacion
{
private:
	vector<Par*>* arrP;

public:
	Relacion();
	~Relacion();

	void agregarPar(Par* ObjP);
	void eliminarPar(int pos);
	Par* returnPar(int pos);
	int getN();
};

Relacion::Relacion()
{
	arrP = new vector<Par*>();
}

Relacion::~Relacion() { delete[] arrP; }

void Relacion::agregarPar(Par* ObjP)
{
	arrP->push_back(ObjP);
}

void Relacion::eliminarPar(int pos)
{
	arrP->erase(arrP->begin() + pos);
}

Par* Relacion::returnPar(int pos)
{
	return arrP->at(pos);
}
int Relacion::getN()
{
	return int(arrP->size());
}