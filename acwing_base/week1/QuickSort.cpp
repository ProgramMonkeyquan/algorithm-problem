//
// Created by quanhangbo on 2021/11/2.
//

#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int arr[N];
int n;


void quick_sort(int arr[], int l, int r){
    if(l >= r) return;
    int x = arr[l], i = l - 1, j = r + 1;
    while(i < j){
        do i ++ ; while(arr[i] < x);
        do j -- ; while(arr[j] > x);
        if(i < j) swap(arr[i], arr[j]);
    }
    for(int i = 0; i < r - l + 1; i ++ ){
        cout << arr[i] << " ";
    }
    cout << "------------" << endl;
    cout << j << endl;
    quick_sort(arr, l, j);
    quick_sort(arr, j + 1, r);
}


//int position(int arr[], int l, int r){
//    int x = arr[l];
//    while(l < r){
//        while(l < r && arr[r] >= x){
//            r --;
//        }
//        arr[l] = arr[r];
//        while(l < r && arr[l] <= x){
//            l ++;
//        }
//        arr[r] = arr[l];
//    }
//    arr[l] = x;
//    return l;
//}
//
//void quick_sort2(int arr[], int l, int r){
//    if(l < r){
//        int mid = position(arr, l, r);
//        quick_sort2(arr, l, mid);
//        quick_sort2(arr, mid + 1, r);
//    }
//}
int main(void){

    scanf("%d", &n);
    for(int i = 0; i < n; i ++ ){
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, n - 1);
    //quick_sort2这种方法一般是教科书中的写法
    //quick_sort2(arr, 0, n - 1);
    cout << n << endl;
    for(int i = 0; i < n; i ++ ){
        printf("%d ", arr[i]);
    }
}


