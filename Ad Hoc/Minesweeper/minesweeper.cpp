#include <iostream>
using namespace std;

int main()
{
    int a,b,cont=1;
    int m[102][102] = {0};
    char c;
    while(cin>>a>>b){

        if(a == 0 && b == 0){
            break;
        }

        if(cont!=1){
            cout<<endl;
        }

        for(int i=1;i<a+1;i++){
            for(int j=1;j<b+1;j++){
                cin>>c;
                if(c=='*'){
                    m[i][j] = a*b;

                    m[i][j-1] ++;
                    m[i-1][j] ++;
                    m[i-1][j-1] ++;
                    m[i][j+1] ++;
                    m[i-1][j+1] ++;
                    m[i+1][j] ++;
                    m[i+1][j-1] ++;
                    m[i+1][j+1] ++;

                }
            }
        }

        cout<<"Field #"<<cont<<":"<<endl;
        cont++;

        for(int i=0;i<a+2;i++){
            for(int j=0;j<b+2;j++){
                if((i>0 && j>0) && (j<b+1 && i<a+1)){
                    if(m[i][j]>=(a*b)){
                        cout<<'*';
                    }else{
                        cout<<m[i][j];
                    }
                }
                m[i][j]=0;
            }
            if(i>0 && i<a+1){
                cout<<endl;
            }
        }
    }
}