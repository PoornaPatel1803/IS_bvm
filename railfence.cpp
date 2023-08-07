#include<iostream>
#include<string.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int i,len,b=0,c=0,j,depth;
    string s;
    char cip[15],str1[10],str2[10],str3[10];

    cout<<"Enter Plain Text:";
    cin>>s;
    cout<<endl;
   cout<<"Enter Depth:";
    cin>>depth;
    len=s.size();
    vector<vector<char>> a(depth,vector<char>(len,' '));
    j=0;
    int flag=0;
    for(i=0;i<len;i++){
        a[j][i] = s[i];
         if(j==depth-1){
            flag=1;
        }
        else if(j==0)
            flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
     for(i=0;i<depth;i++){
        for(j=0;j<len;j++){
                cout<<a[i][j];
        }
    }
}
