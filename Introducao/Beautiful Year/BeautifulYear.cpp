#include <iostream>

using namespace std;

int main()
{
    int x,aux[4],potencia=1;
    cin >> x;
    while(true){
        x = x+1;

        for(int i=0;i<4;i++){
            aux[i] = (x/potencia)%10;
            potencia = potencia * 10;
        }

        if(aux[0]!=aux[1] && aux[0]!=aux[2] && aux[0]!=aux[3] && aux[1]!=aux[2] && aux[1]!=aux[3] && aux[2]!=aux[3]){
            cout<< x <<"\n";
            break;
        }
        potencia = 1;
    }

}