#include "bits/stdc++.h"

using namespace std;

//二分

int doubleSearch(vector<int> & nums, int target){
    int left = 0, right = nums.size() - 1;

    while(left <= right){

        int mid = left + ((right - left) >> 1);
        int num = nums[mid];
        if (num > target){
            right = mid - 1;
        }else if(num < target){
            left = mid + 1;
        }else{
            return mid;
        }
    }

    return -1;
}

int main(){

    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int index = doubleSearch(a, 10);

    printf("%d\n", index);

    return 0;
}