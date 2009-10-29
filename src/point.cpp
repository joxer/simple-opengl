#include "../include/point.hpp"

Point::Point(){
  x = 0;
  y = 0;
  red = 0.0;
  green = 0.0;
  blue = 0.0;
  repaint();

}

Point::Point(int xx, int yy): x(xx), y(yy){
  red = 0.0;
  green = 0.0;
  blue = 0.0;
  repaint();
}

Point::Point(int xx, int yy, float r, float g, float b): x(xx), y(yy), red(r), green(g), blue(b){
  
  repaint();
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
  setColor(red, green, blue);
  glBegin(GL_POINTS);
  glVertex2d(x, y);
  glEnd();
  setColor(DEFAULT_COLOR);
}

Point::~Point(){
  
}
