#include <iostream>

using namespace std;

int f(int n){
    if(n%2==1){
        return n*3+1;
    }
    else{
        return n/2;
    }
}
int ans(int n){

    int tmp = 1;

    while(n!=1){
        n = f(n);
        tmp++;
    }
    return tmp;

}
int main(){

    int num1,num2,answer = 0;
    int i,j = 0;

    while(cin >> num1 >> num2){
            if(0 < num1 &&  num2 < 1000000){
                i = num1;
                j = num2;
            if(num1 > num2){
                num1 = j;
                num2 = i;
            }
            while(num1<=num2){

                if(answer<ans(num1)){
                answer = ans(num1);
                    }
                num1++;
                }
                cout << i << " " << j << " " << answer << endl;
                i,j,answer = 0;
            }
            else{
                cout << endl;
                break;
            }
        }
    return 0;
}
