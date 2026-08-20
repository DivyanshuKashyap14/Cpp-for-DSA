// 1281. subtract the product and sum of digits of an integers

// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int product=1;
//         int sum=0;
//         while(n!=0){
//             int rem=n%10;
//             product=product*rem;
//             sum=sum+rem;
//             n=n/10;
//         }
//         int ans=product-sum;
//         return ans;
//     }
// };


// 191. number of 1 bits

// class Solution {
// public:
//     int hammingWeight(int n) {
//         int count=0;
//         while(n!=0){
//             if(n&1){
//                 count++;
//             }
//             n=n>>1;
//         }
//         return count;
//     }
// };


// 7. Reverse the integer

// class Solution {
// public:
//     int reverse(int x) {
//         int ans=0;
//         while(x!=0){
//             int digit=x%10;
//             if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
//                 return 0;
//             }
//             ans=(ans*10)+digit;
//             x=x/10;
//         }
//         return ans;
        
//     }
// };


// 1009. complement of base 10 integer

// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         int m=n;
//         int mask=0;
//         if(n==0){
//             return 1;
//         }
//         while(m!=0){
//             mask=(mask<<1)|1;
//             m=m>>1;
//         }
//         int ans=(~n)&mask;
//         return ans;
//     }
// };


//231. power of 2

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         for(int i=0;i<=30;i++){
//             int ans=pow(2,i);
//             if(ans==n){
//                 return true;
//             }
//         }
//         return false;
//     }
// };


//   FizzBuzz problem

// class Solution {
// public:
//     vector<string> fizzBuzz(int n) {
//         vector<string> answer;

//         for (int i = 1; i <= n; i++) {
//             if (i % 15 == 0)
//                 answer.push_back("FizzBuzz");  //I push the element at the end
//             else if (i % 3 == 0)
//                 answer.push_back("Fizz");
//             else if (i % 5 == 0)
//                 answer.push_back("Buzz");
//             else
//                 answer.push_back(to_string(i));  //converted int to str
//         }

//         return answer;
//     }
// };


// 189. REVERSE THE ARRAY TO THE Kth ELEMENTS

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         k=k%n;
//         reverse(nums.begin(),nums.end()-k);
//         reverse(nums.end()-k,nums.end());
//         reverse(nums.begin(),nums.end());
        
//     }
// };


//268. FIND THE MISSING NUMBER

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int xor1=0;
//         for(int i=0;i<nums.size();i++){
//             xor1=xor1^i+1;
//         }
//         int xor2=0;
//         for(int i=0;i<nums.size();i++){
//             xor2=xor2^nums[i];
//         }
//         int ans= xor1^xor2;
//         return ans;
        
//     }
// };


// 75. SORT COLOURS
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low=0;
//         int mid=0;
//         int high = nums.size()-1;
//         while(mid<=high){
//             if(nums[mid]==0){
//                 swap(nums[low],nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(nums[mid]==1){
//                 mid++;
//             }
//             else{
//                 swap(nums[mid],nums[high]);
//                 high--;
//             }
//         }
        
//     }
// };