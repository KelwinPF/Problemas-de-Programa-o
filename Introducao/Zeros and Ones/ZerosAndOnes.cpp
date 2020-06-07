#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    string a;
    int t,b,c,flag=0,caso=1,aux;
    while(cin>>a){
        cout<<"Case "<<caso<<":"<<"\n";
        flag = 0;
        caso++;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>b;
            cin>>c;
            if(b>c){
                aux = c;
                c = b;
                b = aux;
            }

            for(int j=b+1;j<=c;j++){
                if(a[b]!=a[j]){
                     flag = 1;
                     break;
                 }
            }

            if(flag == 1){
               cout<<"No\n";
            }else{
               cout<<"Yes\n";
            }
            flag = 0;
        }
    }
}