#include "../include/square.hpp"

Square::Square(){
  
  x = 0.0;
  y = 0.0;
  w = 0.0;
  h = 0.0;
  red = 0.0;
  green = 0.0;
  blue = 0.0;
  glColor3f(DEFAULT_COLOR); //set the default color to black
}

Square::Square(float xx, float yy): x(xx), y(yy){
  

  w = 0.0;
  h = 0.0;
  red = 0.0;
  green = 0.0;
  blue = 0.0;
  glColor3f(DEFAULT_COLOR); //set the default color to black
}

Square::Square(float xx, float yy, float ww, float hh): x(xx), y(yy), w(ww),h(h) {
  
  red = 0.0;
  green = 0.0;
  blue = 0.0;
  glColor3f(DEFAULT_COLOR); //set the default color to black
  
}

Square::Square(float xx, float yy, float ww, float hh, float r, float g, float b): x(xx), y(yy), w(ww), h(hh), red(r), green(g), blue(b){
  
 
  glColor3f(r, g, b); 
  
}

void Square::setX(float xx){
  x = xx;
}
void Square::setY(float yy){
  y = yy;
}
void Square::setW(float ww){
  w = ww;
}
void Square::setH(float hh){
  h = hh;
}

float Square::getX(){
  return x;
}
float Square::getY(){
  return y;
}
float Square::getW(){
  return w;
}
float Square::getH(){
  return h;
}

void Square::repaint(){
  glColor3f(red, green, blue);
  glBegin(GL_QUADS);
  glVertex2d(x, y); 
  glVertex2d(x, y+w);
  glVertex2d(x+h, y+w);
  glVertex2d(x+h, y);
  glEnd();
    
}

Square::~Square(){

}
