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

void mysort(int s, int e) {
    if (s >= e)return;
    int pivot = arr[s];
    int i = s, j = e;
    while (i < j) {
        while (i < e && pivot > arr[i])i++;
        while (j > s && pivot < arr[j])j--;
        if (i < j)swap(arr[i], arr[j]);
    }
    mysort(s, i);
    mysort(i + 1, e);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)cin >> arr[i];
    mysort(0, n-1);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    
    return 0;
}

