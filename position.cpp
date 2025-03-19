#include "position.h"
#include <stdexcept>
#include <string>

using namespace std;

Position::Position(int x, int y) {
  this->xPos = x;
  this->yPos = y;
  this->wall = false;
}

int Position::getX()  {
  throw runtime_error("Not yet implemented: {Position::getX");
}

int Position::getY() {
  throw runtime_error("Not yet implemented: {Position::getY");
}

void Position::setWall()  {
  throw runtime_error("Not yet implemented: {Position::setWall");
}

bool Position::isWall()  {
  throw runtime_error("Not yet implemented: {Position::isWall");
}

string Position::to_string()  {
  throw runtime_error("Not yet implemented: {Position::isWall");
}
