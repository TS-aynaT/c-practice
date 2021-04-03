#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */
    int n = ar.size();
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += ar[i];
    }
    return sum;
}
