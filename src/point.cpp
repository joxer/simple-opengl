#include "../include/point.hpp"

Point::Point(){
  x = 0;
  y = 0;
  glColor3f(DEFAULT_COLOR);
  glBegin(GL_POINTS);
  glVertex2d(x, y);
  glEnd();
  glColor3f(DEFAULT_COLOR); //set the default color to black

}

Point::Point(int xx, int yy, float r, float g, float b): x(xx), y(yy), red(r), green(g), blue(b){
  glColor3f(red, green, blue);
  glBegin(GL_POINTS);
  glVertex2d(x, y);
  glEnd();
  glColor3f(DEFAULT_COLOR); //set the default color to black
}

Point::Point(int xx, int yy): x(xx), y(yy){
  glColor3f(DEFAULT_COLOR); //set the default color to black
  glBegin(GL_POINTS);
  glVertex2d(x, y);
  glEnd();
}

float Point::getX(){
  return x;
}

float Point::getY(){
  return y;
}

void Point::setX(float xx){
  x = xx;
  repaint();
  
}

void Point::setY(float yy){


  y = yy;
  repaint();
}

void Point::setXY(float xx, float yy){
  x = xx;
  y = yy;
  repaint();
  
}

void Point::repaint(){
  glColor3f(red, green, blue);
  glBegin(GL_POINTS);
  glVertex2d(x, y);
  glEnd();
 
}

Point::~Point(){
  
}
