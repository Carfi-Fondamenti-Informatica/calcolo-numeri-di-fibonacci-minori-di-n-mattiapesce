#include <iostream>
using namespace std ;

int main() {
    int a=1 , b=0 , c=0 , n=0 , i=0 ;
    cin >> n ;
    b=i ;
    if (n!=0){
        cout << "1" << endl ;
    }
    for(int i=1 ; i<=n ; i++) {
        c=(b+a) ;
        b=a ;
        a=c ;
        if(c<=n) {
            cout << c << endl ;
        }
    }
    return 0;
}
