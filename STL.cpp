// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//     deque<int>d;
// d.push_back(1);
// d.push_front(2);
// cout<<endl;
// cout<<"Print first index elemant: "<<d.at(1)<<endl;
// cout<<"front "<<d.front()<<endl;
// cout<<"back "<<d.back()<<endl;
// cout<<"empty or not  "<<d.empty()<<endl;
// cout<<"before erase:"<<d.size()<<endl;
// d.erase(d.begin(),d.begin()+1);
// cout<<"afer erase: "<<d.size()<<endl;
// for(int i:d){
//     cout<<i<<endl;
// }
// }                                    DEQUE STL


// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
//     list<int>l;
//     l.push_back(1);
//     l.push_front(2);
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"after erase: "<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
// }                           LIST IN STL


// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<string>s;
//     s.push("div");
//     s.push("nish");                          ///// LIFO
//     s.push("dabi");
//     cout<<"top element: "<<s.top()<<endl;
//     s.pop();
//     cout<<"size of stack: "<<s.size()<<endl;
//     cout<<"empty or not: "<<s.empty()<<endl;
// }                                            /////////STACK IN STL//////////


//SIMILAR FOR QUEUE, BUT QUEUE FOLLOWS FIRST IN FIRST OUT



//SET -> STORES ONLY UNIQUE ELEMENTS

// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int>s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(3);
//     s.insert(1);
//     s.insert(1);
//     s.insert(2);
//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;
// set<int>::iterator it=s.begin();
// it++;
//  s.erase(it);
//  for(auto i:s){
//     cout<<i<<endl;
//  }cout<<endl;
//  cout<<"5 is present or not: "<<s.count(5)<<endl;
//  set<int>::iterator itr=s.find(5);
//  for (auto it=itr;it!=s.end();it++){
//     cout<<*it<<" ";
//  } 
// }                               //SETS IN STL