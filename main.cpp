#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include <stdlib.h>
# define M_PI 3.142
void border();
void tree1();
void color();
void tree2();
void circle1(GLfloat x,GLfloat y,GLfloat radius);
void moon2();
void sun1();
void sun2();

void daycolorchange(void);
void modifynight();

void menu(int id) //creating the menu for the day , night and to quit the result window
{
	int n=0;
	while(n<1)
	{
	switch(id)
	{
	case 1:exit(0);// to exit from the result screen
		break;
	case 2:moon2();// to show the night time
	    break;
	case 3:sun2();// to show the day time
		break;

	}
	n++;
	}
}


void border()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
      glBegin(GL_LINE_STRIP);
	  glVertex2f(1000,400);
	  glVertex2f(800,400);
	  glEnd();

	glBegin(GL_LINE_STRIP);//mountain lines
	  glVertex2f(400,400);
	  glVertex2f(200,400);
	  glEnd();


	glBegin(GL_LINE_STRIP);//mountain lines
	  glVertex2f(75,400);
	  glVertex2f(0,400);
	  glEnd();
	glBegin(GL_LINE_STRIP);//mountain lines
	glVertex2f(0,400);
	glVertex2f(250,700);
	glVertex2f(420,500);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(700,650);
	glVertex2f(750,700);
	glVertex2f(1000,400);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(350,225);
	glVertex2f(350,50);
	glVertex2f(600,50);
	glVertex2f(600,225);
	glEnd();
	 glBegin(GL_LINE_LOOP);//front roof
	 glVertex2f(400,300);
	 glVertex2f(325,225);
	 glVertex2f(625,225);
	 glVertex2f(550,300);
	glEnd();
	  glBegin(GL_LINE_LOOP);//front wall containing window
	  glVertex2f(400,300);
	  glVertex2f(550,300);
	  glVertex2f(550,425);
	  glVertex2f(400,425);
	  glEnd();
	   glBegin(GL_LINE_STRIP);//roof railing
	   glVertex2f(390,475);
	   glVertex2f(585,650);
	   glVertex2f(585,600);
	   glVertex2f(450,475);
	   glEnd();
	    glBegin(GL_LINE_STRIP);
		glVertex2f(550,425);
		glVertex2f(550,300);
		glVertex2f(725,475);//top side wall
		glVertex2f(725,600);
		glEnd();
		 glBegin(GL_LINE_STRIP);
		 glVertex2f(600,225);//side wall
		 glVertex2f(600,50);
		 glVertex2f(800,250);
		 glVertex2f(800,420);
		 glEnd();
		  glBegin(GL_LINE_LOOP);
		  glVertex2f(550,300);//side roof
		  glVertex2f(725,475);
		  glVertex2f(800,420);
		  glVertex2f(625,225);
		  glEnd();

		   glBegin(GL_LINE_LOOP);
		   glVertex2f(390,425);
		   glVertex2f(390,475);
		   glVertex2f(560,475);//top roof
		   glVertex2f(560,425);
		   glEnd();
		   glBegin(GL_LINE_LOOP);
		   glVertex2f(560,475);//top roof
		   glVertex2f(730,650);
		   glVertex2f(730,600);
		   glVertex2f(560,425);
		   glEnd();
		   glBegin(GL_LINE_STRIP);//top roof
		   glVertex2f(585,650);
		   glVertex2f(730,650);
		  		   glEnd();
				   glBegin(GL_LINE_STRIP);
				   glVertex2f(585,600);//top roof
				   glVertex2f(685,600);
				   glEnd();
				   glBegin(GL_LINE_LOOP);
				   glVertex2f(425,350);//top window
				   glVertex2f(425,400);
				   glVertex2f(510,400);
				   glVertex2f(510,350);
				   glEnd();
				   glBegin(GL_LINE_STRIP);
				   glVertex2f(425,50);//door
				   glVertex2f(425,150);
				   glVertex2f(525,150);
				   glVertex2f(525,50);
				   glEnd();
				   tree1();
				   glFlush();
				   glutSwapBuffers();


}



void circle1(GLfloat x, GLfloat y, GLfloat radius)
  {
    float angle;
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
	{
        angle = i*2*(M_PI/100);
        glVertex2f(x+(cos(angle)*radius),y+(sin(angle)*radius));
    }
    glEnd();
  }

