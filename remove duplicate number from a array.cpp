 #include<bits/stdc++.h>
 using namespace std;
int remove(int arr[], int n)
{
	if (n==0 || n==1)
		return n;


	int s = 0;
	for (int i=0; i < n-1; i++)
		if (arr[i] != arr[i+1])
			arr[s++] = arr[i];

	arr[s++] = arr[n-1];

	return s;
}


int main()
{
	int arr[] = {2,2,2,2,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	n = remove(arr, n);
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}

