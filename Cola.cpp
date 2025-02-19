#include "Cola.h"

void Cola::DibujarCola(float Angulo, int n,float x, float y, float z) 
{

	glPushMatrix();
	glTranslatef(x, y, z);

	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0); glPushMatrix();
	glScalef(2.0, 0.4, 1.0);
	glutSolidCube(1.0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3.0, 0.0, 0.0);
	for (int i = 0; i < n; i++) 
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.0, 0.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.0, -1.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(5.0, -3.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7.0, -5.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8.0, -4.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(10.0, -4.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(12.0, -3.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(14.0, -4.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-1.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}
	glPopMatrix();

	for (int i = 0; i < n; i++)
	{
		glTranslatef(-2.0, 1.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(2.0, 1.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glTranslatef(-3.0, 0.0, 0.0);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(3.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(3.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();


	}


	glPopMatrix();
}
