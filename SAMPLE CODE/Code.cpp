#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector < string > v;
    for (int i = 0; i < s.length(); i++) {
        v.push_back(s.substr(i, s.length() - i)); //cout<<v[i]<<endl;
    }
    sort(v.begin(), v.end(), greater < string > ());
    cout << v[0];

}
