#include <iostream>
using namespace std;
int main(){
    long long first,second = 0;
    while(cin>>first>>second){
        long long answer = 0;
        answer = abs(first-second);
        cout << answer << endl;
    }
    return 0;
}