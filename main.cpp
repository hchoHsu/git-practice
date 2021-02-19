// write a simple project to test how the exact project work
#include <iostream>
#include <string>
// #include <function1.h>
#include "function2.h"
using namespace std;

int main()
{
    Mouse mouseA;

    string cmd;
    while(cin >> cmd)
    {
        if(cmd == "set"){
            int x, y;
            cin >> x >> y;
            mouseA.setCoordinate(x, y);
        }
        else if(cmd == "print"){
            mouseA.printCoordinate();
        }
        else{
            cout << "unreadable cmd" << endl;
        }
    }


    return 0;
}