#include "../include/circle.hpp"


Circle::Circle(){

}

Circle::Circle(float xx, float yy, float rr){
  try{
    if(r <= 0)
      throw ValueNotDefinited();
    x = xx;
    y = yy;
    r = rr;
    repaint(r);
  }
  catch(ValueNotDefinited e){
    e.reason();
  }
}
Circle::Circle(float xx, float yy, float rr, float r, float g, float b){
   try{
    if(r <= 0)
      throw ValueNotDefinited();
    x = xx;
    y = yy;
    r = rr;
    red = r;
    green = g;
    blue = b;
  
    repaint(rr);
  }
  catch(ValueNotDefinited e){
    e.reason();
  }
}

Circle::~Circle(){

}

void Circle::repaint(float r){
  setColor(red, green, blue);
  printf(" %f\n", this->r);
  glBegin(GL_POINTS);
  for(float i = 0; i < 720;i+=0.25){
    glVertex2d(cos(i)+x, sin(i)+y);
  }
  glEnd();
  setColor(DEFAULT_COLOR);
  
}

