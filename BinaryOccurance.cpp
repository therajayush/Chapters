#include <iostream>
using namespace std;

int firstoccurance(int array[], int size, int key){
    int start = 0;
    int end= size-1;
    int ans =-1 ;
    
   int mid = (start+(end-start))/2;
    
    while(start<=end){
        if(key==array[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(key>array[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= (start+(end-start))/2;
    }
    return ans;
}

int lastoccurance(int array[], int size, int key){
    int start = 0;
    int end= size-1;
    int ans = -1;
    
    int mid= (start+(end-start))/2;
    
    while(start<=end){
        if(key==array[mid]){
            ans=mid;
            start=mid+1;
        }
        else if(key>array[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= (start+(end-start))/2;
    }
    return ans;
}

int main() {
    
    
    int arrayis[5]={1,2,3,3,5};
    
    int firstindex=firstoccurance(arrayis,5,3);
    int lastindex=lastoccurance(arrayis,5,3);
    cout << "first occurance of 3 is" << firstindex<<endl;
    cout << "last occurance of 3 is" << lastindex<<endl;


    return 0;
}
