#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <vector>
#include <unistd.h>
#include <math.h>
#include "include/square.hpp"
#include "include/circle.hpp"

void display(void);
void reshape(int w, int h);
void random_point();
void motion(int, int);



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
  Circle c(0,0,0.1, 0.5, 0.1, 0.2);
  Circle e(1,0,0.2, 0.2, 1, 0.3);
   //Square r(0.0, 1.0, 0.3, 0.5, 1, 1, 1);
   //Square d(1.0, 1.0, 0.3, 0.5, 1, 1, 1);
}
