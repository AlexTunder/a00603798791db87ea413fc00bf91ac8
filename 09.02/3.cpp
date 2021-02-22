#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    int *bestArr = 0x0;
    long long result = 0, ns = 0;
    cin >> n;
    bestArr = new int[n];
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a <= b && a <= c)
            bestArr[i] = a;
        else if(b <= c)
            bestArr[i] = b;
        else bestArr[i] = c;
        if(result + bestArr[i] > 300) break;
        else result += bestArr[i];
        if(result <= 300) ns++;
    }
    printf("%i %i", ns, result);
    // std::cout << result << endl;
}
