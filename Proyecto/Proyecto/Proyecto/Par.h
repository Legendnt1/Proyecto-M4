#pragma once
#include<string>
using namespace std;
class Par
{
private:
	int x, y;
public:
	Par(int x, int y);
	~Par();

	void setX(int x);
	void setY(int y);

	int getX();
	int getY();

	string mostrarPar();
};

Par::Par(int x = 0, int y = 0)
{
	this->x = x;
	this->y = y;
}

Par::~Par(){}

void Par::setX(int x) { this->x = x; }
void Par::setY(int y) { this->y = y; }


int Par::getX() { return this->x; }
int Par::getY() { return this->y; }

string Par::mostrarPar()
{
	string res = "";
	res += "(" + to_string(x) + " ; " + to_string(y) + ")";
	return res;
}

