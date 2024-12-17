#include <iostream>
using namespace std;

void removeDupli(string &str, int n)
{
    int len = str.length();
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && str[i] == str[i + 1])
        {
            while (i < n - 1 && str[i] == str[i + 1])
            {
                i++;
            }
        }
        else
        {
            str[k++] = str[i];
        }
    }
    str.erase(k);
    if (k != n)
        removeDupli(str, k);
}
string rremove(string s){
    removeDupli(s, s.length());
    return s;
}

int main()
{
    string s = "neeraj";
    cout << rremove(s) << endl;
    return 0;
}