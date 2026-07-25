// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     for (i=1;i<=10;i++){
//         cout<<n<<" x "<<i<<"="<<n*i<<endl;
//     }
// }                                for multiplication table


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"n:";
//     cin>>n;
//     int i=1;
//     int sum=0;
//     for(i=0;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"sum:"<<sum;
// }                               for sum of n numbers



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=10;
//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b<<" ";
//     for (int i=1;i<=10;i++){
//         int next=a+b;
//         cout<<next<<" ";
//         a=b;
//         b=next;


//     }
// }                             for fabonacci series



#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    if(n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";

    return 0;
}