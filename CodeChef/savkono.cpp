#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[],int low, int high) {
    int pivot = a[high];
    int i = (low-1);

    for(int j = low; j <= (high - 1); j++) {
        if(a[j]<pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return (i+1);
}

void quicksort(int a[],int low, int high) {
    if(low < high) {
        int pi = partition(a, low, high);
        quicksort(a, low, pi-1);
        quicksort(a, pi+1, high);
    }
}

void printArray(int arr[], int size) {  
    for (int m = 0; m < size; m++) 
        cout << arr[m] << " "; 
    cout << endl; 
} 

int main() {
    
    int t,z,n;  
    cin>>t;
    for(int r=0; r<t; r++) {
        cin>>n>>z;
        int a[n];   
        for(int p=0;p<n;p++) {  
            cin>>a[p];  
        }
    
        int counter = 0;
        
        while(z>0){
            quicksort(a,0,n-1);
            z = z - a[n-1];
            a[n-1] = (a[n-1]/2);
            counter = counter + 1;
        }

    cout<<counter;
    }
    
    
    return 0;
}