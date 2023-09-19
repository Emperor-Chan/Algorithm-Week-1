#include <iostream>
#include <vector>

using namespace std;
using lld = long long;
using vect = vector<vector<lld>>;

vector<int>arr;

void mysort(vector<int> arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //bubble sort 
    int n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    mysort(arr, n);

    return 0;
}

