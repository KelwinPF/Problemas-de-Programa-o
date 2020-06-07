#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c;

    cin >> t;

    for(int i=1;i<t+1;i++){
	cin>>a>>b>>c;
	if((a > b && a < c)||(a > c && a < b))
		cout << "Case " << i << ": " << a << "\n";
	if((b > a && b < c)||(b > c && b < a))
		cout << "Case " << i << ": " << b << "\n";
	if((c > a && c < b)||(c > b && c < a))
		cout << "Case " << i << ": " << c << "\n";
    }
}