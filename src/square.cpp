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
  repaint();
}


Square::Square(float xx, float yy, float ww, float hh): x(xx), y(yy) {
  try{
    if(ww <= 0 || hh <= 0)
      throw ValueNotDefinited();
    w = ww;
    h = hh;
    red = 0.0;
    green = 0.0;
    blue = 0.0;
    glColor3f(DEFAULT_COLOR); //set the default color to black
    repaint();
  }
  catch(ValueNotDefinited e){
    e.reason();
  }
}

Square::Square(float xx, float yy, float ww, float hh, float r, float g, float b): x(xx), y(yy), w(ww), h(hh), red(r), green(g), blue(b){
  try{
    if(ww <= 0 || hh <= 0)
      throw ValueNotDefinited();
    w = ww;
    h = hh;
    
    glColor3f(r, g, b); 
    repaint();
  }catch(ValueNotDefinited e){
    e.reason();
  }
}

void Square::setX(float xx){
  x = xx;
  repaint();
}
void Square::setY(float yy){
  y = yy;
  repaint();
}
void Square::setW(float ww){
  w = ww;
  repaint();
}
void Square::setH(float hh){
  h = hh;
  repaint();
}

float Square::getX() const{
  return x;
}
float Square::getY() const{
  return y;
}
float Square::getW() const{
  return w;
}
float Square::getH() const{
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
  glColor3f(DEFAULT_COLOR);
    
}

Square::~Square(){

}
