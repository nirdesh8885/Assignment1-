#include<bits/stdc++.h>
using namespace std;

int MaxSubArraySum(int a[], int size)
{
    int max= INT_MIN, s = 0;
 
    for (int i = 0; i < size; i++)
    {
       s = s+ a[i];
        if (max < s)
            max = s;
 
        if (s < 0)
            s = 0;
    }
    return max;
}
 
int main()
{
    int a[] = {1,2,3,-2,5};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = MaxSubArrSum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
