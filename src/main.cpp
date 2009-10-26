#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <vector>
#include <unistd.h>
#include <math.h>
#include "square.hpp"
using namespace std;

void display(void);
void reshape(int w, int h);
void random_point();
void motion(int, int);

float xx = 0;
float yy = 0;

int main(int argc, char **argv){

   glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(200, 200);
  glutInitWindowPosition(100,100);
  glutCreateWindow("random point");
  glutDisplayFunc(display);
  //glutIdleFunc(display);
  glutReshapeFunc(reshape);
  glutMainLoop();
  return 0;
}


void display (void) {
    glClearColor (0.0,0.0,0.0,1.0);
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();  
    gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    random_point();
    glFlush();
}

void reshape (int w, int h) {
    glViewport (0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective (60, (GLfloat)w / (GLfloat)h, 1.0, 100.0);
    glMatrixMode (GL_MODELVIEW);
}

void random_point(void){
  float i = 0;
  for(i = 0; i < 1; i += 0.1){
    Square s(0.0+i, 0.0, 1.0,0.01, 0.5, 0.3, 0.9);
    s.repaint();
  }

   for(i = 0; i < 1; i += 0.1){
     Square s(0.0+i, 0.0+i, 1.0,0.05, 0.01, 0.3, 0.9);
     s.setColor(0.6,0.2, 0.1);
    s.repaint();
  }
}
