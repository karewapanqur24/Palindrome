// Palindrome by Purnama

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(int n)
{
    string s = to_string(n);
    int i = 0, j = s.length() - 1;

    while (i < j) // Jika i=1 dan j=1 yang dimana 1<1 while loop tidak akan di eksekusi
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int getNextPalindrome(int n)
{
    n++;
    while (!isPalindrome(n))
        n++;
    return n;
}

int main()
{
    int t;
    cout << "Masukkan Jumlah Angka yang akan dihitung: ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        int nextPalindrome = getNextPalindrome(k);
        cout << nextPalindrome << endl;
    }

    return 0;
}