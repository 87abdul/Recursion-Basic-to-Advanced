#include <iostream>
using namespace std;

void toh(char source, char target, char medium, int n){
    if(n == 0){
        return;
    }

    toh(source, medium, target, n-1);

    cout << "Move disk " << n << " from " << source << " to " << target << endl;

    toh(medium, target, source, n-1);
}

int main(){
    int n = 3;
    char source = 'A', target = 'B', medium = 'C';

    cout << "Solving Tower of Hanoi for " << n << " disks:" << endl;
    toh(source, target, medium, n);

    return 0;
}
