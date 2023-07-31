#include<iostream>
using namespace std;

int main(){
    int pt[100];
    int key[100];
    int pta[100],keya[100],ct[100];
    int ptsize,ksize;
    cout<<(114 |110);
    cout<<"Size of plain text:";
    cin>>ptsize;
    cout<<"Size of key text:";
    cin>>ksize;
    for(int i=0;i<ptsize;i++){
    cout<<"Enter plain text element "<<i<<":";
    cin>>pt[i];
    }
    cout<<endl<<endl;
    for(int i=0;i<ksize;i++){
    cout<<"Enter key element "<<i<<":";
    cin>>key[i];
    }
   // for(int i=0;i<ptsize;i++){
       // pta[i]=(pt[i]-97);
       // cout<<pt[i]<<"="<<pta[i]<<endl;
   // }
   // cout<<endl;
   // for(int i=0;i<ksize;i++){
   //     keya[i]=(key[i]-97);
   //     cout<<key[i]<<"="<<keya[i]<<endl;
//}
    for(int i=0;i<ptsize;i++){
        ct[i]=pt[i] | key[i];
    }
    cout<<"Cipher text is::"<<endl;
    for(int i=0;i<ptsize;i++){
        cout<<ct[i]<<" ";
    }

}
