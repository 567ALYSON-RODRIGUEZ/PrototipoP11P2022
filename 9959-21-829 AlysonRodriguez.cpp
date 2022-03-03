#include <iostream>

using namespace std;

int main(){
    int N=10;
    int v [N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int x = 1;

     while (x<N){
        x++;
        x = x * x;
 }
    for(x=N-1; x >= 0; x--);
    {
        if (v[x] == 0){
            v[x] = v[x-1] + v[x+1];
            cout<< printf("%d , ", v[x]);
                      }
      }
    return 0;
    }

