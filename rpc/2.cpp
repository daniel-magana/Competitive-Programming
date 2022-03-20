#include<bits/stdc++.h>
using namespace std;

int find_shortest_subnumber(string str, int n) {
    int starts[10] = {
        0, 10, 100, 1000, 10000, 
        100000, 1000000, 10000000, 100000000, 1000000000
    };
    int limit = min((int)str.size(), n);
    for(int length = 1; length <= limit; length++) {
        set<string> uniques; // unique substrings of current length
        for(int i = 0; i <= (int)str.size() - length; i++) {
            auto start = str.begin() + i;
            uniques.emplace(start, start + length);
        }
        for(int i = starts[length - 1]; i < starts[length]; i++) {
            if(uniques.find(to_string(i)) == uniques.end())
                return i;
        }
    }
    return -1; // not found (empty string or too big result)
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T,n;
    string s;
    cin>>T;
    for (int i=0;i<T;i++){
        cin>>n>>s;
        cout<<find_shortest_subnumber(s,n);
    }

    return 0;
}