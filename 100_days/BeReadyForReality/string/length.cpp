# include <iostream>
using namespace std;

int  length(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[23];
    cout << "Enter your name:" << endl;
    cin >> name;

    length(name);
    cout << length(name) << endl;
    return 0;
}
