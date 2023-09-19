#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <math.h>
#define MAX 1000000

using namespace std;
using lld = long long;
using vect = vector<vector<lld>>;

vector<int>arr;

void mysort(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = 0; j < n; j++)if (arr[j] < arr[i])k++;
        swap(arr[k], arr[i]);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //Insertion sort 
    int n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    mysort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';

    return 0;
}