void tree1()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(100,250);
	glVertex2f(175,250);
	glVertex2f(175,75);
	glVertex2f(100,75);
	glEnd();
    glBegin(GL_LINE_STRIP);
	glVertex2f(100,250);
	glVertex2f(0,250);
	glVertex2f(75,350);
    glVertex2f(25,350);
    glVertex2f(100,425);
glVertex2f(50,425);
glVertex2f(140,500);
glVertex2f(225,425);
glVertex2f(175,425);
glVertex2f(250,350);
glVertex2f(200,350);
glVertex2f(275,250);
glVertex2f(175,250);
glEnd();
}


void tree2()
{
	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(100,250);
	glVertex2f(175,250);
	glVertex2f(175,75);
	glVertex2f(100,75);
	glEnd();
	glColor3f(0.0,0.3,0.01);

	glBegin(GL_POLYGON);
	glVertex2f(100,250);
	glVertex2f(0,250);
	glVertex2f(75,350);
glVertex2f(25,350);
glVertex2f(100,425);
glVertex2f(50,425);
glVertex2f(140,500);
glVertex2f(225,425);
glVertex2f(175,425);
glVertex2f(250,350);
glVertex2f(200,350);
glVertex2f(275,250);
glVertex2f(175,250);
glEnd();
}
void moon1(void);
void nightmode()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);

	glVertex2f(1000,400);
	glVertex2f(1000,1000);
	glVertex2f(0,1000);
	glEnd();//blue backround
	glColor3f(0.0,0.4,0.0);
	glBegin(GL_POLYGON);//ground color
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,0);
	glVertex2f(0,0);
	glEnd();
	glColor3f(1.0,1.0,1.0);
    circle1(50.0,700.0,2.0);
	circle1(150.0,750.0,1.0);
	circle1(550.0,800.0,1.0);
	circle1(600.0,750.0,1.0);
	circle1(450.0,600.0,1.0);
	//circle1(800.0,900.0,2.0);
	circle1(400.0,850.0,2.0);//exxtra
	//circle1(950.0,750.0,2.0);
	circle1(350.0,850.0,1.0);
	circle1(55.0,850.0,2.0);
