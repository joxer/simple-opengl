#include <exception>
#include <iostream>

#ifndef EXECPTIONS_HPP
#define EXECPTIONS_HPP
class ValueNotDefinited: public std::exception {


public:
  
  void reason();

};

#endif
