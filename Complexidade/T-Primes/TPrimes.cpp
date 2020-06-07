#include <iostream>
#include <math.h>

using namespace std;

long long x;

long long raizinteiro;

int main()
{
    int flag = 0,n;

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cin>>n;

    while(n){
        cin>>x;
        if(x == 1||(x%2==0 && x>4)){
            cout<<"NO\n";
        }else{
            raizinteiro = sqrt(x);
            if(raizinteiro>7 && (raizinteiro%2==0 || raizinteiro%3==0 || raizinteiro%5==0 || raizinteiro%7==0)){
                    cout<<"NO\n";
            }else if(raizinteiro*raizinteiro == x){
                        int raiz2 = sqrt(raizinteiro);
                        for(int i=2;i<=raiz2;i++){
                            if(raizinteiro%i == 0){
                                flag = 1;
                                cout<<"NO\n";
                                break;
                            }
                        }
                        if(flag == 0){
                            cout<<"YES\n";
                        }
            }else{
                cout<<"NO\n";
            }
        }
    flag =0;
    n--;
    }
}