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
vector<int>tmp;

void merge(int s, int e) {
    int mid = (s + e) / 2;
    int i = s, j = mid + 1, k = s;
    while (i <= mid && j <= e) {
        if (arr[i] < arr[j])tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }
    while (i <= mid) tmp[k++] = arr[i++];
    while (j <= e) tmp[k++] = arr[j++];
    for (int p = s; p <= e; p++)arr[p] = tmp[p];
}

void partition(int s, int e) {
    if (s >= e)return;
    int mid = (s + e) / 2;
    partition(s, mid);
    partition(mid + 1, e);
    merge(s, e);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    //Merge sort 
    int n;
    cin >> n;
    arr.resize(n);
    tmp.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    partition(0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';

    return 0;
}

