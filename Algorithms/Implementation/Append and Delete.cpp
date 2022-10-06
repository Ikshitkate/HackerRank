#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
string appendAndDelete(string s, string t, int k) {
    int x, count=0, p,q;
    if(s.length()>t.length())
        x = s.length();
    else x = t.length();
    for(int i=0; i<x; i++)
    {
        if(s[i]==t[i])
            count++;
        else
            break;
    }
    p = s.length() - count;
    q = t.length() - count;
    if(p+q<=k && (p+q)%2==k%2)
        return "Yes";
    else if(s.length() + t.length() <= k)
        return "Yes";
    else
        return "No";
}   

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}