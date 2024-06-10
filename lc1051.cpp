#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void VectorSort(vector<int> &v)
{
    sort(v.begin(), v.end());
}

int HeightChecker(vector<int> &heights){
    int count = 0;
    vector<int> correct(heights);
    VectorSort(heights);
    for (int i = 0; i < heights.size(); i++){
        if (correct[i] != heights[i]){
            count ++;
        }
    }
    return count;
}

int main(){
    vector <int> heights = {1,1,4,2,5};
    cout << HeightChecker(heights);
}