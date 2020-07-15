#include <iostream>
using namespace std;
int main(){
    int length,input=0;
    while(cin>>length){
        int answer[3008]={0};
        int compare[3008]={0};
        // for (int i = 0; i < 3000; i++)
        // {
        //     answer[i] = 0;
        //     compare[i] = 0;
        // }
        int j = 0;
        for(int i =0;i<length;i++){
            cin >> input;
            answer[i] = input;
            if(i>=1){
                compare[j] = abs(answer[i]-answer[i-1]);
                j++;
            }
        }
        int fortwo = 0;
            if(length==2){
                fortwo = abs(answer[0]-answer[1]);
            if(fortwo==1){
                cout << "Jolly" << endl;
            }
            else{
                cout << "Not jolly" << endl; 
            }
        }
        else{
            int count = 0;
            for(int i=1;i<length;i++){
                for(int k=0;k<j;k++){
                    if(compare[k] == i){
                        count++;
                        break;
                    }
                }
        }
        if(count==length-1){
            cout << "Jolly" << endl;
        }
            else{
            cout << "Not jolly" << endl;
            }
        }
    }
    return 0;
}