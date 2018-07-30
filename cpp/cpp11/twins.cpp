#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Complete twins function
// DO NOT MODIFY anything outside the below function
vector<string> twins(const vector<string>& a, const vector<string>& b) {
    vector<string> res;
    res.reserve(2);

    string str1 = a[0]; string str2=a[1];
    
     int len1 = str1.length();
    int len2 = str2.length();
 
    // Return false if both are not of equal length
    if (len1 != len2)
        return false;
 
    // To store indexes of previously mismatched
    // characters
    int prev = -1, curr = -1;
 
    int count = 0;
    for (int i=0; i<len1; i++)
    {
        // If current character doesn't match
        if (str1[i] != str2[i])
        {
            // Count number of unmatched character
            count++;
 
            // If unmatched are greater than 2,
            // then return false
            if (count > 2)
                return false;
 
            // Store both unmatched characters of
            // both strings
            prev = curr;
            curr = i;
        }
    }
     
    res.push_back("Yes");
    res.push_back("No");
    
    return res;
}
// DO NOT MODIFY anything outside the above function

int main() {

    /* Read input from STDIN. Print output to STDOUT */
    vector<std::string> a, b;
    int aSize, bSize;

    cin >> aSize;
    a.reserve(aSize);
    string s;
    for (int i = 0; i < aSize; ++i) {
        cin >> s;
        a.push_back(s);
    }

    cin >> bSize;
    b.reserve(bSize);
    for (int i = 0; i < bSize; ++i) {
        cin >> s;
        b.push_back(s);
    }

    // call twins method
    vector<string> res = twins(a, b);

    for (vector<string>::iterator it = res.begin(); it != res.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}