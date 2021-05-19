#include <bits/stdc++.h>
using namespace std;
//M1 o(nlogn)+o(n)+o(n) and o(n) foe extra array


//M2 o(n+m) and o(n+m) using merge function of merge sort

// int main(int argc, char const *argv[])
// {
// 	int arr1[] = {1, 1, 1, 1, 1, 12, 222};
// 	int arr2[] = {5, 31, 333};
// 	int n = sizeof(arr1) / sizeof(int);
// 	int m = sizeof(arr2) / sizeof(int);
// 	int i = 0, j = 0, k = 0;
// 	int arr3[n + m];
// 	while (i < n && j < m)
// 	{
// 		if (arr1[i] < arr2[j])
// 			arr3[k++] = arr1[i++];
// 		else
// 			arr3[k++] = arr2[j++];
// 	}
// 	while (i < n)
// 		arr3[k++] = arr1[i++];
// 	while (j < m)
// 		arr3[k++] = arr2[j++];
// 	int a = 0, b = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		arr1[a++] = arr3[i];
// 	}
// 	for (int i = 0; i < m; ++i)
// 	{
// 		arr2[b++] = arr3[n + i];
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout << arr1[i] << " ";
// 	}
// 	cout << endl;
// 	for (int i = 0; i < m; ++i)
// 	{
// 		cout << arr2[i] << " ";
// 	}

// 	return 0;
// }

//M2 o(N) AND o(n) using map only possible

// if no duplcates

// int main(int argc, char const *argv[])
// {
// 	int arr1[] = {1, 1, 1, 1, 1, 12, 222};
// 	int arr2[] = {5, 31, 333};
// 	int n = sizeof(arr1) / sizeof(int);
// 	int m = sizeof(arr2) / sizeof(int);
// 	map<int, bool> mp;
// 	for (int i = 0; i < n; ++i)
// 		mp[arr1[i]] = true;
// 	for (int i = 0; i < n; ++i)
// 		mp[arr2[i]] = true;
// 	for (auto i : mp)
// 		cout << i.first << " ";

// 	return 0;
// }


// m3 o(n*m) o(1)

//  void sort2(int arr[],int n)
//    {
//    	// like insertion sort
//        int key = arr[0],j;
// 	for (j = 1; j < n && arr[j] < key ; ++j)
// 	{
// 		arr[j-1] = arr[j];
// 	}
// 	arr[j-1] = key;
//    }
// void merge(int arr1[], int arr2[], int n, int m) {

//   for(int i=0;i<n;i++)
//   {
//       if(arr1[i]<=arr2[0])
//       continue;
//       else
//       {
//           swap(arr1[i],arr2[0]);
//           sort2(arr2,m);
//       }
//   }
// }


//m4 gap method
