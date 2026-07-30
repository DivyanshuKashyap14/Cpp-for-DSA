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