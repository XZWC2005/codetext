#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;

bool isPrefix(const string& str1, const string& str2) {
    if (str1.length() > str2.length()) return false;
    for (size_t i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) return false;
    }
    return true;
}
 
bool isPrefixCode(const vector<string>& codes) {
    vector<string> sortedCodes = codes;
    sort(sortedCodes.begin(), sortedCodes.end());
    for (size_t i = 0; i < sortedCodes.size() - 1; ++i) {
        if (isPrefix(sortedCodes[i], sortedCodes[i + 1])) {
            return false;
        }
    }
    return true;
}
 
int main() {
    int n;
    cin >> n;
    vector<string> codes(n);
    for (int i = 0; i < n; ++i)
	{
        cin >> codes[i];
    }
    if (isPrefixCode(codes))
	{
        cout << "yes" << endl;
    }
	else
	{
        cout << "no" << endl;
    }
    return 0;
}
