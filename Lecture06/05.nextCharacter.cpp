#include <iostream>
using namespace std;
void nextChar(char ch){
    if(ch=='z'){
        cout<<'a';
        return;
    }
    cout<<(++ch);
}
int main(){
    char ch;
    cout<<"Enter value of ch:\n";
    cin>>ch;
    nextChar(ch);
    cout<<endl;
    return 0;
}