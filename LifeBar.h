#include "Position.cpp"
#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#define standardWidth 300
#define standardHeight 30

using namespace std;

class LifeBar{
private:
	Position position;
	int max;
	int life;
	float red;
	float green;
	float blue;
	float width;
	float height;

public:
	/*Constructors and destructors*/
	LifeBar();
	LifeBar( int );
	LifeBar( int, int );
	~LifeBar();

	/*Getters*/
	int getLife();
	int getMax();
	float getColorR();
	float getColorG();
	float getColorB();
	Position getPosition();

	/*Setters*/
	void setColor3f( float, float,float );
	void setColorAuto();
	void setPosition( float, float );
	void setLife( int );
	void setMaxLife( int );
	void setWidth( float );
	void setHeight( float );

	/*Class methods*/
	void draw();

};
