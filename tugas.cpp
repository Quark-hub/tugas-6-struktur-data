#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout<<"Masukkan jumlah kata : ";
    cin>>n;

    string data[100];
    for(int i=0;i<n;i++){
        cout<<"Kata ke-"<<i+1<<" : ";
        cin>>data[i];
    }

    for(int i=1;i<n;i++){
        string key=data[i];
        int j = i-1;

        while (j>=0 && data[j]>key){
            cout<<"Geser "<<data[j]<<" ke kanan"<<endl;
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;
    }

    cout<<"Hasil Insertion Sort : ";
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
}