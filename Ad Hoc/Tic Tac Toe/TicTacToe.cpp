#include <iostream>
using namespace std;

int main()
{
    int n,contx=0,cont0=0,flagx = 0,flag0 = 0;
    char c;
    int m[3][3];
    cin>>n;
    while(n>0){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>c;
                    if(c=='X'){
                        contx++;
                        m[i][j] = 1;
                    }else if(c=='O'){
                        cont0++;
                        m[i][j] = 2;
                    }else{
                        m[i][j] = 0;
                    }
                }
            }

            //para os x's
            if(m[0][0] == 1 && m[0][1] == 1 && m[0][2] == 1){
                flagx=1;
            }
            if(m[1][0] == 1 && m[1][1] == 1 && m[1][2] == 1){
                flagx=1;
            }
            if(m[2][0] == 1 && m[2][1] == 1 && m[2][2] == 1){
                flagx=1;
            }
            if(m[0][0] == 1 && m[1][0] == 1 && m[2][0] == 1){
                flagx=1;
            }
            if(m[0][1] == 1 && m[1][1] == 1 && m[2][1] == 1){
                flagx=1;
            }
            if(m[0][2] == 1 && m[1][2] == 1 && m[2][2] == 1){
                flagx=1;
            }
            if(m[0][0] == 1 && m[1][1] == 1 && m[2][2] == 1){
                flagx=1;
            }
            if(m[0][2] == 1 && m[1][1] == 1 && m[2][0] == 1){
                flagx=1;
            }
            // para os zeros
            if(m[0][0] == 2 && m[0][1] == 2 && m[0][2] == 2){
                flag0=1;
            }
            if(m[1][0] == 2 && m[1][1] == 2 && m[1][2] == 2){
                flag0=1;
            }
            if(m[2][0] == 2 && m[2][1] == 2 && m[2][2] == 2){
                flag0=1;
            }
            if(m[0][0] == 2 && m[1][0] == 2 && m[2][0] == 2){
                flag0=1;
            }
            if(m[0][1] == 2 && m[1][1] == 2 && m[2][1] == 2){
                flag0=1;
            }
            if(m[0][2] == 2 && m[1][2] == 2 && m[2][2] == 2){
                flag0=1;
            }
            if(m[0][0] == 2 && m[1][1] == 2 && m[2][2] == 2){
                flag0=1;
            }
            if(m[0][2] ==  2 && m[1][1] == 2 && m[2][0] == 2){
                flag0=1;
            }

            if(contx<cont0){ // nunca pode se ter mais peças 0
                cout<<"no\n";
            }else if(contx-cont0>1){
                cout<<"no\n";
            }else if(flagx==1 && flag0==1){ // os dois não podem ganhar.
                    cout<<"no\n";
            }else if(flagx==1 && contx-cont0 != 1){ // sempre que x ganhar o numero de x vai ser maior que o de 0
                    cout<<"no\n";
             }else if(flag0==1 && contx!=cont0){ // sempre que 0 ganhar o numero de x é igual o de 0
                    cout<<"no\n";
             }else{
                    cout<<"yes\n";
             }

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                     m[i][j] = 0;
                }
            }
    flagx=0;
    flag0=0;
    n--;
    contx=0;
    cont0=0;
    }
}