#include <iostream>

using namespace std;

int main()
{
    int s,x = 2,y = 1,aux = 0;
    cin >> s;
    cout<< s << ":\n";
    while(true){
        aux = aux + x + y;
        if(aux == s || (aux + x) == s){
            cout << x << "," << y << "\n";
        }

        if((x+y)==s){
            break;
        }

        if(aux > s){
            aux = 0;
            if(x > y){
                y++;
            }else if(x == y){
                x++;
            }
        }
    }
}