#ifndef FIGURE_H
#include "figure.hpp"
#endif
#ifndef DEFAULT_COLOR
#define DEFAULT_COLOR 0.0,0.0,0.0 //set the default color to black
#endif
/* Point helper class */

class Point {
  int x, y;
  float red, green, blue;
public:
  Point ();
  Point(int, int);
  Point(int, int, float, float, float);
  ~Point();
  float getX();
  float getY();
  void setX(float);
  void setY(float);
  void setXY(float, float);

private:
  void repaint();
};
