#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0;i<n;i++) {
        char s;
        cin>>s;
        if ((s>'A') and (s<'Z')){
            cout<<char(int(s)+32);
        }
        else cout<<char(int(s)-32);
        cout<<endl;
    }

    return 0;
}