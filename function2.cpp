#include <iostream>
#include <algorithm>
#include "function2.h"
using namespace std;

pair<int, int> Mouse::getCoordinate(){
    return pair<int, int>(ix, iy);
}

void Mouse::setCoordinate(int x = -1, int y = -1){
    if(x >= 0) ix = x;
    if(y >= 0) iy = y;
}

void Mouse::printCoordinate(){
    cout << '(' << ix << ',' << iy << ")\n";
}