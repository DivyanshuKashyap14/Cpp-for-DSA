//             While loop          //

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i+=1;
//     }
//     return 0;
// }                [print n numbers in same line with space]

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"n:";
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         sum+=i;
//         i+=1;
//     }
//     cout<<"sum:"<<sum;
//     return 0;
// }              [sum of n numbers]

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"n:";
//     cin>>n;
//     int i=1;
//     int sum=0;
//     while(2*i<=n){
//         sum+=2*i;
//         i+=1;
//     }
//     cout<<"sum:"<<sum;
//     return 0;
// }           [sum of all even numbers]

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"n:";
//     cin>>n;
//     int i=2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"not prime"<<endl;
//         }
//         else{
//             cout<<"prime for"<<i<<endl;
//         }
//         i+=1;
//         break;
//     }
// }              [prime or not]



//       Pattern Problems    //



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"n:";
//     cin>>n;                         for * * * * *
//     int i =1;                           * * * * *
//     while(i<=n){                        * * * * *
//         int j =1;                       * * * * *
//         while(j<=n){                    * * * * *
//             cout<<"*"<<" ";
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;                    for 1 1 1
//         while(j<=n){                    2 2 2
//             cout<<i;                    3 3 3
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n){
//         int j=1;                for 12345
//         while(j<=n){                12345
//             cout<<j;                12345 and so on 
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){                    for 1 2 3 4 
//         int j=1;                        5 6 7 8
//         while(j<=n){                    9 10 11 12 
//             cout<<count<<" ";           13 14 15 16 and so on
//             count+=1;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){              for *
//             cout<<"*";                **
//             j+=1;                     *** and so on 
//         }
//         cout<<endl;
//         i+=1;
//     }
// }