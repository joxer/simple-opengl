#include <math.h>

#ifndef figure_hpp
#include "figure.hpp"
#endif
#ifndef DEFAULT_COLOR
#define DEFAULT_COLOR 0.0,0.0,0.0 //set the default color to black
#endif

#ifndef EXCEPTIONS_HPP
#include "exceptions.hpp"
#endif

#include "point.hpp"

class Circle: public Figure {
  float x, y;
  double r; //radius
  float red, green, blue;
public:
  
  Circle(float, float,float);
  Circle(float, float, float , float , float, float);
  ~Circle();
  float getX();
  float getY();
  float getRadius();
  void setX(float);
  void setY(float);
  void setRadius(float);
  void setXY(float, float);
  
private:
  void repaint(float);
  
};
