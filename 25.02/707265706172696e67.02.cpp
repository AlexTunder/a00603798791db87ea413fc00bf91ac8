// Array looks like
/**
 * 1 2 3 4 5 6
 *  < < < < <
 *  we shouls to make this (->) view
 * 2 1 4 3 6 5
 *  > < > < >
 * Короче, считаем по двойками и переворачиваем эту пару
 * */

#include <iostream>
using namespace std;

int main(){
    int len = 0;
    cin >> len;
    int *arr = (int*)malloc(sizeof(int) * len);
    for(int i = 0; i < len; i++){
        if(i%2==0)
            arr[i] = i + 2;
        else arr[i] = i;
    }
    if(len%2==1){
        arr[len-1] = len;
    }
    for(int i = 0; i < len; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
    return 0;
}