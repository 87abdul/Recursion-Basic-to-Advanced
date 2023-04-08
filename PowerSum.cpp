#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void countWaysHelper(int x, int n, int start, vector<int> &path, int &count) {
    if (x == 0) {
        count++;
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << "^" << n;
            if (i < path.size()-1) {
                cout << " + ";
            }
        }
        cout << endl;
        return;
    }
    for (int i = start; pow(i, n) <= x; i++) {
        int num = pow(i, n);
        path.push_back(i);
        countWaysHelper(x-num, n, i+1, path, count);
        path.pop_back();
    }
}

int countWays(int x, int n) {
    vector<int> path;
    int count = 0;
    countWaysHelper(x, n, 1, path, count);
    return count;
}

int main() {
    int x = 100;
    int n = 2;

    int result = countWays(x, n);

    cout << "The number of ways to express " << x << " as a sum of natural numbers raised to power " << n << " is: " << result << endl;

    return 0;
}