#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[10];
void insert(int data){
    int x=data%10;
    while(a[x]!=0){
        x++;
    }
    a[x]=data;

}

void print(){
    for(int i=0;i<10;i++){
        cout<< i <<" "<<a[i]<<endl;
    }
}

int main() {


    while(true){
        int c;
        cin>>c;
        if(c==1){
            int data;
            cin>>data;
             insert(data);
        }
        else{
            print();
            break;
        }

    }
    return 0;
}

