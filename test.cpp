#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int a0 = 0;
int mini = INT_MAX;
int M;

vector<int> ans;
vector<int> k;

ofstream outfile("ans.txt");

void recursive(int t, int sum){
    if(mini == 0) return;

    if(k.size() == M){
        if(abs(sum) == 2){
            ans = k;
            for(auto i : ans){
                cout << i << ' ';
            } cout << endl;
            mini = abs(sum);
        }
        return;
    }

    int a = t + 1;
    int b = a * (-1);

    
    k.push_back(a);
    recursive(a, sum + a);
    k.pop_back();
    k.push_back(b);
    recursive(b, sum + b);
    k.pop_back();
}

int main()
{
    while(cin >> M){
        k.push_back(0);
        recursive(0, 0);
        cout << mini << endl;
        for(auto i : ans){
            cout << i << ' ';
        } cout << endl;
        mini = INT_MAX;
        k.clear();
    }
    return 0;
}