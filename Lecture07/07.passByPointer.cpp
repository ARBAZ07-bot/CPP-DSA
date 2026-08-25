#include <iostream>
using namespace std;
void changeValue(int* ptr){
    *ptr = 100;
}
int main(){
    int num = 10;
    changeValue(&num);
    cout << num;
    return 0;
}