circle1(65.0,900.0,2.0);
circle1(400.0,650.0,1.0);
circle1(200.0,800.0,2.0);


	glColor3f(0.2,0.1,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);//mountain
	glVertex2f(250,700);
	glVertex2f(500,400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(500,400);
	glVertex2f(750,700);
	glVertex2f(1000,400);
	glEnd();
glColor3f(0.7,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(350,225);//*front wall*//
	glVertex2f(350,50);
	glVertex2f(600,50);
	glVertex2f(600,225);
	glEnd();
	glColor3f(0.3,0.0,0.0);
	 glBegin(GL_POLYGON);//front roof
	 glVertex2f(400,300);
	 glVertex2f(325,225);
	 glVertex2f(625,225);
	 glVertex2f(550,300);
	 glEnd();
	 glColor3f(0.7,0.6,0.6);
	  glBegin(GL_POLYGON);
	  glVertex2f(400,300);
	  glVertex2f(550,300);
	  glVertex2f(550,425);//top wall
	  glVertex2f(400,425);
	  glEnd();
	  glColor3f(0.3,0.0,0.0);
	   glBegin(GL_POLYGON);
	   glVertex2f(390,475);//roof
	   glVertex2f(585,650);
	   glVertex2f(585,600);
	   glVertex2f(450,475);
	   glEnd();
	   glColor3f(0.2,0.3,0.3);//top of roof
	   glBegin(GL_POLYGON);
	   glVertex2f(450,475);
	   glVertex2f(585,600);
	   glVertex2f(690,600);
	   glVertex2f(560,475);
	   glEnd();
	   glColor3f(0.7,0.5,0.5);
	    glBegin(GL_POLYGON);
		glVertex2f(550,425);
		glVertex2f(550,300);
		glVertex2f(725,475);//top side wall
		glVertex2f(725,600);
		glEnd();
		glColor3f(0.7,0.5,0.5);
		 glBegin(GL_POLYGON);
		 glVertex2f(600,225);//side wall
		 glVertex2f(600,50);
		 glVertex2f(800,250);
		 glVertex2f(800,420);
		 glEnd();
		 glColor3f(0.3,0.0,0.0);
		  glBegin(GL_POLYGON);
		  glVertex2f(550,300);//side roof
		  glVertex2f(725,475);
		  glVertex2f(810,420);
		  glEnd();
		  glColor3f(0.3,0.0,0.0);
		  glBegin(GL_POLYGON);//part of side roof
		  glVertex2f(600,223);
		  glVertex2f(550,300);
		  glVertex2f(810,420);
		  glEnd();
		  glColor3f(0.3,0.0,0.0);
		  glBegin(GL_POLYGON);
		  glVertex2f(585,650);
		  glVertex2f(585,600);
		  glVertex2f(700,600);
		  glVertex2f(730,650);
		  glEnd();
         glColor3f(0.3,0.0,0.0);
		   glBegin(GL_POLYGON);
		   glVertex2f(390,425);
		   glVertex2f(390,475);
		   glVertex2f(560,475);//top roof
		   glVertex2f(560,425);
		   glEnd();
		   glColor3f(0.3,0.0,0.0);
		   glBegin(GL_POLYGON);
		   glVertex2f(560,475);//top roof
		   glVertex2f(730,650);
		   glVertex2f(730,600);
		   glVertex2f(560,425);
		   glEnd();
		   glColor3f(0.3,0.0,0.0);
		   glBegin(GL_POLYGON);//top roof
		   glVertex2f(585,650);
		   glVertex2f(730,650);
		  		   glEnd();
				   glColor3f(0.3,0.0,0.0);
				   glBegin(GL_POLYGON);
				   glVertex2f(585,600);//top roof
				   glVertex2f(685,600);
				   glEnd();

				   glBegin(GL_POLYGON);
				   glVertex2f(425,350);//top window
				   glVertex2f(425,400);
				   glVertex2f(510,400);
				   glVertex2f(510,350);
				   glEnd();
				   glBegin(GL_POLYGON);
				   glVertex2f(425,50);//door
				   glVertex2f(425,150);
				   glVertex2f(525,150);
				   glVertex2f(525,50);
				   glEnd();


				   tree2();


				   }


void daycolorchange()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	/*sky*/
    glColor3f(0.4,0.7,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,1000);
	glVertex2f(0,1000);
	glEnd();
	/*ground*/
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,0);
	glVertex2f(0,0);
	glEnd();
	/*hills*/
	glColor3f(0.3,0.1,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(250,700);
	glVertex2f(500,400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(500,400);
	glVertex2f(750,700);
	glVertex2f(1000,400);
	glEnd();
	/*1floor front wall*/
    glColor3f(0.8,0.8,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(350,225);
	glVertex2f(350,50);
	glVertex2f(600,50);
	glVertex2f(600,225);
	glEnd();
	/*1floor roof*/
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(400,300);
	glVertex2f(325,225);
	glVertex2f(625,225);
	glVertex2f(550,300);
	glEnd();
	/*2floor front wall*/
	glColor3f(0.8,0.8,0.4);
    glBegin(GL_POLYGON);
	glVertex2f(400,300);
    glVertex2f(550,300);
	glVertex2f(550,425);
	glVertex2f(400,425);
	glEnd();
	/*roof*/
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(390,475);
	glVertex2f(585,650);
	glVertex2f(585,600);
	glVertex2f(450,475);
	glEnd();
	/*top of roof*/
	glColor3f(0.4,0.4,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(450,475);
	glVertex2f(585,600);
	glVertex2f(690,600);
	glVertex2f(560,475);
	glEnd();
	/*top side wall*/
	glColor3f(0.7,0.7,0.32);
	glBegin(GL_POLYGON);
	glVertex2f(550,425);
	glVertex2f(550,300);
	glVertex2f(725,475);
	glVertex2f(725,600);
	glEnd();
	/*bottom side wall*/
	glColor3f(0.7,0.7,0.32);
	glBegin(GL_POLYGON);
	glVertex2f(600,225);
	glVertex2f(600,50);
	glVertex2f(800,250);
	glVertex2f(800,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(550,300);//side roof
	glVertex2f(725,475);
	glVertex2f(810,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);//part of side roof
	glVertex2f(600,223);
	glVertex2f(550,300);
	glVertex2f(810,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(585,650);
	glVertex2f(585,600);
	glVertex2f(700,600);
	glVertex2f(730,650);
	glEnd();
    glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(390,425);
	glVertex2f(390,475);
	glVertex2f(560,475);
	glVertex2f(560,425);
	glEnd()
	/*top roof*/;
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(560,475);
	glVertex2f(730,650);
	glVertex2f(730,600);
	glVertex2f(560,425);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);//top roof
	glVertex2f(585,650);
	glVertex2f(730,650);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(585,600);//top roof
    glVertex2f(685,600);
	glEnd();
	/*window*/

	glBegin(GL_POLYGON);
	glVertex2f(425,350);
	glVertex2f(425,400);
	glVertex2f(510,400);
	glVertex2f(510,350);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(425,50);//door
	glVertex2f(425,150);
	glVertex2f(525,150);
	glVertex2f(525,50);
	glEnd();
	tree2();
	//glColor3f(1.0,1.0,0.0);
	//circle1(500.0,800.0,35.0);//sun
	glColor3f(0.5,0.5,0.5);
	circle1(850.0,800.0,20.0);
	circle1(875.0,790.0,30.0);
	circle1(910.0,793.0,40.0);
    circle1(950.0,790.0,30.0);
	glColor3f(1.0,1.0,0.0);




 }

 void nightcolorchange()
 {

 glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);

	glVertex2f(1000,400);
	glVertex2f(1000,1000);
	glVertex2f(0,1000);
	glEnd();//blue backround
	glColor3f(0.0,0.4,0.0);
	glBegin(GL_POLYGON);//ground color
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,0);
	glVertex2f(0,0);
	glEnd();
	glColor3f(1.0,1.0,1.0);
    circle1(50.0,700.0,2.0);
	circle1(150.0,750.0,1.0);
	circle1(550.0,800.0,1.0);
	circle1(600.0,750.0,1.0);
	circle1(450.0,600.0,1.0);
	//circle1(800.0,900.0,2.0);
	circle1(400.0,850.0,2.0);//exxtra
	//circle1(950.0,750.0,2.0);
	circle1(350.0,850.0,1.0);
	circle1(55.0,850.0,2.0);
circle1(65.0,900.0,2.0);
circle1(400.0,650.0,1.0);
circle1(200.0,800.0,2.0);


	glColor3f(0.2,0.1,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);//mountain
	glVertex2f(250,700);
	glVertex2f(500,400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(500,400);
	glVertex2f(750,700);
	glVertex2f(1000,400);
	glEnd();
glColor3f(0.8,0.8,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(350,225);//*front wall*//
	glVertex2f(350,50);
	glVertex2f(600,50);
	glVertex2f(600,225);
	glEnd();
	glColor3f(0.3,0.0,0.0);
	 glBegin(GL_POLYGON);//front roof
	 glVertex2f(400,300);
	 glVertex2f(325,225);
	 glVertex2f(625,225);
	 glVertex2f(550,300);
	 glEnd();
	 glColor3f(0.8,0.8,0.4);
	  glBegin(GL_POLYGON);
	  glVertex2f(400,300);
	  glVertex2f(550,300);
	  glVertex2f(550,425);//top wall
	  glVertex2f(400,425);
	  glEnd();
	  glColor3f(0.3,0.0,0.0);
	   glBegin(GL_POLYGON);
	   glVertex2f(390,475);//roof
	   glVertex2f(585,650);
	   glVertex2f(585,600);
	   glVertex2f(450,475);
	   glEnd();
	   glColor3f(0.2,0.3,0.3);//top of roof
	   glBegin(GL_POLYGON);
	   glVertex2f(450,475);
	   glVertex2f(585,600);
	   glVertex2f(690,600);
	   glVertex2f(560,475);
	   glEnd();
	   glColor3f(0.7,0.7,0.32);
	    glBegin(GL_POLYGON);
		glVertex2f(550,425);
		glVertex2f(550,300);
		glVertex2f(725,475);//top side wall
		glVertex2f(725,600);
		glEnd();
		glColor3f(0.7,0.7,0.32);
		 glBegin(GL_POLYGON);
		 glVertex2f(600,225);//side wall
		 glVertex2f(600,50);
		 glVertex2f(800,250);
		 glVertex2f(800,420);
		 glEnd();
		 glColor3f(0.3,0.0,0.0);
		  glBegin(GL_POLYGON);
		  glVertex2f(550,300);//side roof
		  glVertex2f(725,475);
		  glVertex2f(810,420);
		  glEnd();
		  glColor3f(0.3,0.0,0.0);
		  glBegin(GL_POLYGON);//part of side roof
		  glVertex2f(600,223);
		  glVertex2f(550,300);
		  glVertex2f(810,420);
		  glEnd();
		  glColor3f(0.3,0.0,0.0);
		  glBegin(GL_POLYGON);
		  glVertex2f(585,650);
		  glVertex2f(585,600);
		  glVertex2f(700,600);
		  glVertex2f(730,650);
		  glEnd();
         glColor3f(0.3,0.0,0.0);
		   glBegin(GL_POLYGON);
		   glVertex2f(390,425);
		   glVertex2f(390,475);
		   glVertex2f(560,475);//top roof
		   glVertex2f(560,425);
		   glEnd();
		   glColor3f(0.3,0.0,0.0);
		   glBegin(GL_POLYGON);
		   glVertex2f(560,475);//top roof
		   glVertex2f(730,650);
		   glVertex2f(730,600);
		   glVertex2f(560,425);
		   glEnd();
		   glColor3f(0.3,0.0,0.0);
		   glBegin(GL_POLYGON);//top roof
		   glVertex2f(585,650);
		   glVertex2f(730,650);
		  		   glEnd();
				   glColor3f(0.3,0.0,0.0);
				   glBegin(GL_POLYGON);
				   glVertex2f(585,600);//top roof
				   glVertex2f(685,600);
				   glEnd();

				   glBegin(GL_POLYGON);
				   glVertex2f(425,350);//top window
				   glVertex2f(425,400);
				   glVertex2f(510,400);
				   glVertex2f(510,350);
				   glEnd();
				   glBegin(GL_POLYGON);
				   glVertex2f(425,50);//door
				   glVertex2f(425,150);
				   glVertex2f(525,150);
				   glVertex2f(525,50);
				   glEnd();


				   tree2();

				   }

GLfloat p=120.0,q=700.0;
void movesun()
{
	//glColor3f(1.0,1.0,0.0);
	//circle1(120.0,700.0,30.0);
     if(p<500.0)
	 {
		p=p+20;
		                 q=q+10;

	circle1(p,q,30.0);
	glFlush();
                       	glutSwapBuffers();
	 }
	 else if(p<900)
	 {
		 p=p+20;
		 q=q-0.2;

	circle1(p,q,30.0);
	glFlush();
        glutSwapBuffers();
	 }

	else if(p>800.0||q>900)
	{
		p=120.0;
		q=700.0;

	circle1(p,q,30.0);
	glFlush();
        glutSwapBuffers();

	}

	}





void keys(unsigned char key,int x,int y)
{
	if(key=='b'||key=='B')
		border();
	else if(key=='d'||key=='D')
		sun1();
	else if(key=='n'||key=='N')
		moon1();
	else if(key=='m')
	{    nightmode();
		modifynight();
	}
	else if(key=='M')
	{
  nightcolorchange();
  modifynight();
	}
	else if(key=='S')
	{
		daycolorchange();
		movesun();

	}


}
void sun2()
{
	daycolorchange();
	glColor3f(1.0,1.0,0.0);
	circle1(120.0,700.0,30.0);
	glFlush();
	glutSwapBuffers();
}


void moon2()
{
	nightcolorchange();
	glColor3f(1.0,1.0,1.0);
				   circle1(800.0,850.0,30.0);
				   glColor3f(0.0,0.0,0.0);
				   circle1(790.0,860.0,30.0);
				   glFlush();
				   glutSwapBuffers();
}

void moon1()
{
	nightmode();
	glColor3f(1.0,1.0,1.0);
				   circle1(800.0,850.0,30.0);
				   glColor3f(0.0,0.0,0.0);
				   circle1(790.0,860.0,30.0);
				   glFlush();
				   glutSwapBuffers();
}
void sun1()
{
    color();
	glColor3f(1.0,1.0,0.0);
	circle1(120.0,700.0,30.0);
	glFlush();
	glutSwapBuffers();
}

void color()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	/*sky*/
    glColor3f(0.4,0.7,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,1000);
	glVertex2f(0,1000);
	glEnd();
	/*ground*/
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,0);
	glVertex2f(0,0);
	glEnd();
	/*hills*/
	glColor3f(0.3,0.1,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(250,700);
	glVertex2f(500,400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(500,400);
	glVertex2f(750,700);
	glVertex2f(1000,400);
	glEnd();
	/*1floor front wall*/
    glColor3f(0.7,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(350,225);
	glVertex2f(350,50);
	glVertex2f(600,50);
	glVertex2f(600,225);
	glEnd();
	/*1floor roof*/
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(400,300);
	glVertex2f(325,225);
	glVertex2f(625,225);
	glVertex2f(550,300);
	glEnd();
	/*2floor front wall*/
	glColor3f(0.7,0.6,0.6);
    glBegin(GL_POLYGON);
	glVertex2f(400,300);
    glVertex2f(550,300);
	glVertex2f(550,425);
	glVertex2f(400,425);
	glEnd();
	/*roof*/
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(390,475);
	glVertex2f(585,650);
	glVertex2f(585,600);
	glVertex2f(450,475);
	glEnd();
	/*top of roof*/
	glColor3f(0.6,0.5,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(450,475);
	glVertex2f(585,600);
	glVertex2f(690,600);
	glVertex2f(560,475);
	glEnd();
	/*top side wall*/
	glColor3f(0.7,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(550,425);
	glVertex2f(550,300);
	glVertex2f(725,475);
	glVertex2f(725,600);
	glEnd();
	/*bottom side wall*/
	glColor3f(0.7,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(600,225);
	glVertex2f(600,50);
	glVertex2f(800,250);
	glVertex2f(800,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(550,300);//side roof
	glVertex2f(725,475);
	glVertex2f(810,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);//part of side roof
	glVertex2f(600,223);
	glVertex2f(550,300);
	glVertex2f(810,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(585,650);
	glVertex2f(585,600);
	glVertex2f(700,600);
	glVertex2f(730,650);
	glEnd();
    glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(390,425);
	glVertex2f(390,475);
	glVertex2f(560,475);
	glVertex2f(560,425);
	glEnd()
	/*top roof*/;
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(560,475);
	glVertex2f(730,650);
	glVertex2f(730,600);
	glVertex2f(560,425);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);//top roof
	glVertex2f(585,650);
	glVertex2f(730,650);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(585,600);//top roof
    glVertex2f(685,600);
	glEnd();
	/*window*/

	glBegin(GL_POLYGON);
	glVertex2f(425,350);
	glVertex2f(425,400);
	glVertex2f(510,400);
	glVertex2f(510,350);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(425,50);//door
	glVertex2f(425,150);
	glVertex2f(525,150);
	glVertex2f(525,50);
	glEnd();
	tree2();
	glColor3f(1.0,1.0,0.0);

	glColor3f(0.5,0.5,0.5);


	glColor3f(1.0,1.0,0.0);

}
GLint i=0;
GLfloat a=800.0,b=850.0,d=800.0,e=850.0;

GLint m=0,n=0,f=30.0;

void modifynight()
{
	glColor3f(1.0,1.0,1.0);
	circle1(a,b,30.0);
	glColor3f(0.0,0.0,0.0);
	circle1(d,e,f);
	//glTranslated(80.0,90.0,0.0);
	  e=e+10.0;
	  d=d-10.0;

    if(d<700||e>900)
	{
		f=f+15.0;
		d=820.0;
		e=900.0;//d=800;
		//e=850.0;
		if(f>85.0)
		{
			f=30.0;
			d=800.0;
			e=850.0;
		}

	}
	glFlush();
	glutSwapBuffers();

}

void init()
{
	glClearColor(0.0,0.0,0.0,1.0);
	glColor3f(1.0,1.0,1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,999.0);
}

int main( int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("day-night color");
	glutDisplayFunc(border);
	glutKeyboardFunc(keys);

	glutCreateMenu(menu);
	glutAddMenuEntry("quit",1);
	glutAddMenuEntry("night color change",2);
	glutAddMenuEntry("day color change",3);


	glutAttachMenu(GLUT_RIGHT_BUTTON);
	menu(GLUT_LEFT_BUTTON);
	init();
	glutMainLoop();
}

