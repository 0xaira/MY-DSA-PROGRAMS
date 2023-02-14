#include<iostream>
using namespace std;

long long merge(int *arr, int s, int e) {
    long long invCount = 0;
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex] = second[index2];
            invCount+=len1-index1;
            mainArrayIndex++;
            index2++;
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }
    return invCount;
    delete []first;
    delete []second;


}

long long mergeSort(int *arr, int s, int e) {
    long long invCount;
    //base case
    if(s < e) {
       int mid = (s+e)/2;
    
    //left part sort karna h 
    invCount= mergeSort(arr, s, mid);
    
    //right part sort karna h 
    invCount += mergeSort(arr, mid+1, e);

    //merge
    invCount += merge(arr, s, e);
    }
    
    
    return invCount;
}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;
    long long invCount;
    mergeSort(arr, 0, n-1);
    merge( arr, 0, n-1);
    
    cout<<invCount<<endl;
    return 0;
}