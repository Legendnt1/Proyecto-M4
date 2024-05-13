#pragma once
#include"Relacion.h"

void ordernarConjunto(int* conjuntoA, int n)
{
	int aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (conjuntoA[j] > conjuntoA[j + 1])
			{
				aux = conjuntoA[j];
				conjuntoA[j] = conjuntoA[j + 1];
				conjuntoA[j + 1] = aux;
			}
		}
	}
}


void generarRelacion(Relacion* R, Par* par, int* conjuntoA, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (conjuntoA[j] % conjuntoA[i] == 0)
			{
				par = new Par(conjuntoA[i], conjuntoA[j]);
				R->agregarPar(par);
			}
		}
	}
}


bool determinarReflexividad(Relacion* R, Par* par, int* conjuntoA, int n)
{
	int conDiagonal = 0;
	for (int i = 0; i < R->getN(); i++)
	{
		if (R->returnPar(i)->getX() == R->returnPar(i)->getY())
		{
			conDiagonal++;
		}
	}
	if (conDiagonal == n) return true;
	else return false;

}

bool determinarAntisimetria(Relacion* R, Par* par, int* conjuntoA, int n)
{
	for (int i = 0; i < R->getN(); i++)
	{
		par = R->returnPar(i);
		for (int j = 0; j < R->getN(); j++)
		{
			if (i != j && par->getY() == R->returnPar(j)->getX() && par->getX() == R->returnPar(j)->getY())
			{
				return false;
			}
		}
	}
	return true;

}
bool determinarTransitividad(Relacion* R, Par* par, int* conjuntoA, int n)
{
	for (int i = 0; i < R->getN(); i++)
	{
		par = R->returnPar(i);
		for (int j = 0; j < R->getN(); j++)
		{
			if (i != j && par->getY() == R->returnPar(j)->getX())
			{
				bool encontrado = false;
				for (int k = 0; k < R->getN(); k++)
				{
					if (par->getX() == R->returnPar(k)->getX() && R->returnPar(j)->getY() == R->returnPar(k)->getY())
					{
						encontrado = true;
						break;
					}
				}
				if (encontrado == false)
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool determinarOrdenParcial(Relacion* R, Par* par, int* conjuntoA, int n)
{
	bool dR, dA, dT;
	dR = determinarReflexividad(R, par, conjuntoA, n);
	dA = determinarAntisimetria(R, par, conjuntoA, n);
	dT = determinarTransitividad(R, par, conjuntoA, n);
	if (dR == true && dA == true && dT == true)
	{
		return true;
	}
	else if (dR == false || dA == false || dT == false)
	{
		return false;
	}
}
