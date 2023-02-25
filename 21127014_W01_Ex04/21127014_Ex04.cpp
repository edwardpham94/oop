#include "function.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of disks : ";
    cin >> n;
    HanoiTower(n, 'A', 'C', 'B');
    return 0;
}
