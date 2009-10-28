#ifndef DEFAULT_COLOR
#define DEFAULT_COLOR 0.0,0.0,0.0 //set the default color to black
#endif
#ifndef FIGURE_HPP
#include "figure.hpp"
#endif
/* Square helper class*/

class Square:public Figure {

  
  float x, y; // x && y
  float w, h; // width && height
  float red, green, blue;
public:
  Square();
  Square(float, float);
  Square(float, float, float, float);
  Square(float, float, float, float, float, float, float);
  ~Square();

  void setX(float);
  void setY(float);
  void setW(float);
  void setH(float);
  
  float getX();
  float getY();
  float getW();
  float getH();
  
private:  
  void repaint();
};
