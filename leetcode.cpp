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