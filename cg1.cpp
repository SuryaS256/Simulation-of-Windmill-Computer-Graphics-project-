

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
#include<string.h>
static GLfloat spin=360.0;/*fan rotation variable*/
static GLfloat u=0.45;
static GLfloat v=0.45;
static GLfloat w=0.45;
static GLfloat b=0.45;
static GLfloat c=0.00;
static GLfloat d=0.00;
static GLfloat e=0.00;
static GLfloat a=-40; /*clouds translation variable*/
static int z=0;
GLfloat x=0;
GLfloat y=0;
int m,n;
int f=0;
int k=0;
int i=0;

void init(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,150.0);
}

void declare(char *string)
{
     while(*string)
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string++);
}


void title()
{
     glColor3f(u,v,w);
     glRasterPos2f(0,13);
     declare("POWER HOUSE");
	 glRasterPos2f(20,13);
     declare("STREET LIGHT");
	 	

}
void title2()
{
     glColor3f(20,30,0);
     glRasterPos2f(0,13);
     declare("POWER HOUSE");
	 glRasterPos2f(20,13);
     declare("STREET LIGHT");

}

void streetlight()
{
	glPushMatrix();/*1st street light*/
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(28.0,-20.0,2.0);
	glVertex3f(29.0,-20.0,3.0);
	glVertex3f(29.0,10.0,4.0);
	glVertex3f(28.0,10.0,2.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_POLYGON);
	glVertex3f(26.0,6.0,2.0);
	glVertex3f(31.0,7.0,3.0);
	glVertex3f(31.0,6.0,4.0);
	glVertex3f(26.0,7.0,2.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glColor3f(b,b,b);
	glTranslatef(24.5,4.0,1.0);
	glRotatef(260,0,0,1);
	glScalef(1,3.5,1);
	glutSolidCube(2);
	glPopMatrix();
	glPushMatrix();/*2nd street light*/
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(16.1,-10.0,2.0);
	glVertex3f(16.9,-10.0,3.0);
	glVertex3f(16.9,14.0,4.0);
	glVertex3f(16.1,14.0,2.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_POLYGON);
	glVertex3f(14.5,12.0,2.0);
	glVertex3f(18.5,13.0,3.0);
	glVertex3f(18.5,12.0,4.0);
	glVertex3f(14.5,13.0,2.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glColor3f(b,b,b);
	glTranslatef(13.5,10.5,1.0);
	glRotatef(260,0,0,1);
	glScalef(1,3.5,1);
	glutSolidCube(1.5);
	glPopMatrix();
}
void background()
{
	glColor3f(0.0,0.1,0.0);
	glBegin(GL_POLYGON);//green ground
	glVertex2i(-250.0,-250.0);
	glVertex2i(250.0,-250.0);
	glVertex2i(250.0,0.0);
	glVertex2i(-250.0,0.0);
	glEnd();
	glColor3f(0.1 ,0.1,0.1);
	glBegin(GL_POLYGON);//mid night blue sky
	glVertex2i(-250.0,0.0);
	glVertex2i(-250.0,250.0);
	glVertex2i(250.0,250.0);
	glVertex2i(250.0,0.0);
	glEnd();

}
void fan1()
{
	glPushMatrix();
	glLoadIdentity();
	glColor3f(1,1,1);
	glTranslatef (-8.0,20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (8.0,-20.0, -2.0);
	glBegin(GL_TRIANGLES);/*1st fan*/
	glVertex3f(-8.0,20.0,2.0);
	glVertex3f(-12.0,16.0,3.0);
	glVertex3f(-12.0,18.0,4.0);
	glVertex3f(-8.0,20.0,2.0);
	glVertex3f(-4.0,24.0,3.0);
	glVertex3f(-4.0,22.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan2()
{
	glPushMatrix();
	glLoadIdentity();
	glTranslatef (-20.0, 20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (20.0, -20.0,-2.0);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);/*2nd fan*/
	glVertex3f(-20.0,20.0,2.0);
	glVertex3f(-25.0,17.0,3.0);
	glVertex3f(-25.0,19.0,4.0);
	glVertex3f(-20.0,20.0,2.0);
	glVertex3f(-15.0,23.0,3.0);
	glVertex3f(-15.0,21.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan3()
{
	glPushMatrix();
	glLoadIdentity();
	glTranslatef (-32.0, 20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (32.0, -20.0, -2.0);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);/*2nd fan*/
	glVertex3f(-32.0,20.0,2.0);
	glVertex3f(-36.0,16.0,3.0);
	glVertex3f(-36.0,18.0,4.0);
	glVertex3f(-32.0,20.0,2.0);
	glVertex3f(-28.0,24.0,3.0);
	glVertex3f(-28.0,22.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan4()
{
	glPushMatrix();
	glLoadIdentity();
	glColor3f(1,1,1);
	glTranslatef (28.0,25.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (-28.0,-25.0, -2.0);
	glBegin(GL_TRIANGLES);/*4th fan*/
	glVertex3f(28.0,25.0,2.0);
	glVertex3f(24.0,21.0,3.0);
	glVertex3f(24.0,23.0,4.0);
	glVertex3f(28.0,25.0,2.0);
	glVertex3f(32.0,29.0,3.0);
	glVertex3f(32.0,27.0,4.0);
	glEnd();
	glPopMatrix();
}
void wires()
{
	glColor3f(.7,.5,.7);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(1,0x00FF);
	glBegin(GL_LINES);
	glVertex2f(-8.0,7.0);
	glVertex2f(-32.0,7.0);
	glVertex2f(-8.0,10.0);
	glVertex2f(1.5,10.0);
	glVertex2f(26.5,7.0);
	glVertex2f(14.5,12.0);
	glVertex2f(31.0,7.0);
	glVertex2f(18.0,12.0);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
}
void powerstation()
{
	GLint ax=1.5,ay=8;
	glColor3f(1.0,0.25,0.1);
	glBegin(GL_POLYGON);//from tip(anti clkwise)
	glVertex2i(ax,ay);//a
	glVertex2i(ax-2,ay-2);//b
	glVertex2i(ax-2,ay-8);//c
	glVertex2i(ax+2,ay-8);//d
	glVertex2i(ax+2,ay-2);//e
	glEnd();
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);//roof (from a)
	glVertex2i(ax,ay+3);//a
	glVertex2i(ax-3,ay-3);//b
	glVertex2i(ax+3,ay-3);//e
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* door */
	glVertex2i(ax-1,ay-5.0);//top left
	glVertex2i(ax-1.0,ay-8.0);//bottom left
	glVertex2i(ax+1.0,ay-8.0);// bottom right
	glVertex2i(ax+1.0,ay-5.0);//top right
	glEnd();
}
void road()
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-1,0);
	glVertex2f(4,0);
	glVertex2f(43,-39);
	glVertex2f(37,-40);
	glEnd();
}
void clouds()
{
	glPushMatrix();
	glColor3f (0.4, 0.7,0.9);
   glLoadIdentity ();             /* clear the matrix */
           /* viewing transformation  */
   glTranslatef(a+1, 40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);  /* modeling transformation */
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-2.0,40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+18.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+25.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+36.0,40.0, -9.0);
   glScalef (3.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+50.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+56.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   
   glLoadIdentity();// moon in night time 
	glColor3f(1.0,1.0,1.0);
	glTranslatef(10.0,30.0, -9.0);//set the window position to draw moon 
	glScalef (2, 1.0, 1.0); 
	glutSolidSphere (1.5,40,45);//set the moon size
	glPopMatrix();
}

void clouds1()
{
	glPushMatrix();
	glColor3f (0.4, 0.7,0.9);
   glLoadIdentity ();             /* clear the matrix */
           /* viewing transformation  */
   glTranslatef(a+1, 40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);  /* modeling transformation */
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-2.0,40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+18.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+25.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+36.0,40.0, -9.0);
   glScalef (3.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+50.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+56.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   
   glLoadIdentity();// moon in night time 
	glColor3f(2.0,0.9,0.0);
	glTranslatef(10.0,30.0, -9.0);//set the window position to draw moon 
	glScalef (2, 1.0, 1.0); 
	glutSolidSphere (1.5,40,45);//set the moon size
	glPopMatrix();
}

void hut(GLint rux,GLint ruy,GLint rdx,GLint rdy)
{
	GLint blx=rdx,bly=rdy-9,brx=rdx+10,bry=rdy-9,kx=rdx-8,ky=rdy+1;
	GLfloat i;
	glColor3f(0.3,0.25,0.1);
	glBegin(GL_POLYGON);/* front wall */
	glVertex2i(rdx,rdy);//roof left
	glVertex2i(rdx+10,rdy);//roof right
	glVertex2i(brx,bry);//base right
	glVertex2i(blx,bly);//base left
	glEnd();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_POLYGON);/* side wall */
	glVertex2i(rux,ruy);//roof up
	glVertex2i(kx,ky);//bacK
	glVertex2i(kx,ky-6);//bacK base
	glVertex2i(blx,bly);
	glVertex2i(rdx,rdy);
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* window */
	glVertex2i(kx+2,ky-2.5);//top left
	glVertex2i(kx+2,ky-5.5);//bottom left
	glVertex2i(blx-3,bly+3.5);//bottom right
	glVertex2i(blx-3,bly+6.9);//top right
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* door */
	glVertex2i(blx+3.5,bly+5);//top left
	glVertex2i(blx+3.5,bly);//bottom left
	glVertex2i(brx-3.5,bry);//bottom right
	glVertex2i(brx-3.5,bry+5);//top right
	glEnd();


	//roof
	glPushMatrix();
	glColor3f(0.5,0.25,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(rux,ruy);//roof up
		glVertex2i(rdx,rdy);//roof left
		glVertex2i(rdx+10,rdy);//roof right
	glVertex2i(rux+10,ruy);
	glEnd();
	glPopMatrix();
	
}
void fanpole1()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-8.1,20.0);
	glVertex2f(-7.9,20.0);
	glVertex2f(-7.5,0.0);
	glVertex2f(-8.5,0.0);
	
	glEnd();
}
void fanpole2()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-20.1,20.0);
	glVertex2f(-19.9,20.0);
	
	glVertex2f(-19.5,0.0);
	glVertex2f(-20.5,0.0);
	glEnd();
}
void fanpole3()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-32.1,20.0);
	glVertex2f(-31.9,20.0);
	
	glVertex2f(-31.5,0.0);
	glVertex2f(-32.5,0.0);
	glEnd();
}
void fanhouse()
{   GLint ax=28,ay=30;
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);//from tip(anti clkwise)
	glVertex2i(ax,ay);//a
	glVertex2i(ax-3,ay-2);//b
	glVertex2i(ax-3,ay-9);//c
	glVertex2i(ax+3,ay-9);//d
	glVertex2i(ax+3,ay-2);//e
	glEnd();
	glColor3f(0.0,0.3,0.3);
	glBegin(GL_POLYGON);//roof (from a)
	glVertex2i(ax,ay+3);//a
	glVertex2i(ax-4,ay-3);//b
	glVertex2i(ax+4,ay-3);//e
	glEnd();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(30.1,21.0);
	glVertex2f(29.9,21.0);
	glVertex2f(30.5,0.0);
	glVertex2f(29.5,0.0);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(26.1,21.0);
	glVertex2f(25.9,21.0);
	glVertex2f(26.5,0.0);
	glVertex2f(25.5,0.0);
	glEnd();
	glColor3f(0.0,0.3,0.3);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(30.0,22.0);
	glVertex2f(29.5,22.0);
	glVertex2f(29.0,19.0);
	glVertex2f(28.5,19.0);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(26.5,22.0);
	glVertex2f(26.0,22.0);
	glVertex2f(25.5,19.0);
	glVertex2f(25.0,19.0);
	glEnd();
	glColor3f(0,0,d);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(1,0x00FF);
	glBegin(GL_LINES);
	glVertex2f(25.5,19.0);
	glVertex2f(25.5,-1.0);
	glVertex2f(25.0,19.0);
	glVertex2f(25.0,-1.0);
	glVertex2f(25.25,19.0);
	glVertex2f(25.25,-1.0);
	glEnd();
	glColor3f(0,0,e);
	glBegin(GL_LINES);
	glVertex2f(28.5,19.0);
	glVertex2f(28.5,-1.0);
	glVertex2f(29.0,19.0);
	glVertex2f(29.0,-1.0);
	glVertex2f(28.75,19.0);
	glVertex2f(28.75,-1.0);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
	glVertex2f(25.0,-1.0);
	glVertex2f(29.5,-1.0);
	glVertex2f(29.5,-2.0);
	glVertex2f(25.0,-2.0);
	glEnd();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(24.5,-1.0);
	glVertex2f(25.0,-1.0);
	glVertex2f(25.0,-2.0);
	glVertex2f(24.5,-2.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(24.5,-2.0);
	glVertex2f(30.0,-2.0);
	glVertex2f(30.0,-3.0);
	glVertex2f(24.5,-3.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(29.5,-1.0);
	glVertex2f(30.0,-1.0);
	glVertex2f(30.0,-2.0);
	glVertex2f(29.5,-2.0);
	glEnd();
}
void background1()//for day mode
{
	glColor3f(0.0,0.9,0.0);
	glBegin(GL_POLYGON);//green ground
	glVertex2i(-250.0,-250.0);
	glVertex2i(250.0,-250.0);
	glVertex2i(250.0,0.0);
	glVertex2i(-250.0,0.0);
	glEnd();
	glColor3f(0.30 ,0.30,1.0);
	glBegin(GL_POLYGON);// blue sky
	glVertex2i(-250.0,0.0);
	glVertex2i(-250.0,250.0);
	glVertex2i(250.0,250.0);
	glVertex2i(250.0,0.0);
	glEnd();
	
}
void clo(void) //cloud movement
{
	 a=a+0.1;
        if(a>40)
	 a-=100.0;
	 
}
void streetlight1()//for day mode
{
	glPushMatrix();	//1st street light
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(28.0,-20.0,2.0);
	glVertex3f(29.0,-20.0,3.0);
	glVertex3f(29.0,10.0,4.0);
	glVertex3f(28.0,10.0,2.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_POLYGON);
	glVertex3f(26.0,6.0,2.0);
	glVertex3f(31.0,7.0,3.0);
	glVertex3f(31.0,6.0,4.0);
	glVertex3f(26.0,7.0,2.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glColor3f(b,b,b);
	glTranslatef(24.5,4.0,1.0);
	glRotatef(260,0,0,1);
	glScalef(1,3.5,1);
	glutSolidCube(2);
	glPopMatrix();
	

	glPushMatrix();//2nd street light
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(16.1,-10.0,2.0);
	glVertex3f(16.9,-10.0,3.0);
	glVertex3f(16.9,14.0,4.0);
	glVertex3f(16.1,14.0,2.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_POLYGON);
	glVertex3f(14.5,12.0,2.0);
	glVertex3f(18.5,13.0,3.0);
	glVertex3f(18.5,12.0,4.0);
	glVertex3f(14.5,13.0,2.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	//glColor3f(b,b,b);
	glTranslatef(13.5,10.5,1.0);
	glRotatef(260,0,0,1);
	glScalef(1,3.5,1);
	glutSolidCube(1.5);
	glPopMatrix();
	
}



void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);





	if(k==1)
	{
	background1();
	fanhouse();
	title2();
	road();
	hut(-29,-23,-24,-33);
	hut(0,-11,5,-21);
	hut(-21,-1,-14,-11);
	clouds1();
	powerstation();
	clo();
	wires();
	streetlight1();
	

	fanpole1();
	fanpole2();
	fanpole3();


	fan1();
	fan2();
	fan3();
	fan4();
	glutSwapBuffers();
	glFlush();
	}
	else
	{
			background();
	fanhouse();
	title();
	road();
	hut(-29,-23,-24,-33);
	hut(0,-11,5,-21);
	hut(-21,-1,-14,-11);
	clouds();
	powerstation();
	clo();
	wires();
	streetlight();
	
		fanpole1();
	fanpole2();
	fanpole3();


	fan1();
	fan2();
	fan3();
	fan4();
	glutSwapBuffers();
	if(f==0)
		{
			glFlush();
		}
	}
}
void mykey(unsigned char key,int m,int n)
{
   
    //if(key=='W' || key=='w') y+=.1,x-=0.1;//man move front
	//if(key=='P' || key=='p') y-=.1,x+=0.1;//man move back

	if(key=='d' || key=='D')
	{
		f=1;
		k=1;
		display();
		
	}
      if(key=='n' || key=='N')
	{
		f=0;
		k=0;
		display();
		
	}
	if(key=='v' || key=='V')
		glutDisplayFunc(display);


	
	


	glutPostRedisplay();
}

void spinclockwise(void)
{
	w=0.3;u=0;v=1;b=0.5;c=1;d=1;e=0;
	 
	 spin=spin-1.0;
	 if(spin<0)
	spin=spin+360.0;

	glutPostRedisplay();

 }

void anticlockwise(void )
{
	u=0;w=.3;v=1;b=0.5;c=1;d=1,e=0;
	 
         if(spin==360.0)
	spin=spin-360;
	spin=spin+1.0;
	if(spin>360.0)
         spin=spin-360.0;
	glutPostRedisplay();

}
void spinclockwise1(void)
{
	u=0;w=.4;v=1;b=1;c=0.0;d=e=1;
	 
	spin=spin-10.0;
	if(spin<0)
          spin=spin+360.0;
	glutPostRedisplay();
}
void anticlockwise1(void )
{
	u=0;w=.4;v=1;b=1;c=0.0;d=e=1;
	 
   if(spin==360.0)
	   spin=spin-360;
	spin=spin+10.0;
	if(spin>360.0)
		spin=spin-360.0;
	glutPostRedisplay();
}
void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-35.0, 35.0, -45.0, 45.0, -20.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
void menu(int id )
{
	switch(id)
	{
	case 1: u=v=w=b=0.45;c=d=e=1;
			glutIdleFunc(display);
			break;
	case 2: glutIdleFunc(spinclockwise);
			break;
	case 3: glutIdleFunc(anticlockwise);
			break;
	case 4: glutIdleFunc(spinclockwise1);
			break;
	case 5: glutIdleFunc(anticlockwise1);
			break;
	case 6:exit(0);
	}
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("WIND MILL");
	init();
	//frontinit();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(mykey);
	//init();
	//init();
	//glutDisplayFunc(display);
	//glutReshapeFunc(reshape);
	
	
	//init();
	

	glutCreateMenu(menu);
	glutAddMenuEntry("No Wind",1);
	glutAddMenuEntry("Wind CW",2);
	glutAddMenuEntry("Wind ACW",3);
	glutAddMenuEntry ("Fast Wind CW",4);
	glutAddMenuEntry("Fast Wind ACW",5);
	glutAddMenuEntry("Quit",6);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
	return 0;
}

