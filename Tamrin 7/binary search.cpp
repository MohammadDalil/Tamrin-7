#include <iostream>
using namespace std;
int binarysearch(int A[], int left, int right, int number);

int main()
{
    int A[] = {5,15,222,152,33,10,25,98,63};
    int x;
    cout << "Please enter your search input : ";
    cin >> x;
    int n = sizeof(A) / sizeof(A[0]);
    int location = binarysearch(A, 0, n - 1, x);
    if (location == -1)
        cout << "Sorry mate... there is no number for you...!";
    else
        cout << "Okay mate... I found it at index " << location;
        
    return 0;
    
}

int binarysearch(int A[], int left, int right, int number)
{
    if (right >= left)
    {
        int mid = left + (right - 1) / 2;
        if (A[mid] == number)
            return mid;
        if (A[mid] > number)
            return binarysearch(A, left, mid - 1, number);
        else
            return binarysearch(A, mid + 1, right, number);
    }
    return -1;
}

