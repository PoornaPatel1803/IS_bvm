#include<iostream>
using namespace std;

int main(){
    char pt[100];
    char key[100];
    int ct[100],pta[100],keya[100];
    int ptsize,ksize;
    int diff,dummy,z=0,para;
    cout<<"Size of plain text:";
    cin>>ptsize;
    cout<<"Size of key text:";
    cin>>ksize;
    if(ptsize>ksize){
        diff=ptsize-ksize;
        dummy=ptsize;
        para=dummy-diff;
        keya[para]=keya[z];
        z++;
    }
    for(int i=0;i<ptsize;i++){
    cout<<"Enter plain text element "<<i<<":";
    cin>>pt[i];
    }
    cout<<endl<<endl;
    for(int i=0;i<ksize;i++){
    cout<<"Enter key element "<<i<<":";
    cin>>key[i];
    }
    for(int i=0;i<ptsize;i++){
        pta[i]=(pt[i]-97);
        cout<<pt[i]<<"="<<pta[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<ksize;i++){
        keya[i]=(key[i]-97);
        cout<<key[i]<<"="<<keya[i]<<endl;
    }
    for(int i=0;i<ptsize;i++){
    ct[i]=(pta[i]+keya[i])%26;
    }
    for(int i=0;i<ptsize;i++){
            cout<<(char)(ct[i]+65)<<" ";
    }
}
