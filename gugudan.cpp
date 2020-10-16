#include<iostream>

using namespace std;

int main(){
    for(int i = 1; i < 9; i++ ){
        cout << i << "단 시작-------------"<<endl;
        for(int j = 1; j < 10; j++){
            cout << i << " x " << j <<" = "<< i*j << endl;
        }
        cout << endl;
    }
}