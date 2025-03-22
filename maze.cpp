#include <stdexcept>

/* STL libraries needed */
#include <stack>
#include <queue>
#include <vector>

/* library for reverse function */
#include <algorithm>
/* there is a function called "reverse" in this library that can reverse the elements of a vector
 * call it as follows:
 * reverse(v.begin(), v.end()); // this reverses the order of the elements in vector v
 */

#include "maze.h"
#include "myDictionary.h" // wtf is this

using namespace std;

/*
*  Height = row = x
*  width = colum = y
*/

Maze::Maze(int width, int height) {
  // allocating memory and initializing positions
  positions = new Position**[height];
  for (int i = 0; i < height; i++{
    positions[i] = new Position*[width];
    for(int j = 0; j < width; i++){
      positons[i][j] = new Position(i, j);
    }
  }
}


Maze::~Maze() {
  for(int i = 0; i < height; i++;){
    for(int j = 0; j < width; j++{
      delete positions[i][j];  
    }
    delete positons[i]         
  }
  delete positions[j]
}

int Maze::getWidth() {
  return gety();
}

int Maze::getHeight() {
  return getx();
}

bool Maze::isWall(int x, int y) {
  if (positions[x][y] == "#")
    // wall == true;
  throw runtime_error("Not yet implemented: Maze::isWall");
}

void Maze::setWall(int x, int y) {
  throw runtime_error("Not yet implemented: Maze::setWall");
}

vector<Position*> Maze::solveBreadthFirst() {
  /* you will need an unordered_map to store the previous of each position */
  /* the keys for this map are the to_string of a position object
   * the associated value should be a pointer to the Position from which
   * you saw the key
   */
  throw runtime_error("Not yet implemented: Maze::solveBreadthFirst");
}

vector<Position*> Maze::solveDepthFirst() {
  /* you will need an unordered_map to store the previous of each position */
  /* the keys for this map are the to_string of a position object
   * the associated value should be a pointer to the Position from which
   * you saw the key
   */
  throw runtime_error("Not yet implemented: Maze::solveDepthFirst");
}

vector<Position*> Maze::getNeighbors(Position* position) {
  throw runtime_error("Not yet implemented: Maze::getNeighbors");
}
