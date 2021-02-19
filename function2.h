#include <iostream>

class Mouse
{
private:
    int ix, iy;
    char syl;

public:
    Mouse(int x = 0, int y = 0, int c = '@'): ix(x), iy(y), syl(c){}

    std::pair<int, int> getCoordinate();
    void setCoordinate(int x, int y);
    void printCoordinate();
};