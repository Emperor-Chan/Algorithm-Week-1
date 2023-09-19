#include <iostream>
#include <vector>

using namespace std;
using lld = long long;
using vect = vector<vector<lld>>;

vector<int>arr;

void mysort(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        int maxi = 0;
        for (int j = 1; j < n-i; j++) {
            if (arr[maxi] < arr[j]) maxi = j;
        }
        swap(arr[n - i - 1], arr[maxi]);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //Selection sort 
    int n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    mysort(arr, n);
    //for (int i = 0; i < n; i++) cout << arr[i] << ' ';

    return 0;
}

