#include <iostream>
#include <vector>

using namespace std;

void findAllOccurrences(vector<int>& arr, int target, vector<int>& indices, int i) {
    if (i == arr.size()) {
        return;
    }
    if (arr[i] == target) {
        indices.push_back(i);
    }
    findAllOccurrences(arr, target, indices, i + 1);
}

vector<int> findAllOccurrences(vector<int>& arr, int target) {
    vector<int> indices;
    findAllOccurrences(arr, target, indices, 0);
    return indices;
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int target = 5;

    vector<int> indices = findAllOccurrences(arr, target);

    cout << "The element " << target << " occurs at indices: ";
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}