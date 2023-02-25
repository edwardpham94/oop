#include<iostream>
#include "function.h"
using namespace std;

void HanoiTower(int n, char aRod, char bRod, char cRod) {
    if (n == 0) return;
    HanoiTower(n - 1, aRod, cRod, bRod);
    cout << "Move disk " << n << " from rod " << aRod << " to rod " << bRod << endl;
    HanoiTower(n - 1, cRod, bRod, aRod);
}