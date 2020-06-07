#include <iostream>

using namespace std;

int main()
{
    int n,m,valor,cont = 0;

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cin>>n>>m;

    int vetor[n] = {0};

    for(int i=0;i<m;i++){
        cin>>valor;
        if(vetor[valor-1] > 0){
            cout<<'0';
            vetor[valor-1]++;

        }else{
           cont++;

           vetor[valor-1]++;

           if(cont == n){
            for(int j=0;j<n;j++){
                if(vetor[j] == 1)
                    cont--;
                vetor[j]--;
            }
            cout<<'1';
           }else{
            cout<<'0';
           }
        }
    }
}