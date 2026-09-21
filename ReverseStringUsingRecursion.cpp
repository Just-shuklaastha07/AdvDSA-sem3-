#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    // Base condition
    if(start >= end)
        return true;

    // If first and last characters are different
    if(str[start] != str[end])
        return false;

    // Check remaining string
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string str;

    cout << "Enter string: ";
    cin >> str;

    if(isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}