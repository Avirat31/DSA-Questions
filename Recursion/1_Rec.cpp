/*You are Given an integer 'n'. Task is to return an array containing
integers from 1 to 'n'(in increasing order) without using loops*/

#include<iostream>
#include<vector>
using namespace std;

void recursion(int n , vector<int> &temp){
    // base case
    if(n==0)
        return;
    recursion(n-1, temp);
    temp.push_back(n);    
}

vector<int> printNos(int x){
    vector<int> temp;
    recursion(x,temp);
    return temp;
}

int main(){
    int arr = 5;
    vector<int> result = printNos(arr);    
    for (int num : result) {
        cout << num << " ";
    }
   
    return 0;
}

