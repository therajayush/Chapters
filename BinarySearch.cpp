#include <iostream>
using namespace std;

int binarysearch (int array[], int size, int key){
    int start = 0;
    int end = size-1;
    
    int mid=(start+end)/2;
    
    while (start<=end){
        if(key==array[mid]){
            return mid;
        }
        if (key>array[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main() {
    
    int array[6]={1,3,5,7,9,13};
    int Index= binarysearch(array,6, 9);
    
    cout << "Index of 9 is" << Index << endl;
   
    return 0;
}
