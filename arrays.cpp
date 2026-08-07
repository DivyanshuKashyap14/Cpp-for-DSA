// #include <iostream>
// #include <climits>   // for INT_MAX and INT_MIN
// using namespace std;

// int getMin(int num[], int n) {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         if (min > num[i]) {
//             min = num[i];
//         }
//     }
//     return min;
// }

// int getMax(int num[], int n) {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (max < num[i]) {
//             max = num[i];
//         }
//     }
//     return max;
// }

// int main() {
//     int size;
//     cin >> size;

//     int num[100];
//     for (int i = 0; i < size; i++) {
//         cin >> num[i];
//     }

//     cout << "Max element: " << getMax(num, size) << endl;
//     cout << "Min element: " << getMin(num, size) << endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// bool search(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }

//     }
//     return 0;

// }
// int main()
// {
//     int arr[10]={2, 5, 6, 1, 2, 3, 4, 5, 9, 10 };
//     int key;
//     cin>>key;
//     bool found = search(arr,10,key);
//     if(found){
//         cout<<"key is present"<<endl;
//     }
//     else{
//         cout<<"key is absent"<<endl;
//     }
//     return 0;
// }                                 //LINEAR SEARCH


// #include<iostream>
// using namespace std;
// void reverse(int arr[], int n) {
//     for(int i = 0; i < n - 1; i += 2) {
//         swap(arr[i], arr[i + 1]);
//     }
// }
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int arr[6]={1,2,3,4,5,6};
//     int brr[6]={7,8,9,10,11,5};
//     reverse(arr,6);
//     reverse(brr,6);
//     printarray(arr,6);
//     printarray(brr,6);
//     return 0;
// }                                  REVERSING THE ARRAY ALTERNATELY


// #include<iostream>
// using namespace std;

// int sumarray(int arr[], int n)
// {
//     int sum = 0;

//     for(int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     return sum;
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};

//     cout << "Sum = " << sumarray(arr, 5);

//     return 0;                               SUM OF AN ARRAY
// }



// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     bool isprime=true;
//     if(n<=1){
//         return false;
//     }
//     else{
//         for(int i=2;i<=pow(n,0.5);i++){
//             if(n%i==0){
//                 isprime= false;
//                 break;
//             }
//         }
//     }
//     if(isprime){
//         cout<<"is prime"<<endl;
//     }
//     else{
//         cout<<"not prime ";
//     }
// }


// #include<iostream>
// using namespace std;
// int getsum(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements in the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Sum= "<<getsum(arr,n);                        SUM OF THE ELEMENTS IN THE ARRAY
//     return 0;
// }


//485. COUNT THE MAX NUMBER OF ONES

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count=0;
//         int maxx=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 count++;
//                 maxx=max(maxx,count);
//             }
//             else{
//                 count=0;
//             }
//         }
//         return maxx;
        
//     }
// };