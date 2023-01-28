
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printGfg(int N) {
        if(N<1) return;
        cout<<"GFG"<<" ";
        printGfg(--N);
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}
