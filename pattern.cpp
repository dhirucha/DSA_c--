// pattern-1

// #include<iostream>

// using namespace std;

// int main(){

//     int n = 4;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<'*' <<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// pattern-2

//  #include<iostream>

//  using namespace std;
//  int main(){
//      int n = 4;
//      for(int i=0;i<n;i++){
//         char ch = 'A';
//         for(int j=0; j<n; j++){
//             cout<< ch <<" ";
//             ch = ch + 1;
//         }
//         cout<<endl;

//      }
//      return 0;
//  }

// pattern-3

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n = 3;
//     int num = 1;
//     for(int i=0; i<n; i++){
        
//         for(int j=0; j<n; j++){
//             cout<<num <<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pattern-4

#include <iostream>

 using namespace std;
 int main()
 {
     int n = 3;
     char ch = 'A';
     for (int i = 0; i < n; i++)
     {
        for(int j=0; j<n; j++){
            cout<<ch <<" ";
            ch++;
        }
        cout<<endl;
     }
     

     return 0;
 } 