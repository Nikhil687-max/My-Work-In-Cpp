#include <bits/stdc++.h>
using namespace std;


char W(char c1, char c2){
    if(c1 == 'R'){
        if(c2 == 'P'){
            return c2;
        }
        else if(c2 == 'S'){
            return c1;
        }
        else{
            if(c1 < c2)return c1;
            else return c2;
        }
    }else if(c1 == 'P'){
        if(c2 == 'S'){
            return c2;
        }
        else if(c2 == 'R'){
            return c1;
        }
        else{
            if(c1 < c2)return c1;
            else return c2;
        }
    }else{
        if(c2 == 'R'){
            return c2;
        }
        else if(c2 == 'P'){
            return c1;
        }
        else{
            if(c1 < c2)return c1;
            else return c2;
        }
    }
}


char W(string iut, int low, int high){
    char w;
    for(int i = low;i < high;i++){
        w = W(iut[i] , iut[i+1]);
    }
    return w;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int N;
        string iut, s;
        cin >> N >> iut;
        if(N == 1)cout << iut << endl;
        else {
            for(int i = 0;i < N;i++){
                s += W(iut, i, N);
            }
            cout << s << endl;
        }
    }
    return 0;
}
