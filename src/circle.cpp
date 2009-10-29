#include "../include/circle.hpp"



Circle::Circle(float xx, float yy, float rr){
  try{
    if(rr <= 0)
      throw ValueNotDefinited();
    x = xx;
    y = yy;
    r = rr;
    red = 1.0;
    green = 1.0;
    blue = 1.0;
    repaint(r);
  }
  catch(ValueNotDefinited e){
    e.reason();
  }
}
Circle::Circle(float xx, float yy, float rr, float r, float g, float b){
   try{
    if(rr <= 0)
      throw ValueNotDefinited();
    x = xx;
    y = yy;
    r = rr;
    red = r;
    green = g;
    blue = b;
    
    repaint(r);
  }
  catch(ValueNotDefinited e){
    e.reason();
  }
}

Circle::~Circle(){

}

/*
  
  yeah  the parameter is _horrible_ i know but if i remove it
  i don't know why it doesn't take the radius

*/

void Circle::repaint(float r){
  setColor(red, green, blue);
  glBegin(GL_LINES);
  for(float i = 0; i < 720;i+=0.5){
    glVertex2d(r*cos(i)+x, r*sin(i)+y);
  }
  glEnd();
  setColor(DEFAULT_COLOR);
  
}

float Circle::getX(){
  return x;
}
float Circle::getY(){
  return y;
}
void Circle::setX(float xx){
  x = xx;
  repaint(r);
}
void Circle::setY(float yy){
  y = yy;
  repaint(r);
}
void Circle::setXY(float xx, float yy){
  x = xx;
  y = yy;
  repaint(r);
}

void Circle::setRadius(float rr){
  r = rr;
  repaint(r);
}
