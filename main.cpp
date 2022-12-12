#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int N;
    cin >> N;
    float num[D];
    for(int i=0; i<N; i++){
        cin >> num[i];
    }
    cout << funzione(num, N);
    return 0;
}
