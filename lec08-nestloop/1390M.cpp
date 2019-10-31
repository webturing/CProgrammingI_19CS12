#include<bits/stdc++.h>
using namespace std;
int main() {
    int h, w, z = 0;
    while(cin >> h >> w) {
        if(h == 0 and w == 0)
            break;
        if(z++)
            cout << endl;
        for(int x = 0; x < h; x++) {
            for(int y = 0; y < w; y++) {
                if(x==0||x==h-1||y==0||y==w-1)cout<<"#";
                else cout<<".";
            }
            cout << endl;
        }
    }
    return 0;
}
