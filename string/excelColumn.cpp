/*MS Excel columns have a pattern like A, B, C, …, Z, AA, AB, AC, …., AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named “A”, column 2 as “B”, and column 27 as “AA”.
ex:-
Input          Output
 26             Z
 51             AY
 52             AZ
 80             CB
 676            YZ
 702            ZZ
 705            AAC
*/
#include<iostream>
#include<algorithm>
#include<string>
#define MAX = 50;
using namespace std;

// Function to print Excel column name for a given column number
void printString(int n){
    char str[MAX];
    int i = 0;
    while(n > 0){
        int rem = n % 26;

        // If remainder is 0, then a 'Z' must be there in output
        if(rem == 0){
            str[i++] = 'Z';
            n = (n / 26) - 1;
        }else{
            str[i++] = (rem - 1) + 'A';
            n = n / 26;
        }
    }
    str[i] = '\0';
    reverse(str, str + strlen(str));
    cout << str << endl;
    return;
}
int main(){
    return 0;
    printString(26);
    printString(51);
    printString(52);
    printString(80);
    printString(676);
    printString(702);
    printString(705);
}