#ifndef FIGURE_H
#include "figure.hpp"
#endif
#ifndef DEFAULT_COLOR
#define DEFAULT_COLOR 0.0,0.0,0.0 //set the default color to black
#endif

class Circle: public Figure {
  float x, y;
  float w, h;
  float red, green, blue;
public:
  Circle();
  Circle(float, float);
  Circle(float, float, float, float);
  Circle(float, float, float , float , float, float);
  ~Circle();
  float getX();
  float getY();
  void setX(float);
  void setY(float);
  void setXY(float, float);
private:
  void repaint();

}
