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


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;                     
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i;
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
//     while(i<=n){               
//         int j=1;                       
//         while(j<=i){                     
//             cout<<count<<" ";           
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
//     int count=1;
//     while(i<=n){               
//         int j=1;
//         int value=i;                        // when we have to print
//         while(j<=i){                    1
//             cout<<value<<" ";           23
//             value+=1;                   345 
//             j+=1;                       4567
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
//         while(j<=n){
//         char ch='A'+i-1;
//         cout<<ch<<" ";
//         j+=1;
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
//         while(j<=n){
//         char ch='A'+j-1;
//         cout<<ch<<" ";
//         j+=1;
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
//     char value='A';
//     while(i<=n){                      for A B C D
//         int j=1;                          E F G H
//         while(j<=n){                      I J K L
//             char start='A';               M N O P and so on   
//             cout<<value<<" ";           
//             value+=1;
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
//     int n;                             for A B C D
//     cin>>n;                                B C D E 
//     int i=1;                               C D E F
//     while(i<=n){                           D E F G and so on
//         int j=1;
//         while(j<=n){
//             char start='A'+i+j-2;
//             cout<<start<<" ";
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
//         char start='A'+n-i;
//         while(j<=i){
//             cout<<start<<" ";
//             start+=1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }