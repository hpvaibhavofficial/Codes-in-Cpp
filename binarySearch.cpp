#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int target){
    int l = 0;
    int r = arr.size() - 1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == target) return mid;
        (arr[mid]>target) ? r = mid - 1 : l = mid + 1;
    }
    return -1;
}

int main() {

    return 0;
}