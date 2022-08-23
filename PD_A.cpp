#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
 
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
string lcs(char* X, char* Y, int m, int n,string x)
{
    int L[m + 1][n + 1];
 
    /* Following steps build L[m+1][n+1] in bottom up
      fashion. Note that L[i][j] contains length of LCS of
      X[0..i-1] and Y[0..j-1] */
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
 
    // Following code is used to print LCS
    int index = L[m][n];
 
    // Create a character array to store the lcs string
    char lcs[index + 1];
    lcs[index] = '\0'; // Set the terminating character
 
    // Start from the right-most-bottom-most corner and
    // one by one store characters in lcs[]
    int i = m, j = n;
    while (i > 0 && j > 0) {
        // If current character in X[] and Y are same, then
        // current character is part of LCS
        if (X[i - 1] == Y[j - 1]) {
            lcs[index - 1]
                = X[i - 1]; // Put current character in result
            i--;
            j--;
            index--; // reduce values of i, j and index
        }
 
        // If not same, then find the larger of two and
        // go in the direction of larger value
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
 
    // Print the lcs
    return lcs;
}
 
int main(){
string s,t,x;
getline(cin,s);
getline(cin,t);
getline(cin,x);

 char X[s.length()];
 for(int i=0;i<s.length();i++){
 	X[i]=s[i];
 }
char Y[t.length()];
 for(int i=0;i<t.length();i++){
 	Y[i]=t[i];
 }
string longest = lcs(X, Y, strlen(X), strlen(Y),x);

cout<<longest;

}

