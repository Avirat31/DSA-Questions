#include<iostream>
#include<vector>
using namespace std;
vector<string> printNTimes(int n) {
	// Write your code here.
	// base case
	if (n == 0) {
        vector<string> temp;
        return temp;
    }

    // Recursion
    vector<string> result = printNTimes(n - 1);
    result.push_back("Coding Ninjas");
    return result;
}
int main(){
     int n = 5;
    vector<string> result = printNTimes(n);

    for (const string& str : result) {
        cout << str << " "<<endl;
    }
    return 0;
}