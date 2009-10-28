#ifndef  GL_H
#include <GL/gl.h> 
#endif

#ifndef GLUT_H
#include <GL/glut.h>
#endif
class Figure{

  float x, y;
  float w, h;
  float red, green, blue;
public:
  virtual void setColor(float , float  , float );  

};
