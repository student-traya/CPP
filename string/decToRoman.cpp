// #include<iostream>
// #include<unordered_map>
// using namespace std;

// string integerToRoman(int num){
// unordered_map<int, char>roman;
// roman[1] = 'I';
// roman[5] = 'V';
// roman[10] = 'X';
// roman[50] = 'L';
// roman[100] = 'C';
// roman[500] = 'D';
// roman[1000] = 'M';
// roman[5000] = 'G';
// roman[10000] = 'H';

// string tmp = to_string(num);
// const int numDigits = tmp.length();

// string res = "";
// for(int i = 0; i < numDigits; ++i){
//     const char src = tmp[i];
//     const int place = (numDigits-1)-i;
//     const int number = (src - 'o');
//     const int absolute = pow(10, place);

//     if(number == 9){
//         res.append(1,roman[absolute]);
//         res.append(1,roman[(number+1)* absolute]);
//     }
//     else if(number >= 5){
//         res.append(1,roman[5*absolute]);
//         res.append(number-5,roman[absolute]);
//     }
//     else if(number >= 4){
//         res.append(1,roman[absolute]);
//         res.append(1,roman[5*absolute]);
//     }
//     else{
//         res.append(number, roman[absolute]);
//     }
// }
// return res;
// }

// int main(){
//     cout << integerToRoman(3549) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

void printRoman(int num) {
   
    if(num >= 1000) {
        cout << "M";
        printRoman(num - 1000);
    }
    else if(num >= 900) {
        cout << "CM";
        printRoman(num - 900);
    }
    else if(num >= 500) {
        cout << "D";
        printRoman(num - 500);
    }
    else if(num >= 400) {
        cout << "CD";
        printRoman(num - 400);
    }
    else if(num >= 100) {
        cout << "C";
        printRoman(num - 100);
    }
    else if(num >= 90) {
        cout << "XC";
        printRoman(num - 90);
    }
    else if(num >= 50) {
        cout << "L";
        printRoman(num - 50);
    }
    else if(num >= 40) {
        cout << "XL";
        printRoman(num - 40);
    }
    else if(num >= 10) {
        cout << "X";
        printRoman(num - 10);
    }
    else if(num >= 9) {
        cout << "IX";
        printRoman(num - 9);
    }
    else if(num >= 5) {
        cout << "V";
        printRoman(num - 5);
    }
    else if(num >= 4) {
        cout << "IV";
        printRoman(num - 4);
    }
    else if(num >= 1) {
        cout << "I";
        printRoman(num - 1);
    }
}

int main() {
    int number = 3549;
    printRoman(number);
    return 0;
}